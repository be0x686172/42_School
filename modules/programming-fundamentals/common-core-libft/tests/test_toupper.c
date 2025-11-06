/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:36:08 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/06 11:15:53 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	test_toupper(void)
{
	char	c = 'd';

	c = ft_toupper(c);
	printf("\n - ft_toupper(): %c <-- ['d']", ft_toupper(c));
}
