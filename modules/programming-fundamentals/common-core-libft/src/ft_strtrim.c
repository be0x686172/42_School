/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 09:26:07 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/12 10:54:21 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	begin_count_trim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	count;
	size_t	global_count;

	global_count = 0;
	i = 0;
	while (s1[i])
	{
		j = 0;
		count = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				count++;
				global_count++;
			}
			j++;
		}
		if (!count)
			break ;
		i++;
	}
	return (global_count);
}

static int	end_count_trim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	count;
	size_t	global_count;

	global_count = 0;
	i = ft_strlen(s1) - 1;
	while (i > 0)
	{
		j = 0;
		count = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				count++;
				global_count++;
			}
			j++;
		}
		if (!count)
			break ;
		i--;
	}
	return (global_count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin_count;
	size_t	end_count;
	size_t	total_len_ptr;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	begin_count = begin_count_trim(s1, set);
	end_count = end_count_trim(s1, set);
	if (begin_count + end_count >= ft_strlen(s1))
		return (ft_strdup(""));
	total_len_ptr = ft_strlen(s1) - begin_count - end_count;
	ptr = malloc(total_len_ptr + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1 + begin_count, total_len_ptr);
	ptr[total_len_ptr] = '\0';
	return (ptr);
}
