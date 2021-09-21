#include<stdio.h>

int main() {
	int number1, number2, flag=0;
	scanf("%d %d", &number1, &number2);

	for(int i=number1; i<=number2; i++) {
		for (int j=2; j<i/2;j++) {
			// printf("%d", j);
			if(i%j==0) {
				flag=1;
			}
		}
		if (flag==0)
		{
				printf("%d ", i);
		}
		flag = 0;
	}

}

