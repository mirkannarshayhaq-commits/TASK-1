#include <stdio.h>
int main() {
float pf =88.00;
int pfc=3;
float cm=76.5;
int Cc= 3;
float Apm=82.0;
int apc =2;
float  Tw =pf*pfc+cm*Cc+Apm*apc;
int Tc=pfc+Cc+apc;
float Wa =Tw/Tc;
char x=('%');
printf("=================SEMISTER ACADEMIC REPORT=====================\n");
printf("Course\t\tCredit Hours\tObtained marks\n");
printf("_______________________________________________________________\n");
printf("Programming Fundmental\t%d\t\t%.2f\n",pfc,pf);
printf("calculus\t\t%d\t\t%.2f\n",Cc,cm);
printf("Applied Physics\t\t%d\t\t %.2f\n",apc,Apm);
printf("_______________________________________________________________\n");
printf("Total Credits: %d\tWeighted Average: %.2f%c\n",Tc,Wa,x);
printf("===============================================================");



return 0;
}