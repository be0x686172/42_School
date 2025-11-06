/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:27:15 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/06 14:09:48 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*start;

	start = s;
	while (*s)
		s++;
	if ((char)c == '\0')
		return ((char *)s);
	while (s-- >= start)
		if (*s == (char)c)
			return ((char *)s);
	return (NULL);
}
