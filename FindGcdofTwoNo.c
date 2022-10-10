#include<stdio.h>

int FindGcd(int iNo1,int iNo2)
{
    int Gcd=0;

    for(int i=1;i<=iNo1 && i<=iNo2;i++)
    {
        if(iNo1%i==0 && iNo2%i==0)
        {
            Gcd=i;
        }
    }
    return Gcd;
}
int main()
{
    int iNo1=0,iNo2=0;
    int iRet=0;

    printf("Enter the First and Second Number\n");
    scanf("%d %d",&iNo1,&iNo2);

    iRet=FindGcd(iNo1,iNo2);

    printf("GCD of %d and %d is %d\n",iNo1,iNo2,iRet);
    return 0;
}