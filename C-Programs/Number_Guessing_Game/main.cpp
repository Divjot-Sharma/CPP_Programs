#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int num = rand() % 100 + 1;
    int guess=-1;
    int tries=0;
    printf("Hi I am Number Guesser Game .\n");
    while(guess!=num){ 
    printf("Enter Number :");
    scanf("%d",&guess);
    if (guess<num){
        printf("Enter Higher Number Please!\n");
    }else if (guess>num){
        printf("Enter Lower Number Please!\n");
    }
        tries++;
    }
    printf("You Won.\nNumber of tries: %d",tries);
    return 0 ; 
}
