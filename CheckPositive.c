#include <stdio.h>
#include <stdbool.h>

bool CheckPositive(int iNo)
{
    if (iNo < 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int iNo = 0;
    bool bRet = false;

    printf("Enter the Number\n");
    scanf("%d", &iNo);

    bRet = CheckPositive(iNo);

    if (bRet == true)
    {
        printf("Number is Positive\n");
    }
    else
    {
        printf("Number is Negative\n");
    }
    return 0;
}