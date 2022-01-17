#include <stdio.h>

void	ft_ft(int *nbr);

int main()
{
	int n;

	n = 1;
	printf("%d", n);
	printf("\n");
	ft_ft(&n);
	printf("%d", n);
}
