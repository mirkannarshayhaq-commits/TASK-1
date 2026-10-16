#include <stdio.h>
int main() {
int a=3;
float b=60.00;
float c=a*b;
int d=4;
float e=40.50;
float f=d*e;
int g=2;
char x=('%');
float h=120.00;
float i=g*h;
float  sub_total=c+f+i;
float gst=0.16*sub_total;
float grand_total=sub_total-gst;
printf("=====================FAST CAFETERIA RECIEPT==============================\n");
printf("Item\t\t\tQty\t\tUnit price (PKR)\tSubtotal (PKR)\n");
printf("Tea\t\t\t%d\t\t%.2f\t\t\t%.2f\n",a,b,c);
printf("Samosa\t\t\t%d\t\t%.2f\t\t\t%.2f\n",d,e,f);
printf("Chicken roll  \t\t%d\t\t%.2f\t\t\t%.2f\n",g,h,i);
printf("_________________________________________________________________________\n");
printf("Subtotal:\t     \t     \t  \t\t\t \t%.2f\n",sub_total);
printf("Gst (16%c)\t  \t   \t  \t\t\t\t%.2f\n",x,gst);
printf("__________________________________________________________________________\n");
printf("Grand Total:\t  \t    \t   \t\t  \t\t%.2f\n",grand_total);
printf("=======================THANK YOU FOR YOUR VISIT=============================\n");
return 0;
}








