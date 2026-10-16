#include <stdio.h>
int main() {
double basic_salary=85000.00;
float H=0.20*basic_salary;
float M= 0.10*basic_salary;
float G=basic_salary+H+M;
float T= 0.05*basic_salary;
float N=G-T;
printf("=================MONTHLY SALARY SLIP====================\n");
printf("Basic Salary:\t\t%.2f\n",basic_salary);
printf("House Rent Allowance:\t%.2f\n",H);
printf("Medical Allowance:\t%.2f\n",M);
printf("________________________________________________________\n");
printf("Gross Salary:\t\t%.2f\n",G);
printf("Tax Deduction:\t\t%.2f\n",T);
printf("_________________________________________________________\n");
printf("Net Payable Salary:\t%.2f\n",N);
printf("==========================================================");


return 0;
}