#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random_number,exit=1;
    char user_choice,computer_choice;
    while(exit == 1)
    {
    srand(time(NULL));
    random_number= rand()% 100+0;
    //printf("%d\n",random_number);
    printf("Enter s for STONE, p for PAPER, Z for SCISSOR:\n");
    scanf("%c",&user_choice);
    switch(random_number)
    {
    case 0  ... 33:
        computer_choice='s';
        printf("Your choice : %c and computer choice : %c\n",user_choice,computer_choice);
        if(user_choice=='p')
        {
            printf("You win!!\n");
        }
        else if(user_choice == 's')
        {
            printf("Tie game!!\n");
        }
        else
        {
            printf("Computer win!!\n");
        }
        break;
    case 34 ... 66:
         computer_choice='p';
          printf("Your choice : %c and computer choice : %c\n",user_choice,computer_choice);
        if(user_choice=='z')
        {
            printf("You win!!\n");
        }
        else if(user_choice == 'p')
        {
            printf("Tie game!!\n");
        }
        else
        {
            printf("Computer win!!\n");
        }
        break;
    case 67 ... 100:
         computer_choice='z';
          printf("Your choice : %c and computer choice : %c\n",user_choice,computer_choice);
        if(user_choice=='s')
        {
            printf("You win!!\n");
        }
        else if(user_choice == 'z')
        {
            printf("Tie game!!\n");
        }
        else
        {
            printf("Computer win!!\n");
        }
        break;
    }
    printf("Do yo want to play again?\nEnter 1 to continue or 0 to end the game:");
    scanf("%d",&exit);
    fflush(stdin);
    }

    return 0;
}
