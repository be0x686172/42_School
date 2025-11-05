/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:01:13 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/05 14:11:25 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	test_memcpy(void)
{
	char	dest[20] = "Hello";
	char	src[] = "World";

	ft_memcpy(dest + ft_strlen(dest), src, ft_strlen(src) + 1);

	printf("\n - ft_memcpy() : %s", dest);
}