#include <stdint.h>
#include <stdio.h>

int main(int argc, char* argv[])
 {

 int num1=0, num2=0, sum=0;

 printf("Insert first number:\n");
 scanf("%d",&num1);
 printf("Insert second number:\n");
 scanf("%d",&num2);

 sum=num1+num2;

 printf("The sum of %d and %d is %d.\n",num1,num2,sum);

 return 0;

 }
