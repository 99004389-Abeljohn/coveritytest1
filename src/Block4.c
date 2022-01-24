#include "tictactoe.h"
#include "global.h"
void block4()
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
        if (choice == 1 && cell[28] == '1')
            cell[28] = sign;
        else if (choice == 2 && cell[29] == '2')
            cell[29] = sign;
        else if (choice == 3 && cell[30] == '3')
            cell[30] = sign;
        else if (choice == 4 && cell[37] == '4')
            cell[37] = sign;
        else if (choice == 5 && cell[38] == '5')
            cell[38] = sign;
        else if (choice == 6 && cell[39] == '6')
            cell[39] = sign;
        else if (choice == 7 && cell[46] == '7')
            cell[46] = sign;
        else if (choice == 8 && cell[47] == '8')
            cell[47] = sign;
        else if (choice == 9 && cell[48] == '9')
            cell[48] = sign;
        else
        {
            printf("\nMove is Invalid" );
            player--;
        }
        check=checkwin4();
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
