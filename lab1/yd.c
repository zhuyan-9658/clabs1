#include <stdio.h>
#include <math.h>

int power(int base,int n){
    int i,p;
    p=1;
    for(i=1;i<=n;++i)
    p=p*base;
    return p;
}
int main()
{
    char m[18]={0};
    int i=0;
    char k;
    int fre = 0;
    int ghf=-1;
    unsigned int b=1;
    printf("please input a positive hexadecimal k(start with 0X/0x)\n");
    while((k = getchar()) !='\n'){
        m[i]=k;
        i++;
        ghf++;
    }
        if(m[0]!='0'){
        printf("input error\n");
        return 0 ;
        }
        if(m[1]!='X'&&m[1]!='x'){
            printf("input error\n");
            return 0;
        }
        i--;
        while(i>1)
    {
            if(m[i]<='9'&&m[i]>+'0')
                fre+=(m[i]-'0')*power(16,ghf-i);
            else if(m[i]>='A'&&m[i]<='F')
                fre+=(m[i]-'A'+10)*power(16,ghf-i);
            else if(m[i]>='a'&&m[i]<='f')  
                fre+=(m[i]+'A'-'a'-'A'+10)*power(16,ghf-i);
            else{
                printf("input error\n");
                return 0;
                }
            i--;
    }
    while(b!=0){
        b=b<<1;
    }
    if(fre>b-1){
        printf("the max is %u,your input k is too big\n",b-1);
    }
    else printf("%d\n",fre);
    return 0;
}
