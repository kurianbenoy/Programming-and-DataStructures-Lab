// Write a C program to read a string from the user and check whether the string is a pangram or not.

// A pangram is a sentence containing every letter in the English alphabet. If the sentence is not a pangram print the alphabets that are missing that will make the sentence a pangram.

// For example, the sentence, “The quick brown fox jumps over the lazy dog” is a pangram as it contains all the characters from ‘a’ to ‘z’. The sentence “The quick brown fox jumps over the dog” is not a pangram because the characters ‘a’, ‘l’, ‘z’ and ‘y’ are missing.

// Sample Input/Output
//     Input:
//     The five boxing wizards jump quickly
//     Output
//     Pangram
//     Input:
//     bcdefghijklmnopqrstuvwxz.
//     Output
//     Not Pangram
//     a y
#include<stdio.h>
#include<string.h>
#define MAX_LIMIT 1000

int main() {
    char s[MAX_LIMIT];
    int character_hash[26];
    scanf("%s",s);
    
    int test = 1;
    
    printf("Length %d",strlen(s));
    printf("%s", s);
    
    for(int i=0; i<strlen(s); i++) {
        printf("%d\n", s[i]);
        if(97<=s[i]<=122) {
            character_hash[s[i]-97] = 1;
        }
        if(65<=s[i]<=90) {
            character_hash[s[i]-65] = 1;
        }
    }
    
    for(int i=0;i<26; i++) {
        printf("%d",character_hash[i] );
        if(character_hash[i]==0) {
            test = 0;
        }
    }
    if(test==0) {
        printf("Not Panagram");
    }
    else {
        printf("Panagram");
    }
}
