#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int main()
{
	int n;
	n = 1;

	int *ptr1 = &n;
	int **ptr2 = &ptr1;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****ptr5 = &ptr4; 
	int ******ptr6 = &ptr5;
	int *******ptr7 = &ptr6;
	int ********ptr8 = &ptr7;
	int *********ptr9 = &ptr8;
		
	ft_ultimate_ft(ptr9);
	printf("%d", n);
}
