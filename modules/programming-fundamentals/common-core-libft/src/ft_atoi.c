/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 11:36:39 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/08 15:50:36 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;

	i = 0;
	if (nptr[0] == ' ')
	{
		while (nptr[i] == ' ')
			i++;
	}
	if (!ft_isdigit(nptr[i]) && !ft_isdigit(nptr[i + 1]))
		return (0);
	if (nptr[i] != '-' && nptr[i] != '+' && !ft_isdigit(nptr[i]))
		return (0);
	while (nptr[i])
	{
		printf("%c", nptr[i]);
		i++;
	}
	return (0);
}
