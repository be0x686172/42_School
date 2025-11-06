/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:32:06 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/06 18:24:13 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = -1;
	while (i++ < n && ptr[i] != c)
		printf("%c-", ptr[i]);
	return (ptr);
}
