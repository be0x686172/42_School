/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:53:17 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/04 16:07:47 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	test_strlen(void)
{
	const char	*str = "Hello, World !";

	printf("\n - ft_strlen(%s): %zu", str, ft_strlen(str));
}