#include <stdio.h>
#include <conio.h>

main()
{
	int n,c=0 ;
	clrscr();
	printf("Enter Any Number : ");
	scanf("%d",&n);

	do
	{
		n = n/10;
		c++;



	} while(n!=0);

	printf("%d \t",c);

	getch();
}