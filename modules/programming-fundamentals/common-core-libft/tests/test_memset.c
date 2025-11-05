/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:54:33 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/05 10:35:45 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	test_memset(void)
{
	char	str[20] = "Hello, World !";

	ft_memset(str + 1, 54, 5);
	printf("\n - ft_memset() : %s <-- ['Hello, World !']", str);
}