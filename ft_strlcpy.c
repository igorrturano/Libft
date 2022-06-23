/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igturano <igorturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 21:12:50 by igturano          #+#    #+#             */
/*   Updated: 2022/06/11 21:17:57 by igturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;

	len_src = 0;
	while (src[len_src])
		len_src++;
	i = 0;
	if (dstsize == 0)
		return (len_src);
	if (dstsize > 0)
	{
		while ((src[i]) && (i < dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = 0;
	return (len_src);
}
/*
#include <stdio.h>
int main(void)
{
    char a[]= {"aaabb"};
    char b[] = {};

    ft_strlcpy(b, a, 5);
    printf("%s", b);
} */
