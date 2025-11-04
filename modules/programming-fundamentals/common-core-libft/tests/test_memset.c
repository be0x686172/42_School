/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:54:33 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/04 10:14:58 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void    test_memset(void)
{
    char    str[20] = "Hello, World !";

    printf("\nbefore_ft_memset() : %s", str);
    ft_memset(str, '#', 5);
    printf("\nafter_ft_memset(str, '#', 5) : %s\n", str);
}