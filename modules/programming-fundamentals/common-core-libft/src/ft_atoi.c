/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abderahmane.behar-rahala@lear    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 11:36:39 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/08 17:19:31 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int res;

	sign = 1;
	res = 0;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (!ft_isdigit(nptr[i]) && !ft_isdigit(nptr[i + 1]))
		return (0);
	if (nptr[i] != '-' && nptr[i] != '+' && !ft_isdigit(nptr[i]))
		return (0);
	if (nptr[i] == '-')
	{
		sign = sign * -1;
		i++;
	}
	if (nptr[i] == '+')
		i++;
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}
