#include <stdio.h>
int SumofFactor(int iNo)
{
    int iSum=0;

    for(int i=1;i<=iNo/2;i++)
    {
        if(iNo%i==0)
        {
            iSum=iSum+i;
        }
    }
    return iSum;
}
int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d", &iNo);

    iRet = SumofFactor(iNo);

    printf("Sum of factor is %d\n", iRet);

    return 0;
}