#include <stdio.h>
int CountDigit(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iCnt++;
        iNo = iNo / 10;
    }
    return iCnt;
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter the Number\n");
    scanf("%d", &iNo);

    iRet = CountDigit(iNo);

    printf("Number of Digit in Number is %d\n", iRet);

    return 0;
}