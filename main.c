#include "tictactoe.h"
#include "global.h"
char cell[82]={'n','1','2','3','1','2','3','1','2','3','4','5','6','4','5','6','4','5','6','7','8','9','7','8','9','7','8','9','1','2','3','1','2','3','1','2','3','4','5','6','4','5','6','4','5','6','7','8','9','7','8','9','7','8','9','1','2','3','1','2','3','1','2','3','4','5','6','4','5','6','4','5','6','7','8','9','7','8','9','7','8','9'};
char wholecheck[10]={'n','1','2','3','4','5','6','7','8','9'};
int player=1, block_number;
int block_array[9]={1,2,3,4,5,6,7,8,9};
int main()
{
    //variable declarations
    int check=-1,array_length=9,counter=1;
    do
    {
        //Board function is called to display the latest board
        board();
        //Player enters the Sub block he/she wants to play
        printf("\n\nPlayer %d Enter a sub block number: ",player);
        scanf(" %d",&block_number);
        //For loop to check whether a player has chosen the sub block correctly
        for(int i=0;i<array_length;i++)
        {
            if(block_array[i]==block_number)
            {
                block_array[i]=-1;
                counter=1;
                break;
            }
            else
            {
                counter=0;
            }
        }
        //counter variable to keep track of wheather the sub block selected was selected before or not 
        if(counter==1)
        {
            //all conditions which redirects to the necessary sub blocks
            //player-- for the player who won the previous sub block gets the chance to select the next sub block
            if(block_number==1)
            {
                block1();
                player--;
            }
            else if(block_number==2)
            {
                block2();
                player--;
            }
            else if(block_number==3)
            {
                block3();
                player--;
            }
            else if(block_number==4)
            {
                block4();
                player--;
            }
            else if(block_number==5)
            {
                block5();
                player--;
            }
            else if(block_number==6)
            {
                block6();
                player--;
            }
            else if(block_number==7)
            {
                block7();
                player--;
            }
            else if(block_number==8)
            {
                block8();
                player--;
            }
            else if(block_number==9)
            {
                block9();
                player--;
            }
            //check to check ,whether a player has won,game is draw or the game is going on
            check=wholecheckwin();
        }
        else
        {
            printf("\nWrong Input/Already chosen");
            
        }
       break;
    }while(check==-1);
    //check return 1 for a player has won,-1 for the game is still going on,0 for draw
    
    if(check==1)
    {
        printf("\nPlayer %d wins ",player);
    }
   
}
