#include <stdio.h>

int SumOfDigit(int iNo)
{
    int iSum = 0;
    int iRem = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iRem = iNo % 10;
        iSum = iSum + iRem;
        iNo = iNo / 10;
    }
    return iSum;
}
int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d", &iNo);

    iRet = SumOfDigit(iNo);

    printf("Sum of digit is %d\n", iRet);
    return 0;
}