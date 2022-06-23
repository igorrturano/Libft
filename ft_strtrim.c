/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igturano <igorturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:12:21 by igturano          #+#    #+#             */
/*   Updated: 2022/06/22 21:34:06 by igturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	if (!s1)
		return (NULL);
	j = ft_strlen(s1) + 1;
	count = j;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (count > i && ft_strrchr(set, s1[count - 1]))
		count--;
	return (ft_substr(s1, i, count - i));
}

// #include <stdio.h>

// int main(void)
// {
// 	char a[] = "";
// 	char set[] = "";
// 	char *res = ft_strtrim(a, set);
// 	printf("%s", res);
// }
