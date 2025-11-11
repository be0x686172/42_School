/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 09:26:07 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/11 10:38:25 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	size_t	len_s1;
	char	*ptr;

	len_s1 = ft_strlen(s1);
	i = 0;
	while (s1[i])
	{
		while (set[j])
		i++;
	}
	return (ptr);
}
