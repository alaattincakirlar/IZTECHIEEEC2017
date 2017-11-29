#include "stdio.h"

int main(int argc, char const *argv[])

{

int number;
int a;
int result;


printf("Enter a number...");
scanf("%d", &number);

for (a=1;a<=number;a++) {
	result=result*a;
}
	
printf("Factorial of %d= %d",number, result);


}
