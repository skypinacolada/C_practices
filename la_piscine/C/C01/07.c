#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	int i;

	i = 0;
	ft_rev_int_tab(arr, 5);
	while(i < 5)
	{
		printf("%d", arr[i]);
		i++;
	}
}
