/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 08:56:55 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/10 09:16:55 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	test_calloc(void)
{
	int	count = 6;
	int	*tab = ft_calloc(count, sizeof(char)); 
	int	i = 0;

	printf("\n - ft_calloc(): [");
	
	while (i < count)
	{
		if (i != count - 1)
			printf("%d, ", tab[i]);
		else
			printf("%d]", tab[i]);
		i++;
	}
	
	free(tab);
}