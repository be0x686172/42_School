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
	int		in_word_flag;

	i = 0;
	words = 0;
	in_word_flag = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word_flag)
		{
			in_word_flag = 1;
			words++;
		}
		else if (s[i] == c)
			in_word_flag = 0;
		i++;
	}
	return (words);
}

static void	count_word_letters(const char *s, char c, char **s_splited)
{
	int	i;
	int	letters;
	int	j;

	i = 0;
	letters = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
			letters++;
		if (s[i] == c && letters > 0)
		{
			// printf("\n\t| Nombre de lettres dans le mot: %d", letters);
			s_splited[j] = malloc(sizeof(char) * letters + 1);
			j++;
			letters = 0;
		}
		i++;
	}
	// printf("\n\t| Nombre de lettres dans le mot: %d et j: %d", letters, j);
	s_splited[j] = malloc(sizeof(char) * letters + 1);
}

static void	put_word_letters(const char *s, char c, char **s_splited)
{
	int	i;

	i = 0;
}

void	ft_split(const char *s, char c)
{
	char	*s_trimmed;
	int		words_counted;
	char	**s_splited;

	s_trimmed = trim_s(s, c);
	words_counted = count_words(s_trimmed, c);
	s_splited = malloc(sizeof(char *) * (words_counted + 1));
	printf("\n\t| Chaine trimé : '%s'", s_trimmed);
	printf("\n\t| nombre de mots : %d", words_counted);
	count_word_letters(s_trimmed, c, s_splited);
	put_word_letters(s, c, s_splited);
}
