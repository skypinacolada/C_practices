#include <stdio.h>

void	ft_swap(int *a, int *b);

int main()
{
	int a;
	int b;

	a = 3; 
	b = 5;

	ft_swap(&a, &b);
	printf("%d", a);
	printf("\n");
	printf("%d", b);
}
