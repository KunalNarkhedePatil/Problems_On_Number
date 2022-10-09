#include<stdio.h>
int FindFactorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
   int iFact=1;
   for(int i=1;i<=iNo;i++) 
   {
      iFact=iFact*i;
   }
   return iFact;
}
int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter the Number\n");
    scanf("%d",&iNo);

    iRet=FindFactorial(iNo);

    printf("Factorial of %d is %d\n",iNo,iRet);

    return 0;
}