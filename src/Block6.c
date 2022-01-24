#include "tictactoe.h"
#include "global.h"
void block6()
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
        if (choice == 1 && cell[34] == '1')
            cell[34] = sign;
        else if (choice == 2 && cell[35] == '2')
            cell[35] = sign;
        else if (choice == 3 && cell[36] == '3')
            cell[36] = sign;
        else if (choice == 4 && cell[43] == '4')
            cell[43] = sign;
        else if (choice == 5 && cell[44] == '5')
            cell[44] = sign;
        else if (choice == 6 && cell[45] == '6')
            cell[45] = sign;
        else if (choice == 7 && cell[52] == '7')
            cell[52] = sign;
        else if (choice == 8 && cell[53] == '8')
            cell[53] = sign;
        else if (choice == 9 && cell[54] == '9')
            cell[54] = sign;
        else
        {
            printf("\nMove is Invalid" );
            player--;
        }
        check=checkwin6();
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
