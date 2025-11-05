/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:21:53 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/05 14:55:26 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	test_strlcat(void)
{
	char	dest[15] = "Hello";
	char	src[] = "World";

	printf("\n - ft_strlcat(): %zu | dest : %s", ft_strlcat(dest, src, sizeof(dest)), dest);
}