#include "tictactoe.h"
#include "global.h"
//compares all the sub block cells for the win ,draw ,still playing condiitons.
int checkwin7()
{
    if(cell[55]==cell[56]&&cell[56]==cell[57])
    {
        return 1;
    }
    else if(cell[64]==cell[65]&&cell[65]==cell[66])
    {
        return 1;
    }
    else if(cell[73]==cell[74]&&cell[74]==cell[75])
    {
        return 1;
    }
    else if(cell[55]==cell[64]&&cell[64]==cell[73])
    {
        return 1;
    }
    else if(cell[56]==cell[65]&&cell[65]==cell[74])
    {
        return 1;
    }
    else if(cell[57]==cell[66]&&cell[66]==cell[75])
    {
        return 1;
    }
    else if(cell[55]==cell[65]&&cell[65]==cell[75])
    {
        return 1;
    }
    else if(cell[57]==cell[65]&&cell[65]==cell[73])
    {
        return 1;
    }
    else if(cell[55]!='1'&&cell[56]!='2'&&cell[57]!='3'&&cell[64]!='4'&&cell[65]!='5'&&cell[66]!='6'&&cell[73]!='7'&&cell[74]!='8'&&cell[75]!='9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}