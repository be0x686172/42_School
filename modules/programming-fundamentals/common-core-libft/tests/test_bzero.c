/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:38:37 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/04 10:41:24 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	test_bzero(void)
{
    char    str[20] = "Hello, World !";

    printf("\nbefore_ft_bzero() : %s", str);
    ft_bzero(str, 5);
    printf(" | ft_bzero(str, 54, 5) : %s\n", str);
}