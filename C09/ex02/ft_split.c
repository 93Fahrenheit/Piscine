/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-abb <fael-abb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 18:28:47 by fael-abb          #+#    #+#             */
/*   Updated: 2025/08/21 18:30:36 by fael-abb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	nb_words;

	i = 0;
	nb_words = 0;
	while (str[i])
	{
		if (i == 0 && (is_sep(str[i], sep) == 0))
			nb_words++;
		else if ((is_sep(str[i], sep) == 0) && (is_sep(str[i - 1], sep) == 1))
			nb_words++;
		i++;
	}
	return (nb_words);
}

int	get_word_len(char *str, char *sep, int *start)
{
	int	i;
	int	len;

	i = *start;
	while (str[i] && (is_sep(str[i], sep) == 1))
		i++;
	*start = i;
	len = 0;
	while (str[i] && (is_sep(str[i], sep) == 0))
	{
		len++;
		i++;
	}
	return (len);
}

char	*get_word(char *str, char *sep, int *start)
{
	int		word_len;
	int		i;
	char	*word;

	i = 0;
	word_len = get_word_len(str, sep, start);
	word = malloc(word_len + 1);
	if (!word)
		return (NULL);
	while (i < word_len)
	{
		word[i] = str[*start + i];
		i++;
	}
	word[i] = '\0';
	*start += word_len;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		words;
	int		i;
	int		start;

	words = count_words(str, charset);
	tab = malloc(sizeof(*tab) * (words + 1));
	if (!tab || !str || !charset)
		return (NULL);
	tab[words] = NULL;
	i = 0;
	start = 0;
	while (i < words)
	{
		tab[i] = get_word(str, charset, &start);
		if (!tab[i])
			return (NULL);
		i++;
	}
	return (tab);
}
/*
int	main()
{
	char sep[] = "- +=";
	char str[] = "   Hello+++my name---is Slim =Shady+++";
	
	char **tab = ft_split(str, sep);
	
	int i = 0;
	while (tab[i])
	{
   	 	printf("%s\n", tab[i]);
   	 	i++;
	}
	i = 0;
	while (tab[i])
	{	
    		free(tab[i]);
    		i++;
	}
	free(tab);
	return (0);
}*/
