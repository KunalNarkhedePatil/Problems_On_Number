#include <stdio.h>
int SumofNaturalNo(int iNo)
{
    int iSum = 0;
    for (int i = 0; i <= iNo; i++)
    {
        iSum = iSum + i;
    }
    return iSum;
}
int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d", &iNo);

    iRet = SumofNaturalNo(iNo);

    printf("Sum of natural no is %d\n", iRet);
    return 0;
}