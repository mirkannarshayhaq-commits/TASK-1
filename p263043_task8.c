#include <stdio.h>
int main(){
double principal=250000.00;
float rate=8.5;
float time =3.0;
float I =principal*rate*time/100.00;
float A =principal+I;
float T =A/36;
printf("===============BANK LOAN INTREST SUMMARY==============\n");
printf("Principal Ammount:\t%.2f\n",principal);
printf("Annual Intrest rate:\t%.2f\n",rate);
printf("Loan Duration:\t\t %.2f\n",time);
printf("_____________________________________________________\n");
printf("Total Accurued Intrest:\t%.2f\n",I);
printf("Total Payable Ammount:\t%.2f\n",A);
printf("Monthly installment:\t%.2f\n",T);
printf("======================================================");
return 0;
}