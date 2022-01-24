#include "tictactoe.h"
#include "global.h"
void block2()
{
    int choice,check;
    char sign;
    do
    {
        player=(player%2)?1:2;
        board();
        printf("\nPlayer %d Enter a number : ",player);
        scanf("%d",&choice);
        sign=(player == 1) ? 'X' : 'O';

        if (choice == 1 && cell[4] == '1')

            cell[4] = sign;
        else if (choice == 2 && cell[5] == '2')

            cell[5] = sign;
        else if (choice == 3 && cell[6] == '3')

            cell[6] = sign;
        else if (choice == 4 && cell[13] == '4')

            cell[13] = sign;
        else if (choice == 5 && cell[14] == '5')

            cell[14] = sign;
        else if (choice == 6 && cell[15] == '6')

            cell[15] = sign;
        else if (choice == 7 && cell[22] == '7')

            cell[22] = sign;
        else if (choice == 8 && cell[23] == '8')

            cell[23] = sign;
        else if (choice == 9 && cell[24] == '9')

            cell[24] = sign;
        else
        {
            printf("\nMove is Invalid" );
            player--;
        }
        check=checkwin2();
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
