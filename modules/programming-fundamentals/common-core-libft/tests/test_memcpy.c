/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:01:13 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/04 16:07:23 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	test_memcpy(void)
{
	char	dest[10];

	ft_memcpy(dest, "Hello, World !", 3);

	printf("\n - ft_memcpy(dest, 'Hello, World !', n) : %s", dest);
}