/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:17:52 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/06 11:19:11 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	test_tolower(void)
{
	char	c = 'D';

	c = ft_tolower(c);
	printf("\n - ft_toupper(): %c <-- ['D']", ft_tolower(c));
}
