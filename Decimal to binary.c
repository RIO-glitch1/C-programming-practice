#include<stdio.h>
int main()
{
int a,i=0,A[16]={0};
printf("Decimal Number: ");
scanf("%d", &a);

for(a=a;a!=0;a=a/2)
{
A[i]=a%2; i++;
}

printf("Binary Number: ");

for(i=15;i>=0;i--)
{
printf("%d", A[i]);
}
//first array program UwU
}
