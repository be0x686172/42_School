/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:40:13 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/06 10:31:22 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_strlen;
	size_t	src_strlen;
	size_t	concat_len;

	dst_strlen = ft_strlen(dst);
	src_strlen = ft_strlen(src);
	if (size <= dst_strlen)
		return (src_strlen + size);
	concat_len = size - dst_strlen - 1;
	if (concat_len > 0)
		ft_memcpy(dst + dst_strlen, src, concat_len);
	dst[dst_strlen + concat_len] = '\0';
	return (dst_strlen + src_strlen);
}
