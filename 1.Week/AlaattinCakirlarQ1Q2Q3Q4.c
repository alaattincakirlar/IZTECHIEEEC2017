#include<stdio.h>
int main()
{
	printf("Hello World!\n\n");

printf("Chapter1");

int number1;

printf("\n\nPlease enter your first number...");
scanf("%d", &number1);

int number2;

printf("Ok. Thanks, now please enter your second number...");
scanf("%d", &number2);


printf("\n\n\nChapter2");

int anynumber1;
printf("\n\nPlease enter any number to go on....");
scanf("%d", &anynumber1);


int a;
a=number1 * number2;
printf("\n number1 * number2 = %d", a);

int result1;
result1=number1 * number2;
printf("\n\nPlease enter \"result\" again to go on....");
scanf("%d", &result1);

int b;
b=number1 + number2;
printf("\n number1 + number2 = %d", b);

int result2;
result2=number1 + number2;
printf("\n\nPlease enter \"result\" again to go on....");
scanf("%d", &result2);

int c;
c=number1 - number2;
printf("\n number1 - number2 = %d", c);

int result3;
result3=number1 - number2;
printf("\n\nPlease enter \"result\" again to go on....");
scanf("%d", &result3);

float d;
d=number1 / number2;
printf("\n number 1 / number2 = %f", d);

float result4;
result4=number1 / number2;
printf("\n\nPlease enter \"result\" again to go on...");
printf("\n I hope it is INTEGER...");
scanf("%f", &result4);

int anynumber2;
printf("\n\n\nEND OF THE CHAPTER2");
printf("\n\n\nPlease enter any number to go on...");
scanf("%d", &anynumber2);

int anynumber3;
printf("\n\nChapter3");
printf("\n\nPlease enter any number to go on...");
scanf("%d", &anynumber3);

int anynumber4;
printf("\n\nYou can exchange Turkish Liras to Euros, Dollars and Sterling.");
printf("\nPlease enter any number to go on...");
scanf("%d", &anynumber4);

float money;

printf("\n\nHow many Turkish Liras do you want to exchange?...");
scanf("%f", &money);

float euro;
euro=money/4.54238473;
float dollar;
dollar=money/3.8614064;
float sterling;
sterling=money/5.0962;
printf("\n\n\n%f Turkish Liras are %f Euros , %f Dollars and %f Sterling\n\n\n", money,euro,dollar,sterling);

printf("\nTHIS IS THE END:D\n\n");


































}
