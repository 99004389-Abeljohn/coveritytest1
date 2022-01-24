#include "tictactoe.h"
#include "global.h"
int wholecheckwin()
{
    if(wholecheck[1]==wholecheck[2]&&wholecheck[2]==wholecheck[3]&&wholecheck[1]!='D')
    {
        return 1;
    }
    else if(wholecheck[4]==wholecheck[5]&&wholecheck[5]==wholecheck[6]&&wholecheck[4]!='D')
    {
        return 1;
    }
    else if(wholecheck[7]==wholecheck[8]&&wholecheck[8]==wholecheck[9]&&wholecheck[7]!='D')
    {
        return 1;
    }
    else if(wholecheck[1]==wholecheck[4]&&wholecheck[4]==wholecheck[7]&&wholecheck[1]!='D')
    {
        return 1;
    }
    else if(wholecheck[2]==wholecheck[5]&&wholecheck[5]==wholecheck[8]&&wholecheck[2]!='D')
    {
        return 1;
    }
    else if(wholecheck[3]==wholecheck[6]&&wholecheck[6]==wholecheck[9]&&wholecheck[3]!='D')
    {
        return 1;
    }
    else if(wholecheck[1]==wholecheck[5]&&wholecheck[5]==wholecheck[9]&&wholecheck[1]!='D')
    {
        return 1;
    }
    else if(wholecheck[3]==wholecheck[5]&&wholecheck[5]==wholecheck[7]&&wholecheck[3]!='D')
    {
        return 1;
    }
    else if(wholecheck[1]!='1'&&wholecheck[2]!='2'&&wholecheck[3]!='3'&&wholecheck[4]!='4'&&wholecheck[5]!='5'&&wholecheck[6]!='6'&&wholecheck[7]!='7'&&wholecheck[8]!='8'&&wholecheck[9]!='9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}