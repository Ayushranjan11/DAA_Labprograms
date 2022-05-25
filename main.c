#include <stdio.h>
#include <stdlib.h>

int euclids_gcd(int m,int n)
{
    int r;

    while(n!=0){
        r=m%n;
        m=n;
        n=r;
    }
    return m;

}

int consecutive_integer(int m,int n)
{
    int t;
    if(m==0)
        return n;
    if(n==0)
        return m;
    if(m>n)
        t=n;
    else
        t=m;
    while(t!=0)
    {
        if(m%t==0)
        {
            if(n%t==0)
            {
                return t;
            }
        }
        t--;
    }

}

int main(){
    int m,n,res,ch;
    printf("Enter 2 numbers:\n");
    scanf("%d %d",&m,&n);
    printf("Enter your choice:\n1.Euclids 2.Consecutive integer\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        res=euclids_gcd(m,n);
        printf("The gcd of given input is %d",res);
        break;
    case 2:
        res=consecutive_integer(m,n);
        printf("Gcd is %d",res);
        break;
    }

    return 0;
}
