#include "tictactoe.h"
#include "global.h"
void block3()
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
        if (choice == 1 && cell[7] == '1')

            cell[7] = sign;
        else if (choice == 2 && cell[8] == '2')

            cell[8] = sign;
        else if (choice == 3 && cell[9] == '3')

            cell[9] = sign;
        else if (choice == 4 && cell[16] == '4')

            cell[16] = sign;
        else if (choice == 5 && cell[17] == '5')

            cell[17] = sign;
        else if (choice == 6 && cell[18] == '6')

            cell[18] = sign;
        else if (choice == 7 && cell[25] == '7')

            cell[25] = sign;
        else if (choice == 8 && cell[26] == '8')

            cell[26] = sign;
        else if (choice == 9 && cell[27] == '9')

            cell[27] = sign;
        else
        {
            printf("\nMove is Invalid" );
            player--;
        }
        check=checkwin3();
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