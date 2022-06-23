/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igturano <igorturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:22:25 by igturano          #+#    #+#             */
/*   Updated: 2022/06/11 20:09:12 by igturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	if (n == 0)
		return (0);
	n--;
	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (i < n && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

/* #include <stdio.h>
int main(void)
{
    char a[10] = {"Opa"};
    char b[10] = {"Opb"};

    printf("%i", ft_memcmp(a, b, 3));

} */
