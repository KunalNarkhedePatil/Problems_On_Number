#include<stdio.h>

void MultiplicationTable(int iNo)
{
    int iMult=0;
   for(int i=1;i<=10;i++)
   {
      iMult=iNo*i;
      printf("%d * %d = %d\n",iNo,i,iMult);
   }
}
int main()
{
    int iNo=0;

    printf("Enter the Number\n");
    scanf("%d",&iNo);

    MultiplicationTable(iNo);
    return 0;
}