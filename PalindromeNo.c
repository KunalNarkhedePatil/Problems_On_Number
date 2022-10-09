#include <stdio.h>
#include <stdbool.h>
int ReverseNo(int iNo)
{
    int iRev = 0;
    int iRem = 0;
    while (iNo != 0)
    {
        iRem = iNo % 10;
        iRev = iRev * 10 + iRem;
        iNo = iNo / 10;
    }
    return iRev;
}
bool CheckPalindrome(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iRet = ReverseNo(iNo);

    if (iRet == iNo)
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

    bRet = CheckPalindrome(iNo);

    if (bRet == true)
    {
        printf("Number is Palindrome\n");
    }
    else
    {
        printf("Number is not Palindrome\n");
    }

    return 0;
}