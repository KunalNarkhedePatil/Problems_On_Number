#include <stdio.h>
void Factor(int iNo)
{
    for (int i = 1; i <= iNo / 2; i++)
    {
        if (iNo % i == 0)
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int iNo = 0;

    printf("Enter the Number\n");
    scanf("%d", &iNo);

    Factor(iNo);
    return 0;
}