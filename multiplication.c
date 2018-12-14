#include <stdint.h>
#include <stdio.h>

int fnMult(int num1, int num2);

int main(int argc, char* argv[])
 {

 int num1=0, num2=0;

 printf("Insert first number:\n");
 scanf("%d",&num1);
 printf("Insert second number:\n");
 scanf("%d",&num2);

 printf("The product of %d and %d is: %d.\n",num1,num2,fnMult(num1,num2))

 return 0;

 }

int fnMult(int num1, int num2)
 {

 int product=0;

 product=num1-num2;

 return product;

 }
