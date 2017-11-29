#include "stdio.h"

int main(int argc, char const *argv[])

{

int number;
int x;
x=2;

printf("Please enter number(integer) that you want to learn it is prime or not prime...");
scanf("%d", &number);

	if(number < 2)
	{
		printf("%d is not prime.", number);
		return 0;
	}
	
	else if(number==2)
	{
		printf("%d is prime.", number);
		return 0;
	}
	
	else {
		while(number > x)
{
			if(number % x==0 )	{
				printf("%d is not prime.", number);
				return 0;	
	}	
		x=x+1;	
		
	}
	
	printf("%d is prime.", number);
	
}

}
	
	




	



