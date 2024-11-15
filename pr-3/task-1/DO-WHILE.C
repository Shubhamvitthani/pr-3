#include <stdio.h>
#include <conio.h>

main()
{
	char ch='a';
	clrscr();

	do
	{
		printf("\t%c",ch);
		ch+=4;

	}while(ch<='z');

	getch();
}