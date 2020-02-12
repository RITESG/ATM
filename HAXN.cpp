#include<stdio.h>
#include<conio.h>

main()
{
	
	int num 1=0 , num2=1 , n , i , fib;
	clrscr();
	
	printf("\n\nEnter the value of n: ");
	scanf("%d", &n);
	
	for(i=1;i<=n-2;i++);
	{
		fib=num1+num2;
		num1=num2;
		num2=fib;
		
	}
	printf("\nnth fibonacci number(for n = %d) = %d, n,fib")
	getch();
	
	}
