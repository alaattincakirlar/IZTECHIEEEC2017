#include "stdio.h"

int main(int argc, char const *argv[])

{

int number;
int a; 
int result=0;


printf("Enter a number...");
scanf("%d", &number);

for(a=1; a<number; a++) {
	
	if(number % a==0) {
		printf("+%d", a);
		result=result+a;
		
	}
	
}
printf("=%d",result);

if(result==0){
	printf("\nYour number is NOT perfect number!");
}

else if(result==number){
	printf("\nYour number is perfect number!");
}

else{
	printf("\nYour number is NOT perfect number!");
}

}
