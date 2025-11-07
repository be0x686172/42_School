/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abderahmane.behar-rahala@lear    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 21:45:18 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/06 21:45:18 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	while (n--)
	{
		if ((unsigned char)*ptr_s1 != (unsigned char)*ptr_s2)
			return ((unsigned char)*ptr_s1 - (unsigned char)*ptr_s2);
		ptr_s1++;
		ptr_s2++;
	}
	return (0);
}
