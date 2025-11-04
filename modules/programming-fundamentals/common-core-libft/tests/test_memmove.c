/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:37:43 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/04 17:27:56 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	test_memmove(void)
{
	char	dest[10];

	memmove(dest, "Hello, World !", 4);

	printf("\n - ft_memmove(dest, 'Hello, World !', n) : %s", dest);
}