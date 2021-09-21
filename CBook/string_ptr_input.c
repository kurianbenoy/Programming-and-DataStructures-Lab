#include<stdio.h>
#include<stdlib.h>

int main() {
    char *str, c;
    int i = 0;

    str = (char *)malloc(sizeof(char));

    if(str == NULL) {
        printf("Memory not allocated");
        exit(0);
    }

    printf("Enter your string :");
    c = getc(stdin);

    while(c !='\n') 
    {
        *(str+i) = c;
        i++;
        str = (char *)realloc(str, ((i+1)*sizeof(char)));
        if(str == NULL)
        {
            printf("Memory not allocated");
            exit(0);
        }
        c = getc(stdin);
    }

    *(str+i) = '\0';
    printf("\n Entered string is: %s", str);
    free(str);

    return 0;
}