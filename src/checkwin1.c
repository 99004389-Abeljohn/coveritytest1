#include "tictactoe.h"
#include "global.h"
//compares all the sub block cells for the win ,draw ,still playing condiitons.
int checkwin1()
{
    if(cell[1]==cell[2]&&cell[2]==cell[3])
    {
        return 1;
    }
    else if(cell[10]==cell[11]&&cell[11]==cell[12])
    {
        return 1;
    }
    else if(cell[19]==cell[20]&&cell[20]==cell[21])
    {
        return 1;
    }
    else if(cell[1]==cell[10]&&cell[10]==cell[19])
    {
        return 1;
    }
    else if(cell[2]==cell[11]&&cell[11]==cell[20])
    {
        return 1;
    }
    else if(cell[3]==cell[12]&&cell[12]==cell[21])
    {
        return 1;
    }
    else if(cell[1]==cell[11]&&cell[11]==cell[21])
    {
        return 1;
    }
    else if(cell[3]==cell[11]&&cell[11]==cell[19])
    {
        return 1;
    }
    else if(cell[1]!='1'&&cell[2]!='2'&&cell[3]!='3'&&cell[10]!='4'&&cell[11]!='5'&&cell[12]!='6'&&cell[19]!='7'&&cell[20]!='8'&&cell[21]!='9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}