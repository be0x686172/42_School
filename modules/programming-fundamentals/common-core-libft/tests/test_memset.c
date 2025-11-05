/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:54:33 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/05 08:44:35 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	test_memset(void)
{
	char	str[20] = "Hello, World !";

	ft_memset(str + 1, 54, 5);
	printf("\n - ft_memset(str, 54, 5) : %s <-- ['Hello, World !']", str);
}