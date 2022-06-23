/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igturano <igorturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:40:43 by igturano          #+#    #+#             */
/*   Updated: 2022/06/16 20:48:24 by igturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sub_str;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	sub_str = (char *) malloc (
			(ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof (char));
	if (sub_str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		sub_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		sub_str[i] = s2[j];
		j++;
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s1[] = "opa";
// 	char s2[] = " blz?";
// 	char *a = ft_strjoin(s1, s2);
// 	printf("%s\n", a);
// }
