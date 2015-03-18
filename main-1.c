#include <stdio.h>
 
int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);
<<<<<<< HEAD
 
int main(int argc, char* argv[])
{
	int g, h, i;
=======

int main(int argc, char* argv[])
{
	int a, b, c;
>>>>>>> feature/iss1-create-skeleton
	char operator;
	
	printf("Please enter a expression(ex.1 -9)");
	scanf("%d %c %d", &a, &operator, &b);
	
	switch (operator)
	{
		case '+':
			c = add(a, b);
			break;
		case '-':
			c = sub(a, b);
			break;
		case '*':
			c = multi(a, b);
			break;
		case '/':
			c = div(a, b);
			break;
	}
	
	printf("result is %d.\n", c);
	
<<<<<<< HEAD
=======
	// for push test.
	
>>>>>>> feature/iss1-create-skeleton
	return 0;
}
 
int add(int a, int b)
{
	//TODO implementation
	return 0;
}
 
int sub(int a, int b)
{
	//TODO implementation
	return 0;
}
 
int multi(int a, int b)
{
	//TODO implementation
	return 0;
}
 
int div(int a, int b)
{
	//TODO implementation
	return 0;
}