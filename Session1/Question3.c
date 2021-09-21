#include<stdio.h>
#include<string.h>
#define MAX_LIMIT 1000

int main() {
    char str[1000];
    int character_hash[26]={0}, nc=0, bytes_read, nbytes = 100;
    int pancount = 0;
    int index;

    // str = (char *) malloc(MAX_LIMIT * sizeof(char));
    // bytes_read = getline (&str, &nbytes, stdin);
    fgets(str, 1000, stdin);
    // printf("%s", str);
    for(int i=0; i<strlen(str); i++) {
        // printf("%d", str[i]);
        if('a'<=str[i] && str[i]<='z')  {
            // printf("Enter\n");
            index = str[i] - 'a';
        }
        else if('A'<=str[i] && str[i]<='Z') {
            index = str[i] - 'A';
        }
        // printf("index %d\n", index);
        character_hash[index] = 1;
    }
    
    for(int i=0;i<26;i++){
        // printf("%d", character_hash[i]);
        if(character_hash[i]==0) {
            pancount=1;   
        }
    }

    if(pancount==0) {
        printf("Pangram");
    }
    else if(pancount==1) {
        printf("Not Pangram\n");
        for(int i=0;i<26;i++) {
            if(character_hash[i]==0) {
            printf("%c ", i+'a');
            }
        }
    }

    return 0;
}
