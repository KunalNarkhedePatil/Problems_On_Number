#include<stdio.h>

void SwapUsingPointer(int *iNo1,int *iNo2)
{
    *iNo1=*iNo1+*iNo2;
    *iNo2=*iNo1-*iNo2;
    *iNo1=*iNo1-*iNo2;

    /*
        a=10;
        b=20;
        a=a+b   10+20=30;
        b=a-b;  30-20=10;
        a=a-b;  30-10=20;
    */
}
int main()
{
    int iNo1=0;
    int iNo2=0;

    printf("Enter the First no\n");
    scanf("%d",&iNo1);

    printf("Enter the Second no\n");
    scanf("%d",&iNo2);

    printf("Before Swap iNo1=%d iNo2=%d\n", iNo1, iNo2);

    SwapUsingPointer(&iNo1,&iNo2);

    printf("After Swap iNo1=%d iNo2=%d\n", iNo1, iNo2);
    return 0;
}