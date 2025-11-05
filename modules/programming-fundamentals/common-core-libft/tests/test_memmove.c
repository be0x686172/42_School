/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:37:43 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/05 10:14:52 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	test_memmove(void)
{
	char	src[6] = "ABCDE";

	ft_memmove(src + 1, src, 2);

	printf("\n - ft_memmove(src, 'ABCDE', n) : %s", src);
}