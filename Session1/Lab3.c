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
    char string[MAX_LIMIT];
    int character_hash[26]={0};
    int pancount = 0;
    
    fgets(string, 1000, stdin);


    for(int i=0; i<strlen(string); i++) {
        if('a'<=string[i] && string[i]<='z')  {
            character_hash[string[i]-'a'] += 1;
        }
        else if('A'<=string[i] && string[i]<='Z') {
            character_hash[string[i]-'A'] += 1;
        }
    }
    
    for(int i=0;i<26;i++){
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
            printf("%c ", i+'a'); }
        }
    }
    
}
