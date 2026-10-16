#include <stdio.h>
int main() {

char a=('\\');

char b=('n');
char c=('t');
char d=('%');
printf("================ C Escape Sequences Refrence ===============\n");

printf("To print a double quote,write:\t\t%c\n",a);

printf("To print literal backslash write:\t\t%c%c\n",a,a);
printf("To print a new line breeak,write:\t\t%c%c\n",a,b);
printf("To insert a horizontal tab stop,write:\t%c\n",c);
printf("To print a percent sign,write\t\t%c%c\n",d,d);
printf("=============================================================");


return 0;
}