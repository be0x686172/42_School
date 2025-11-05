/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:40:13 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/05 14:54:40 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	if (ft_strlen(dst) > size)
		return (ft_strlen(dst) + ft_strlen(src));
	else
	{
		ft_memcpy(dst + ft_strlen(dst), src, ft_strlen(src));
	}
	return (ft_strlen(dst) + ft_strlen(src));
}
