#include <stdio.h>

main(){

double a,b,c;
int option;

printf("Enter first operand: ");
scanf("%lf",&a);

printf("Enter second operand: ");
scanf("%lf",&b);

printf("Select an action.");
printf("\n1 - addition 2- subtraction 3 - multiplication 4 - division\n");
scanf("%d", &option);

switch(option){
case 1: c=a+b; 
printf("%.1lf + %.1lf = %.1lf",a,b,c); break;
case 2: c = a-b; 
printf("%.1lf - %.1lf = %.1lf",a,b,c); break;
case 3: c = a*b; 
printf("%.1lf * %.1lf = %.1lf",a,b,c); break;
case 4: c = a/b; 
printf("%.1lf / %.1lf = %.1lf",a,b,c); break;
default: 
printf("Error"); break;
}
printf("\n");
}