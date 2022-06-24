#include<stdio.h>
int isprime(int num)
{
 int i,count=0;
 for(i=1;i<=num;i++)
 {
 if(num%i==0)
 count++;
 }
 if(count==2)
 return 1;
 else 
 return 0;
}
int main()
{
 int n1,n2,i;
 printf("Enter the range:\n");
 scanf("%d %d",&n1,&n2);
 printf("The prime numbers in the given range are:\n");
 for(i=n1;i<=n2;i++)
 {
 if(isprime(i)==1)
 printf("%d ",i);
 }
 return 0;
}

