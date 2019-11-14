#include <stdio.h>
int main()
{
    int a =0xfeac;
    int str[10]={0};
    int j=0;
    while(a){
        str[j]=a%10;
        a/=10;
        j++;
    }
    for(int i=j-1;i>=0;i--)
    {
        printf("%d",str);
    }
}