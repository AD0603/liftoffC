#include<stdio.h>
int main() {
 int n,b,rem; 

 printf("Enter integer numbers: ");
 scanf ("%d", &n);
 int sum = 0;
 do {
  rem=n%10; 
  sum=sum+rem;
  n=n/10; 
 } while (n > 0);
 printf ("The Sum is = %d \n",sum);
 return 0;
}