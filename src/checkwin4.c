#include "tictactoe.h"
#include "global.h"
//compares all the sub block cells for the win ,draw ,still playing condiitons.
int checkwin4()
{
    if(cell[28]==cell[29]&&cell[29]==cell[30])
    {
        return 1;
    }
    else if(cell[37]==cell[38]&&cell[38]==cell[39])
    {
        return 1;
    }
    else if(cell[46]==cell[47]&&cell[47]==cell[48])
    {
        return 1;
    }
    else if(cell[28]==cell[37]&&cell[37]==cell[46])
    {
        return 1;
    }
    else if(cell[29]==cell[38]&&cell[38]==cell[47])
    {
        return 1;
    }
    else if(cell[30]==cell[39]&&cell[39]==cell[48])
    {
        return 1;
    }
    else if(cell[28]==cell[38]&&cell[38]==cell[48])
    {
        return 1;
    }
    else if(cell[30]==cell[38]&&cell[38]==cell[46])
    {
        return 1;
    }
    else if(cell[28]!='1'&&cell[29]!='2'&&cell[30]!='3'&&cell[37]!='4'&&cell[38]!='5'&&cell[39]!='6'&&cell[46]!='7'&&cell[47]!='8'&&cell[48]!='9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}