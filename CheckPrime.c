#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int M=iNo/2;
    int iFlag=0;
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
int main()
{
    int iNo=0;
    bool bRet=false;

    printf("Enter the Number\n");
    scanf("%d",&iNo);
    
    bRet=CheckPrime(iNo);

    if(bRet==true)
    {
        printf("Number is Prime\n");
    }
    else
    {
        printf("Number is not prime\n");
    }

    return 0;
}