#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main()
{
	int arr[10] = {3, 10, 8, 2, 5, 7, 6, 9, 4, 1};
	int i = 0;	
	ft_sort_int_tab(arr, 10);
	while(i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}
}
