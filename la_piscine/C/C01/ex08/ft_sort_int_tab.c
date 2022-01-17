/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeelee <yeelee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:25:49 by yeelee            #+#    #+#             */
/*   Updated: 2022/01/17 09:04:07 by yeelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	idx_min;

	i = 0;
	while (i < size)
	{
		idx_min = i;
		j = i;
		while (j < size)
		{
			if (tab[j] <= tab[idx_min])
			{
				idx_min = j;
			}
			j++;
		}
		ft_swap(&tab[i], &tab[idx_min]);
		i++;
	}
}
