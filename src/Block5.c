#include "tictactoe.h"
#include "global.h"
void block5()
{
    int choice,check;
    char sign;
    do
    {
        player=(player%2)?1:2;
        board();
        printf("\nPlayer %d Enter a number",player);
        scanf("%d",&choice);
        sign=(player == 1) ? 'X' : 'O';
        if (choice == 1 && cell[31] == '1')
            cell[31] = sign;
        else if (choice == 2 && cell[32] == '2')
            cell[32] = sign;
        else if (choice == 3 && cell[33] == '3')
            cell[33] = sign;
        else if (choice == 4 && cell[40] == '4')
            cell[40] = sign;
        else if (choice == 5 && cell[41] == '5')
            cell[41] = sign;
        else if (choice == 6 && cell[42] == '6')
            cell[42] = sign;
        else if (choice == 7 && cell[49] == '7')
            cell[49] = sign;
        else if (choice == 8 && cell[50] == '8')
            cell[50] = sign;
        else if (choice == 9 && cell[51] == '9')
            cell[51] = sign;
        else
        {
            printf("\nMove is Invalid" );
            player--;
        }
        check=checkwin5();
        player++;
    }while(check==-1);
    if(check==1)
    {
        printf("\nPlayer %d wins",player-1);
        wholecheck[block_number]=sign;
    }        
    else
    {
        printf("\nIts a draw");
        wholecheck[block_number]='D';
    }
}
