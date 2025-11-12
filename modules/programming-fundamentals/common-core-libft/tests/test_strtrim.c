/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 09:18:15 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/12 10:20:56 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	test_strtrim(void)
{
	printf("\n - ft_strtrim(): %s", ft_strtrim("axaaHello, World !axaa", "xa"));
}
