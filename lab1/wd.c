#include <stdio.h>

int main()
{ 
    unsigned   int x = 1;
    int  n =0 ;
    while (x!=0){
    x=x<<1;n=n+1;
    }   
    printf("the amount is %d\n",n);
    printf  ("the max is %u\n",x-1)  ;
    return 0;
}