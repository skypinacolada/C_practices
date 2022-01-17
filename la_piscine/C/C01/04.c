#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int n1;
	int n2;

	n1 = 11;
	n2 = 2;

	ft_ultimate_div_mod(&n1, &n2);
	printf("%d", n1);
	printf("\n");
	printf("%d", n2);

}
