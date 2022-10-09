#include <stdio.h>

void FibonacciSeries(int iNo)
{
    int iNo1 = 0, iNo2 = 0, iNo3 = 0;

    iNo1 = 0;
    iNo2 = 1;

    printf("%d %d ", iNo1, iNo2);

    for (int i = 2; i < iNo; i++)
    {
        iNo3 = iNo1 + iNo2;
        printf("%d ", iNo3);

        iNo1 = iNo2;
        iNo2 = iNo3;
    }
}
int main()
{
    int iNo = 0;

    printf("Enter the Number\n");
    scanf("%d", &iNo);

    FibonacciSeries(iNo);

    return 0;
}