#include "tictactoe.h"
#include "global.h"
//compares all the sub block cells for the win ,draw ,still playing condiitons.
int checkwin9()
{
    if(cell[61]==cell[62]&&cell[62]==cell[63])
    {
        return 1;
    }
    else if(cell[70]==cell[71]&&cell[71]==cell[72])
    {
        return 1;
    }
    else if(cell[79]==cell[80]&&cell[80]==cell[81])
    {
        return 1;
    }
    else if(cell[61]==cell[70]&&cell[70]==cell[79])
    {
        return 1;
    }
    else if(cell[62]==cell[71]&&cell[71]==cell[80])
    {
        return 1;
    }
    else if(cell[63]==cell[72]&&cell[72]==cell[81])
    {
        return 1;
    }
    else if(cell[61]==cell[71]&&cell[71]==cell[81])
    {
        return 1;
    }
    else if(cell[63]==cell[71]&&cell[71]==cell[79])
    {
        return 1;
    }
    else if(cell[61]!='1'&&cell[62]!='2'&&cell[63]!='3'&&cell[70]!='4'&&cell[71]!='5'&&cell[72]!='6'&&cell[79]!='7'&&cell[80]!='8'&&cell[81]!='9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}