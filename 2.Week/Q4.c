#include "stdio.h"

int main(int argc, char const *argv[])
{
	int number;
	int a;
	a=2;
	int b;
	
	printf("Enter a number...");
	scanf("%d", &number);
	
	printf("Prime factors...");
	
	
	while(a<=number){
		
		if(number % a==0){
			printf(" %d", a);
			number=number/a;
		}
		
		else {
			a=a+1;
		}	
	}
	

}
	
				
				
			
			
	
	
	
	

