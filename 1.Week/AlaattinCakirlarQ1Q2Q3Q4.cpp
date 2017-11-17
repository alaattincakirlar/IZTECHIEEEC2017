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

int anynumber;
printf("\n\nPlease enter any number to go on....");
scanf("%d", &anynumber);


int a;
a=number1 * number2;
printf("\n number1 * number2 = %d", a);

int result;
result=number1 * number2;
printf("\n\nPlease enter \"result\" again to go on....");
scanf("%d", &result);

int b;
b=number1 + number2;
printf("\n number1 + number2 = %d", b);

result=number1 + number2;
printf("\n\nPlease enter \"result\" again to go on....");
scanf("%d", &result);

int c;
c=number1 - number2;
printf("\n number1 - number2 = %d", c);

result=number1 - number2;
printf("\n\nPlease enter \"result\" again to go on....");
scanf("%d", &result);

float d;
d=number1 / number2;
printf("\n number 1 / number2 = %f", d);

float result1;
result1=number1 / number2;
printf("\n\nPlease enter \"result\" again to go on...");
printf("\n I hope it is INTEGER...");
scanf("%f", &result1);

printf("\n\n\nEND OF THE CHAPTER2");
printf("\n\n\nPlease enter any number to go on...");
scanf("%d", &anynumber);

printf("\n\nChapter3");
printf("\n\nPlease enter any number to go on...");
scanf("%d", &anynumber);

printf("\n\nYou can exchange Turkish Liras to Euros, Dollars and Sterling.");
printf("\nPlease enter any number to go on...");
scanf("%d", &anynumber);

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
