#include <stdio.h>

int main()
{
    int count =0;
    char m;
    int k=0;
    int i=0;
    printf("please input the number\n");
    while((m=getchar())!='\n'){
        k=k*10+(m-'0');
    }
    while (k!=0){
        i=k-(k/2)*2;
        k=k/2;
        if(i==1){
            count++;
        }
    }
    printf("the amount is:%d\n",count);
    return 0;
}