#include<stdio.h>
int main()
{
printf("enter any number \n");
int n;
scanf("&d",n);
int fac=0;

for(int i=1;i<=n;i++)
{
fac=fac*i;
}

return fac;
}

