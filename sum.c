#include <stdint.h>
#include <stdio.h>

int fnSum(int16_t num1, int16_t num2);

int main(int argc, char* argv[])
 {

 int16_t num1=0, num2=0;

 printf("Insert first number:\n");
 scanf("%d",&num1);
 printf("Insert second number:\n");
 scanf("%d",&num2);

 printf("The sum of %d and %d is %d.\n",num1,num2,fnSum(num1,num2));

 return 0;

 }

int fnSum(int16_t num1, int16_t num2)
 {

 int sum=0;

 sum=num1+num2;

 return sum;

 }
