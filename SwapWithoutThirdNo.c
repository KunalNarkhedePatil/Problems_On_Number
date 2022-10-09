#include <stdio.h>

void SwapWithoutThird(int iNo1, int iNo2)
{
    iNo1 = iNo1 + iNo2;
    iNo2 = iNo1 - iNo2;
    iNo1 = iNo1 - iNo2;

    printf("After Swap iNo1=%d iNo2=%d\n", iNo1, iNo2);
}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter the First No\n");
    scanf("%d", &iNo1);

    printf("Enter the Second No\n");
    scanf("%d", &iNo2);

    printf("Before Swap iNo1=%d iNo2=%d\n", iNo1, iNo2);

    SwapWithoutThird(iNo1, iNo2);

    return 0;
}