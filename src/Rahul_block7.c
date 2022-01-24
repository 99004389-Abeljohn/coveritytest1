#include "tictactoe.h"
#include "global.h"
void block7()
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
        if (choice == 1 && cell[55] == '1')
            cell[55] = sign;
        else if (choice == 2 && cell[56] == '2')
            cell[56] = sign;
        else if (choice == 3 && cell[57] == '3')
            cell[57] = sign;
        else if (choice == 4 && cell[64] == '4')
            cell[64] = sign;
        else if (choice == 5 && cell[65] == '5')
            cell[65] = sign;
        else if (choice == 6 && cell[66] == '6')
            cell[66] = sign;
        else if (choice == 7 && cell[73] == '7')
            cell[73] = sign;
        else if (choice == 8 && cell[74] == '8')
            cell[74] = sign;
        else if (choice == 9 && cell[75] == '9')
            cell[75] = sign;
        else
        {
            printf("\nMove is Invalid" );
            player--;
        }
        check=checkwin7();
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
