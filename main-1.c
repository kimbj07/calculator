#include <stdio.h>
 
int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);
<<<<<<< HEAD
<<<<<<< HEAD

=======
 
>>>>>>> conflict 된 부분 수정.
=======
 
>>>>>>> ccc9922f2fe0dfc072e5c76b57675da7f4611550
int main(int argc, char* argv[])
{
	int a, b, c;
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
<<<<<<< HEAD

=======
	
>>>>>>> conflict 된 부분 수정.
=======
	
>>>>>>> ccc9922f2fe0dfc072e5c76b57675da7f4611550
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