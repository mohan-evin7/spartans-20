#include<stdio.h>

int rev(int n)                                 
{
    int temp=0;
    while(n)
    {
    	int r=n%10;
        temp=(temp*10)+r;                 
        n=n/10;
    }
    return temp;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d\n",rev(rev(a)+rev(b)));
    }
    return 0;
}