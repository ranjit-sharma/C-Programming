/*PROJECT 2: SNAKE, WATER, GUN
Snake, water, gun or rock, paper, scissors is a game most of us have played during
school time. (I sometimes play it even now).
Write a C program capable of playing this game with you.
Your program should be able to print the result after you choose snake/water or gun.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0));

    // Generate random number between 0 and 2
    int player, computer = rand() % 3;
    /*
    0--> snake
    1--> water
    2--> gun
    */

    printf("Choose 0 for Snake, 1 for Water, 2 for Gun\n");
    scanf("%d", &player);
    printf("PC entered:-%d\n", computer);

    if (player == 0 && computer == 0)
    {
        printf("its draw \n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("you win!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("you lose!\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("you lose!\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("its draw \n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("you win!\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("you win!\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("you lose!\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("its draw \n");
    }
    else
    {
        printf("something went wrong!");
    }
    return 0;
}