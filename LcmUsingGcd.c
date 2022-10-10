#include <stdio.h>
int FindLcm(int iNo1, int iNo2)
{
    int Gcd = 0, Lcm = 0;

    for (int i = 1; i <= iNo1 && i <= iNo2; i++)
    {
        if (iNo1 % i ==0 && iNo2 % i == 0)
        {
            Gcd=i;
        }
    }
    return Lcm=(iNo1*iNo2)/Gcd;
}
int main()
{
    int iNo1 = 0, iNo2 = 0;
    int iRet = 0;

    printf("Enter the First and Second Number\n");
    scanf("%d %d", &iNo1, &iNo2);

    iRet = FindLcm(iNo1, iNo2);

    printf("LCM of %d and %d is %d\n", iNo1, iNo2, iRet);
}