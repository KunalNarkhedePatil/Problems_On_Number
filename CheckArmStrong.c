#include <stdio.h>
#include <stdbool.h>

bool CheckArmStrong(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    int iMult = 1;
    int iSum = 0;

    int iTemp = iNo;

    while (iTemp != 0)
    {
        iCnt++;
        iTemp = iTemp / 10;
    }
    iTemp = iNo;
    while (iTemp != 0)
    {
        iDigit = 0;
        iMult = 1;
        iDigit = iTemp % 10;
        for (int i = 1; i <= iCnt; i++)
        {
            iMult = iMult * iDigit;
        }
        iTemp = iTemp / 10;
        iSum = iSum + iMult;
    }
    if (iSum == iNo)
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
    int iNo = 0;
    bool bRet = false;

    printf("Enter the Number\n");
    scanf("%d", &iNo);

    bRet = CheckArmStrong(iNo);

    if (bRet == true)
    {
        printf("Number is Armstrong\n");
    }
    else
    {
        printf("Number is not Armstrong\n");
    }
}