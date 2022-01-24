#include "tictactoe.h"
#include "global.h"
void block1()
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
        if (choice == 1 && cell[1] == '1')
        {
            cell[1] = sign;
        }
        else if (choice == 2 && cell[2] == '2')
        {
            cell[2] = sign;
        }
        else if (choice == 3 && cell[3] == '3')
        {
            cell[3] = sign;
        }
        else if (choice == 4 && cell[10] == '4')
        {
            cell[10] = sign;
        }
        else if (choice == 5 && cell[11] == '5')
        {
            cell[11] = sign;
        }
        else if (choice == 6 && cell[12] == '6')
        {
            cell[12] = sign;
        }
        else if (choice == 7 && cell[19] == '7')
        {

            cell[19] = sign;
        }
        else if (choice == 8 && cell[20] == '8')
        {
            cell[20] = sign;
        }
        else if (choice == 9 && cell[21] == '9')
        {
            cell[21] = sign;
        }
        else
        {
            printf("\nMove is Invalid" );
            player--;
        }
        check=checkwin1();
        player++;
    }while(check==-1);
    if(check==1)
    {
        printf("\nPlayer %d wins",player-1);
        wholecheck[block_number]=sign;
    }        
    else
    {
        printf("\nIt's a draw");
        wholecheck[block_number]='D';
    }
}