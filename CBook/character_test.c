#define _GNU_SOURCE
#include<stdio.h>
#include<string.h>
#define MAXLINE 1000

int main() {
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	printf("%d", getline(line, MAXLINE));
	return 0;
}

int getline(char s[], int lim)
{
	int c, i;

	for(i=0;i<lim -1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c=='\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
