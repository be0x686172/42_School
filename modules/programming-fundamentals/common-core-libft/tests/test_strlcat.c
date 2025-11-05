/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:21:53 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/05 12:10:56 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	test_strlcat(void)
{
	char dest[8] = "Hello";

	printf("\n - ft_strlcat(): %zu | dest : %s", strlcat(dest, "World", sizeof(dest)), dest);
}