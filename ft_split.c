/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igturano <igorturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 20:23:35 by igturano          #+#    #+#             */
/*   Updated: 2022/06/22 20:38:16 by igturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	start_word;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start_word = i;
		while (s[i] != c && s[i])
			i++;
		if (start_word != i)
			count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		word;
	int		i;
	int		start_word;

	if (!s)
		return (NULL);
	word = 0;
	i = 0;
	arr = ft_calloc(ft_count_word(s, c) + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start_word = i;
		while (s[i] != c && s[i])
			i++;
		if (start_word != i)
			arr[word++] = ft_substr(s, start_word, i - start_word);
	}
	arr[word] = NULL;
	return (arr);
}

// int main(void)
// {
// 	char **tab;
// 	char *ptr;
// 	ptr = " split this   for mee    ";
// 	char c = ' ';
// 	tab = ft_split(ptr, c);
// 	int i = 0;
// 	while (i < 4)
// 	{
// 		printf("tab[%i] = %s\n", i, tab[i]);
// 		i++;
// 	}
// }
