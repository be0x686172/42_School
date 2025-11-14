/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:59:43 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/14 17:59:43 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	test_split(void)
{
	char	**s;
	int		i;
	int		len;

	s = ft_split("        ", '-');
	
	len = 0;
	while (s[len])
	{
		len++;
	}

	printf("\n - ft_split() : [");
	i = 0;
	while (s[i])
	{
		if (i < len - 1)
			printf("%s, ", s[i]);
		else
			printf("%s", s[i]);
		i++;
	}
	printf("]");
}
