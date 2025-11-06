/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:32:48 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/06 10:33:38 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	test_strlcpy(void)
{
	char dest[15];

	printf("\n - ft_strlcpy(): %zu | dest : %s", ft_strlcpy(dest, "Hello !", 14), dest);
}
