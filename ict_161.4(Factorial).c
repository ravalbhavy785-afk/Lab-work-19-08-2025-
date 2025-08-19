#include<stdio.h>
int main()
{
 int n, i, fact=1;
 printf("Enter the number");
 scanf("%d",&n);

 if(n<0)
 {
 printf("Factorial is not defined for negative numbers\n");

 }
 if( n==0)
 printf("Your ans is 1");

 else
    {
 for(i=1; i<=n;i++)
 {
  fact=fact*i;
}
  printf("Factorial of %d=%d\n", n, fact);
}
return 0;
}


