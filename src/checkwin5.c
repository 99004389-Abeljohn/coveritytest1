#include "tictactoe.h"
#include "global.h"
//compares all the sub block cells for the win ,draw ,still playing condiitons.
int checkwin5()
{
    if(cell[31]==cell[32]&&cell[32]==cell[33])
    {
        return 1;
    }
    else if(cell[40]==cell[41]&&cell[41]==cell[42])
    {
        return 1;
    }
    else if(cell[49]==cell[50]&&cell[50]==cell[51])
    {
        return 1;
    }
    else if(cell[31]==cell[40]&&cell[40]==cell[49])
    {
        return 1;
    }
    else if(cell[32]==cell[41]&&cell[41]==cell[50])
    {
        return 1;
    }
    else if(cell[33]==cell[42]&&cell[42]==cell[51])
    {
        return 1;
    }
    else if(cell[31]==cell[41]&&cell[41]==cell[51])
    {
        return 1;
    }
    else if(cell[33]==cell[41]&&cell[41]==cell[49])
    {
        return 1;
    }
    else if(cell[31]!='1'&&cell[32]!='2'&&cell[33]!='3'&&cell[40]!='4'&&cell[41]!='5'&&cell[42]!='6'&&cell[49]!='7'&&cell[50]!='8'&&cell[51]!='9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}