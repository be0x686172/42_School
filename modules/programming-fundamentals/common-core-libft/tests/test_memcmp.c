/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abderahmane.behar-rahala@lear    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 21:36:12 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/06 21:36:12 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	test_memcmp(void)
{
	printf("\n - ft_memcmp() : %d", ft_memcmp("Aac", "Acc", 6));
}
