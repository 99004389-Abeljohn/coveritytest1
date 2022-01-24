#include "tictactoe.h"
#include "global.h"
//compares all the sub block cells for the win ,draw  ,still playing condiitons.
int checkwin6()
{
    if(cell[34]==cell[35]&&cell[35]==cell[36])
    {
        return 1;
    }
    else if(cell[43]==cell[44]&&cell[44]==cell[45])
    {
        return 1;
    }
    else if(cell[52]==cell[53]&&cell[53]==cell[54])
    {
        return 1;
    }
    else if(cell[34]==cell[43]&&cell[43]==cell[52])
    {
        return 1;
    }
    else if(cell[35]==cell[44]&&cell[44]==cell[53])
    {
        return 1;
    }
    else if(cell[36]==cell[45]&&cell[45]==cell[54])
    {
        return 1;
    }
    else if(cell[34]==cell[44]&&cell[44]==cell[54])
    {
        return 1;
    }
    else if(cell[36]==cell[44]&&cell[44]==cell[52])
    {
        return 1;
    }
    else if(cell[34]!='1'&&cell[35]!='2'&&cell[36]!='3'&&cell[43]!='4'&&cell[44]!='5'&&cell[45]!='6'&&cell[52]!='7'&&cell[53]!='8'&&cell[54]!='9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}