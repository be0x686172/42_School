/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:24:31 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/10 09:33:41 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	test_strdup(void)
{
	char	*str = ft_strdup("Hello les amis !");

	printf("\n - ft_strdup(): %s", str);
}