#include "tictactoe.h"
#include "global.h"
//compares all the sub block cells for the win ,draw ,still playing condiitons.
int checkwin3()
{
    if(cell[7]==cell[8]&&cell[8]==cell[9])
    {
        return 1;
    }
    else if(cell[16]==cell[17]&&cell[17]==cell[18])
    {
        return 1;
    }
    else if(cell[25]==cell[26]&&cell[26]==cell[27])
    {
        return 1;
    }
    else if(cell[7]==cell[16]&&cell[16]==cell[25])
    {
        return 1;
    }
    else if(cell[8]==cell[17]&&cell[17]==cell[16])
    {
        return 1;
    }
    else if(cell[9]==cell[18]&&cell[18]==cell[27])
    {
        return 1;
    }
    else if(cell[7]==cell[17]&&cell[17]==cell[27])
    {
        return 1;
    }
    else if(cell[9]==cell[17]&&cell[17]==cell[25])
    {
        return 1;
    }
    else if(cell[7]!='1'&&cell[8]!='2'&&cell[9]!='3'&&cell[16]!='4'&&cell[17]!='5'&&cell[18]!='6'&&cell[25]!='7'&&cell[26]!='8'&&cell[27]!='9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}