#include <stdint.h>
#include <stdio.h>

int main(int argc, char *argv[])
 {

 char name[10]={0};

 printf("Hi, what's ur name?\n")

 gets(name);

 printf("Hello %s!\n",name);

 return 0;

 }
