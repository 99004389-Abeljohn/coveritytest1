#include "tictactoe.h"
#include "global.h"
//compares all the sub block cells for the win ,draw ,still playing condiitons.
int checkwin8()
{
    if(cell[58]==cell[59]&&cell[59]==cell[60])
    {
        return 1;
    }
    else if(cell[67]==cell[68]&&cell[68]==cell[69])
    {
        return 1;
    }
    else if(cell[76]==cell[77]&&cell[77]==cell[78])
    {
        return 1;
    }
    else if(cell[58]==cell[67]&&cell[67]==cell[76])
    {
        return 1;
    }
    else if(cell[59]==cell[68]&&cell[68]==cell[77])
    {
        return 1;
    }
    else if(cell[60]==cell[69]&&cell[69]==cell[78])
    {
        return 1;
    }
    else if(cell[58]==cell[68]&&cell[68]==cell[78])
    {
        return 1;
    }
    else if(cell[60]==cell[68]&&cell[68]==cell[76])
    {
        return 1;
    }
    else if(cell[58]!='1'&&cell[59]!='2'&&cell[60]!='3'&&cell[67]!='4'&&cell[68]!='5'&&cell[69]!='6'&&cell[76]!='7'&&cell[77]!='8'&&cell[78]!='9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}