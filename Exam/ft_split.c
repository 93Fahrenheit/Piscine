#include <stdlib.h>
#include <stdio.h>

int	is_sep(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int	count_words(char *str)
{
	int	i = 0;
	int	words = 0;

	while (str[i])
	{
		if (is_sep(str[i]) == 0 && (i == 0 || is_sep(str[i - 1]) == 1))
			words++;
		i++;
	}
	return (words);
}

int	get_word_len(char *str, int *start)
{
	int	i;
	int	len = 0;

	i = *start;
	while (str[i] && is_sep(str[i]) == 1)
			i++;
	*start = i;
	while (str[i] && is_sep(str[i]) == 0)
	{
		len++;
		i++;
	}
	return (len);
}

char	*get_word(char *str, int *start)
{
	char	*dest;
	int	word_len;
	int	i = 0;

	word_len = get_word_len(str, start);
	dest = malloc(word_len + 1);
	if (!dest)
		return (NULL);
	while (i < word_len)
	{
		dest[i] = str[i + *start];
		i++;
	}
	dest[i] = '\0';
	*start += word_len;
	return (dest);
}

char	**ft_split(char *str)
{
	char	**tab;
	int	words = count_words(str);
	int	start = 0;
	int	i = 0;

	tab = malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	tab[words] = NULL;
	while (i < words)
	{
		tab[i] = get_word(str, &start);
		i++;
	}
	return (tab);
}

int	main()
{
	char	str[] = "Hello my name\tis\n Slim \tShady\n";
	char	**tab;
	int 	i = 0;

	tab = ft_split(str);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}
