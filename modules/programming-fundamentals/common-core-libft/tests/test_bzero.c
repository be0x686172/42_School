/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:38:37 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/05 10:35:08 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	test_bzero(void)
{
	char	str[20] = "Hello, World !";

	ft_bzero(str + 2, 5);
	printf("\n - ft_bzero() : %s <-- ['Hello, World !']", str);
}