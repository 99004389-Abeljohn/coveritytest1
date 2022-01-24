#include "tictactoe.h"
#include "global.h"
void block8()
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
        if (choice == 1 && cell[58] == '1')
            cell[58] = sign;
        else if (choice == 2 && cell[59] == '2')
            cell[59] = sign;
        else if (choice == 3 && cell[60] == '3')
            cell[60] = sign;
        else if (choice == 4 && cell[67] == '4')
            cell[67] = sign;
        else if (choice == 5 && cell[68] == '5')
            cell[68] = sign;
        else if (choice == 6 && cell[69] == '6')
            cell[69] = sign;
        else if (choice == 7 && cell[76] == '7')
            cell[76] = sign;
        else if (choice == 8 && cell[77] == '8')
            cell[77] = sign;
        else if (choice == 9 && cell[78] == '9')
            cell[78] = sign;
        else
        {
            printf("\nMove is Invalid" );
            player--;
        }
        check=checkwin8();
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
