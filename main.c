#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sumTwo(int a, int b)
{
	return(a+b);
}
	
int square(int n)
{
	return(n*n);
}

int get_max(int x, int y)
{	if (x>y)
		return x;
	
		return y;
	}

int main(void) {
	int a,b;
	int n;
	
	a=3;
	b=10;
	printf("sunTwo result:%i\n",sumTwo(a,b) );
	
	n=4;
	printf("square result:%i\n",square(n) );
	
	printf("get_max result:%i\n",get_max(a,b) );

 
	return 0;
}
