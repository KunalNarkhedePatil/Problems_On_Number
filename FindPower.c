#include <stdio.h>
int FindPower(int Base, int Exp)
{
    int iResult = 1;

    while (Exp != 0)
    {
        iResult = iResult * Base;
        Exp--;
    }
    return iResult;
}
int main()
{
    int iBase = 0;
    int iExp = 0;
    int iRet = 0;

    printf("Enter the Base Number\n");
    scanf("%d", &iBase);

    printf("Enter the Exponant Number\n");
    scanf("%d", &iExp);

    iRet = FindPower(iBase, iExp);

    printf("Power of %d and %d is %d\n", iBase, iExp, iRet);

    return 0;
}