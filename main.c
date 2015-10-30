
/*LAB 1 Q2 */

/* ------------------------------------------------------------

Programmer: Aleena Chaudhry

ID: B00074979

Date: 19th September 2014

Purpose:Using a for loop accept 10 integers and print the cummulative sum after each new integer inputted.

------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int sum=0;

    for(i=0; i<10; i++) {
     printf("Enter value:",i);
     scanf("%d",&i);

     sum = sum+i;
     printf("%d\n",sum);


    }


    return 0;
}
