#include <stdio.h>
#include<stdbool.h>
bool CheckPrime(int iNo)
{
    int iFlag=0;
    int M=iNo/2;
    for(int i=2;i<=M;i++)
    {
        if(iNo%i==0)
        {
            iFlag=1;
            break;
        }
    }
    if(iFlag==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void DisplayPrime(int iLow,int iHigh)
{
    if(iHigh<iLow)
    {
        iHigh=iHigh+iLow;
        iLow=iHigh-iLow;
        iHigh=iHigh-iLow;
    }

    for(int i=iLow;i<=iHigh;i++)
    {
       bool bRet=false;

       bRet=CheckPrime(i);

       if(bRet==true)
       {
           printf("%d ",i);
       }
    }
}
int main()
{
    int iLow = 0, iHigh = 0;

    printf("Enter the value of low\n");
    scanf("%d", &iLow);

    printf("Enter the value of high\n");
    scanf("%d", &iHigh);
    printf("------------------------------------\n");
    DisplayPrime(iLow, iHigh);
    return 0;
}