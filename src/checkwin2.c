#include "tictactoe.h"
#include "global.h"
//compares all the sub block cells for the win ,draw ,still playing condiitons.
int checkwin2()
{
    if(cell[4]==cell[5]&&cell[5]==cell[6])
    {
        return 1;
    }
    else if(cell[13]==cell[14]&&cell[14]==cell[15])
    {
        return 1;
    }
    else if(cell[22]==cell[23]&&cell[23]==cell[24])
    {
        return 1;
    }
    else if(cell[4]==cell[13]&&cell[13]==cell[22])
    {
        return 1;
    }
    else if(cell[5]==cell[14]&&cell[14]==cell[23])
    {
        return 1;
    }
    else if(cell[6]==cell[15]&&cell[15]==cell[24])
    {
        return 1;
    }
    else if(cell[4]==cell[14]&&cell[14]==cell[24])
    {
        return 1;
    }
    else if(cell[6]==cell[14]&&cell[14]==cell[22])
    {
        return 1;
    }
    else if(cell[4]!='1'&&cell[5]!='2'&&cell[6]!='3'&&cell[13]!='4'&&cell[14]!='5'&&cell[15]!='6'&&cell[22]!='7'&&cell[23]!='8'&&cell[24]!='9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}