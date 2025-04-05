#include <stdio.h>

// Користувач вводить малу літеру англійського алфавіту. Перетворіть її на велику.
int main()
{    
    int count = 0;
    char letter;
   
    printf("Enter letter: ");

    while(count == 0){
        scanf(" %c", &letter);    
        if (letter >= 'a' && letter <= 'z'){
            printf("Big letter = %c", letter - 32);
            count++;
        } else {
            printf("Enter correct letter: ");        
        }
    } 

    return 0;
}