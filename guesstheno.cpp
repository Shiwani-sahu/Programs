#include<stdio.h>
#include <conio.h>
#include<stdlib.h>
#include <time.h>
int main()
{
    //  clrscr();

    int number=1,guess,nguess=1;
     srand(time(0));
     number=rand()%100+1;

    printf("The random number is %d\n", number);
     printf("Guess the number between 1 to 100\n" );
    printf("guess in two attempt\n");
    do{ scanf("%d", &guess);
    if (guess>number){
            printf("higher phase please\n");
            }
    else if(guess <number){
          printf("lower phase please\n");
          nguess++;}
    else if (nguess>2)
    {
         printf("The random is %d ",number);}

    else {
    printf("you guessed in %d attempt\n",nguess);}
         nguess++;
    }

    while(guess!= number) ;

return 0;
}