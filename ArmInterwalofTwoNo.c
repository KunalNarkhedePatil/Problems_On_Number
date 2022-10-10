#include <stdio.h>
#include <stdbool.h>
bool CheckArmStrong(int iNo)
{
    int iTemp = 0, iCnt = 0;
    int iDigit = 0, iMult = 1, iSum = 0;
    iTemp = iNo;
    while (iTemp != 0)
    {
        iCnt++;
        iTemp = iTemp / 10;
    }
    iTemp = iNo;
    while (iTemp != 0)
    {
        iDigit=0;
        iMult=1;
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
void Display(int iLow, int iHigh)
{
    bool bRet = false;
    if (iHigh < iLow)
    {
        iHigh = iHigh + iLow;
        iLow = iHigh - iLow;
        iHigh = iHigh - iLow;
    }
    for (int i = iLow; i <= iHigh; i++)
    {
        bRet = CheckArmStrong(i);

        if (bRet == true)
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int iLow = 0, iHigh = 0;

    printf("Enter the iLow Value\n");
    scanf("%d", &iLow);

    printf("Enter the iHigh Value\n");
    scanf("%d", &iHigh);
    printf("----------------------------\n");
    Display(iLow, iHigh);
    return 0;
}