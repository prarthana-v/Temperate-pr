#include<stdio.h>
#include<conio.h>
main(){
	int i=0;
	int n;

	clrscr();

	printf("Enter n:");
	scanf("%d",&n);

	while(n>=10){
	 n=n/10;
	 i++;
	}
	printf("%d",i+1);

	getch();
}