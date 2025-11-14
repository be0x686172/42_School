/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:08:06 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/14 18:34:38 by abehar-r         ###   ########.fr       */
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
			s_splited[j] = malloc(sizeof(char) * (letters + 1));
			j++;
			letters = 0;
		}
		i++;
	}
	if (letters > 0)
		s_splited[j] = malloc(sizeof(char) * (letters + 1));
}

static void	fill_words(const char *s, char c, char **s_splited)
{
	int	i;
	int	word;
	int	letter;

	i = 0;
	word = 0;
	letter = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			s_splited[word][letter] = s[i];
			letter++;
		}
		if (s[i] == c && letter > 0)
		{
			s_splited[word][letter] = '\0';
			word++;
			letter = 0;
		}
		i++;
	}
	if (letter > 0)
		s_splited[word][letter] = '\0';
}

char	**ft_split(const char *s, char c)
{
	char	*s_trimmed;
	int		words_counted;
	char	**s_splited;

	s_trimmed = trim_s(s, c);
	words_counted = count_words(s_trimmed, c);
	s_splited = malloc(sizeof(char *) * (words_counted + 1));
	count_word_letters(s_trimmed, c, s_splited);
	fill_words(s_trimmed, c, s_splited);
	s_splited[words_counted] = NULL;
	free(s_trimmed);
	return (s_splited);
}
