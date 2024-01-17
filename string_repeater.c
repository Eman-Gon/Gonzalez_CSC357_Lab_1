#include <stdio.h>

int main(int argc, char *argv[]){

     int num = 0;
     char word[100] = "";

    printf("Please enter a non-negative number: ");

 
    scanf("%d", &num);
    char *s = "";
    char *endptr;
    ong num;
    num = strtol(s, &endptr, 10); // Base 10 (decimal) conversion

    if (num < 0) {
        printf("The number has to be non-negative.\n");
        return 0;
    }

    printf("Please enter a word: ");
    
     
    scanf("%s", word);

    printf("The number is: %d\nThe word is: %s\n", num, word);

 for (int i = 0; i < num; i++) {
        printf("%s\n", word);
    }

    return 0;
}