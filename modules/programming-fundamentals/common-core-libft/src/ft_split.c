/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:08:06 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/12 18:57:49 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*trim_s(const char *s, char c)
{
	char	set[2];

	set[0] = c;
	set[1] = '\0';
	return (ft_strtrim(s, set));
}

static int	count_words(const char *s, char c)
{
	int		i;
	int		words;
	int		in_word;

	i = 0;
	words = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			in_word = 1;
			words++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (words);
}

void	**ft_split(const char *s, char c)
{
	char	*s_trimmed;
	int		words_counted;
	char	**s_splited;

	s_trimmed = trim_s(s, c);
	words_counted = count_words(s_trimmed, c);
	s_splited = malloc(sizeof(char *) * (words_counted + 1));
	printf("\n\tnombre de mots : %d", words_counted);
}
