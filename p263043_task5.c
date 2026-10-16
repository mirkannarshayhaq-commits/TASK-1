#include <stdio.h>
int main() {

float celsius =37.5;
float faranheit =(celsius*9.0/5.0) +32;
float kelvin = celsius+273.15;
printf("==========Temperature Conversion===========\n");
printf("Temperature in celsius:\t%.2f\n",celsius);
printf("Temperature IN faranheit:%.2f\n",faranheit);
printf("Temperature in kelvin:\t%.2f\n,kelvin");
printf("===========================================");
return 0;
}