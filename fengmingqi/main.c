/*
 */

#include <mcs51/8051.h>

void delay(int i)
{
   while(i--);
}

void main(void)
{

    // Insert code
    P1_5 = 0;
    while(1)
    {
        P1_5 = !P1_5;
        delay(200);
    }

}
