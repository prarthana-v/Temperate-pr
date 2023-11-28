#include<stdio.h>

main(){
	
	int n,first_digit,last_digit;

	printf("Enter any number:");
	scanf("%d",&n);

	last_digit=n%10;

	while(n>10){
	  n=n/10;
	}

	first_digit=n;

	printf("%d",first_digit+last_digit);
       getch();
}
