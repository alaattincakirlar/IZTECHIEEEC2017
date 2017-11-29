#include "stdio.h"

int main(int argc, char const *argv[])

{

int number;
int a;
int b;
int x;

printf("Enter a number...");
scanf("%d", &number);

printf("Prime number(s)...");

for(a=2; a<number; a++) {
	
	x=1;
	
	for(b=2;b<a; b++) {
		
		if(a % b == 0){
			
		x=7;
		
		}
		
		}
		
		if(x==1){
			
			printf(" %d",a);
		
	}
	
}

}

	


	
	
	
	
	
	
	
	






