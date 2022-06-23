/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igturano <igorturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:34:50 by igturano          #+#    #+#             */
/*   Updated: 2022/06/11 20:18:39 by igturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (*s2 == 0)
		return ((char *)s1);
	i = 0;
	while (i < n && s1[i])
	{
		j = 0;
		while (s1[i + j] == s2[j] && (i + j) < n)
		{
			j++;
			if (s2[j] == 0)
				return (((char *) s1) + i);
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>
int main(void)
{
    char a[20] = {"Eu qquero encontrar"};
    char b[20] = {"quero"};

    printf("%s", ft_strnstr(a, b, 20));
} */
