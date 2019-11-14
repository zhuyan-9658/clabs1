#include <stdio.h>
main ()
{
    int count =0;
    int a =1;
    char b;
    int c=0;
    while((b=getchar())!='\n'){
        c=c*10+(b-'0');
    }
    void dectobin(int c){
        int r=0,k=1,i,temp;
        temp=n;
        while(temp){
            i=temp%2;
            r=k*i+r;
            k=k*10;
            temp=temp/2;
        }
        printf("%d\n",r);
    }
    int cout_one_bits(unsigned int value){
        int cout = 0;
        while (value){
            value = value&(value-1):
            cout++;
        }
    }
}
