#include <stdio.h>
#define MAX 50

int countVowel(char []);

void main() {
    char text[MAX];
    int cVowel;
    
    printf("Enter text : ");
    scanf("%s", text);
    
    cVowel = countVowel(text); 
    
    printf("Text : [%s] has %d vowels\n", text, cVowel);
}

int countVowel(char t[]) {
    int i = 0, count = 0;
    
   
    int cA = 0, cE = 0, cI = 0, cO = 0, cU = 0; 

    while (i < MAX && t[i] != '\0') {
        
        if (t[i] == 'A' || t[i] == 'a') {
            cA++;
            count++;
        } 
        else if (t[i] == 'E' || t[i] == 'e') {
            cE++;
            count++;
        } 
        else if (t[i] == 'I' || t[i] == 'i') {
            cI++;
            count++;
        } 
        else if (t[i] == 'O' || t[i] == 'o') {
            cO++;
            count++;
        } 
        else if (t[i] == 'U' || t[i] == 'u') {
            cU++;
            count++;
        }
        i++;
    }

   
    printf("--- Vowel Details ---\n");
    printf("A = %d\n", cA);
    printf("E = %d\n", cE);
    printf("I = %d\n", cI);
    printf("O = %d\n", cO);
    printf("U = %d\n", cU);
    

    return(count);
}
