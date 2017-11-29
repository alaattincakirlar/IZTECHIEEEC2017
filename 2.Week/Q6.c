#include "stdio.h"

int main(int argc, char const *argv[])
{
int number1;
int number2;
int x;
int y;


printf("Enter a number...");
scanf("%d", &number1);

printf("Enter a number...");
scanf("%d", &number2);

for(x=1; x<=number1*number2; x++){
	
	if(x % number1==0 & x % number2==0) {
		printf("Ekok...%d",x);
		break;
	}	
	
}
	
if(number1>number2){
	for(y=1; y<=number1; y++) {
		if(number1 % y ==0 & number2 % y==0){
			printf("\nEbob...%d",y);
			break;
		}
	}
}

else{
	for(y=1; y<=number2; y++){
		if(number1 % y==0 & number2 % y==0){
			printf("\nEbob...%d",y);
			break;
		}
	}

	
}
}
