#include <stdio.h>
void Range(int iNo1, int iNo2)
{
    int iMult = 0;
    for (int i = iNo1; i <= iNo2; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            iMult = i * j;
            printf("%d * %d = %d\n", i, j, iMult);
        }
        printf("--------------------------------\n");
    }
}
int main()
{
    int iNo1 = 0, iNo2 = 0;

    printf("Enter the Range\n");
    scanf("%d %d", &iNo1, &iNo2);

    Range(iNo1, iNo2);

    return 0;
}