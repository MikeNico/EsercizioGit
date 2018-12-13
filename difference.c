#include <stdint.h>
#include <stdio.h>

int fnDiff(int num1, int num2);

int main(int argc, char* argv[])
 {

 int num1=0, num2=0;

 printf("Insert first number:\n");
 scanf("%d",&num1);
 printf("Insert second number:\n");
 scanf("%d",&num2);

 printf("The difference between %d and %d is: %d.\n",num1,num2,fnDiff(num1,num2))

 return 0;

 }

int fnDiff(int num1, int num2)
 {

 int diff=0;

 diff=num1-num2;

 return diff;

 }
