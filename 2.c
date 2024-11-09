#include <stdio.h>

int main() {
 char operator;
 double num1, num2, result;

 printf("Yeke az amalgarhaye + * / - ra entekhab konid : ");
 scanf(" %c", &operator);
 
 printf("Do adad vared konid : ");
 printf("Adad aval : ");
 scanf("%lf", &num1);
 printf("Adad dovom : ");
 scanf("%lf", &num2);

switch (operator) {
case '+':
result = num1 + num2;
printf("%.2lf + %.2lf = %.2lfn", num1, num2, result);
 break;
  case '-':
 result = num1 - num2;
 printf("%.2lf - %.2lf = %.2lfn", num1, num2, result);
 break;
case '*':
 result = num1 * num2;
printf("%.2lf * %.2lf = %.2lfn", num1, num2, result);
 break;
 case '/':
 // بررسی تقسیم بر صفر
 if (num2 != 0) {
 result = num1 / num2;
 printf("%.2lf / %.2lf = %.2lfn", num1, num2, result);
 } else {
 printf("Tagsim bar 0 emkanpazer nist ");
 }
 break;
 default:
 printf("Amalgar namotabar ast");
 }

 return 0;
}