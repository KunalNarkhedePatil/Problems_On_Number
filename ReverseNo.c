#include <stdio.h>

int ReverseNo(int iNo)
{
    int iRev = 0;
    int iRem = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iRem = iNo % 10;
        iRev = iRev * 10 + iRem;
        iNo = iNo / 10;
    }
    return iRev;
}
int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d", &iNo);

    iRet = ReverseNo(iNo);

    printf("Reverse number is %d\n", iRet);

    return 0;
}