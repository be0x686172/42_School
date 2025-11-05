/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:01:13 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/05 10:04:31 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	test_memcpy(void)
{
	char	src[] = "ABCDE";

	memcpy(src, src + 1, 1);

	printf("\n - ft_memcpy(src, 'ABCDE', n) : %s", src);
}