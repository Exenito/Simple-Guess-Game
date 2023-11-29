// This is a guess game.
#include <stdio.h>

int main () {
int guess; // declare variables

printf("This is a guess game, try to guess the correct number!\n"); // game description

printf("Enter your number: "); // user input
scanf("%d", &guess);

if (guess == 9) { // if number is correct
    printf("%d is the correct number!", guess); 
}
else { // if number is false
    printf("%d is the wrong number... Try again!", guess);
}

    
    return 0;
}

