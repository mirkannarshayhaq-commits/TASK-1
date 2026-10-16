#include <stdio.h>
int main() {
char a =('M');
int b= 42;
float c=3.1441590;
double d = 98.765432;
printf("Type Name\tVarriable Name\tSize in memory\n");
printf("__________________________________________________________\n");
printf("character\t%c     \t       1 bytes\n",a);
printf("integer  \t%d     \t      4 bytes\n",b);
printf("float    \t%f  \t  4 bytes\n",c);
printf("double  \t%1f  \t  8 bytes",d);



return 0;}