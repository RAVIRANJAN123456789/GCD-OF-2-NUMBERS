#include<stdio.h>
int gcd(int a,int b)
{
    int max=0;int i;int gcd=1;
    if(a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    i=max;
    while(i>0)
    {
        if(a%i==0 &&  b%i==0)
        {
            gcd=i;
            break;
        }
        else
        {
            i--;
        }
    }
    return gcd;

}
int main()
{
    int a,b;
    printf("\n enter the 1st no. \n");
    scanf("%d",&a);
    printf("\n enter the 2nd no. \n");
    scanf("%d",&b);
    printf("The gcd of %d and %d is %d",a,b,gcd(a,b));
    return 0;
}
