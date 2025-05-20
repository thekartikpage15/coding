#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int main(){

    printf("Welcome to the guessing number game!");

    int guess, random;
    srand(time(0));
    random = (rand() % 100) +1;
    int count = 0;



    do{
        printf("Enter the number between (1-100): ");
        scanf("%d", &guess);
        count++;

        if(guess > random){
            printf("Enter smaller number. \n");
        } else if(guess < random){
            printf("Enter a bigger number. \n");
        }else{
            printf("You have guessed the correct number in %d counts \n", count);
        }



        
    } while(guess != random);



    return 0;
}