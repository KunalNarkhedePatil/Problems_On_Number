#include <stdio.h>
int FindGreter(int iNo1, int iNo2)
{
    if (iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}
int FindLcm(int iNo1, int iNo2)
{
    int Max = FindGreter(iNo1, iNo2);
    while (1)
    {
        if (Max % iNo1 == 0 && Max % iNo2 == 0)
        {
            break;
        }
        Max++;
    }
    return Max;
}
int main()
{
    int iNo1 = 0, iNo2 = 0;
    int iRet = 0;

    printf("Enter the First and Second Number\n");
    scanf("%d %d", &iNo1, &iNo2);

    iRet = FindLcm(iNo1, iNo2);

    printf("LCM of %d and %d is %d\n", iNo1, iNo2, iRet);
    return 0;
}