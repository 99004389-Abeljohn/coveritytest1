#include "tictactoe.h"
#include "global.h"
void block9()
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
        if (choice == 1 && cell[61] == '1')
            cell[61] = sign;
        else if (choice == 2 && cell[62] == '2')
            cell[62] = sign;
        else if (choice == 3 && cell[63] == '3')
            cell[63] = sign;
        else if (choice == 4 && cell[70] == '4')
            cell[70] = sign;
        else if (choice == 5 && cell[71] == '5')
            cell[71] = sign;
        else if (choice == 6 && cell[72] == '6')
            cell[72] = sign;
        else if (choice == 7 && cell[79] == '7')
            cell[79] = sign;
        else if (choice == 8 && cell[80] == '8')
            cell[80] = sign;
        else if (choice == 9 && cell[81] == '9')
            cell[81] = sign;
        else
        {
            printf("\nMove is Invalid" );
            player--;
        }
        check=checkwin9();
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
