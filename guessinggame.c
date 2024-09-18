#include<stdio.h>
#include<stdlib.h> // for random number generation
#include<time.h>   // for random number generation

int main(){
    int random, guess; //random = we generate on our side  , guess =user will guess 
    int number_of_guess;
    srand(time(NULL)); //to seed the random number 


    printf("Welcome to the world of Guessing Numbers\n");
    random = rand() % 100 + 1; //generating between 0 to 100
    //printf("Number generated is:%d",random);
     do{
        printf("\n Please enter your Guess between(1 to 100) : ");
        scanf("%d",& guess);
        number_of_guess++;

        if(guess < random){
            printf(" Guess larger number ");
        }else if(guess >random ){
            printf("Guess smaller number ");
        }else{
            printf(" Congratulation !!!!!! You have successfull guessed the Number in %d attempts ." ,number_of_guess);
        }
     } while(guess !=random);
printf("\n Bye Bye ,Thanks for Playing."); 
    
}