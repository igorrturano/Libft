/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igturano <igorturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 20:03:31 by igturano          #+#    #+#             */
/*   Updated: 2022/06/11 21:31:37 by igturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*str;
	size_t			i;

	if (!dst && !src && len > 0)
		return (NULL);
	ptr = (unsigned char *) dst;
	str = (unsigned char *) src;
	if (dst > src)
	{
		while (len--)
			ptr[len] = str[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			ptr[i] = str[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>
int main(void)
{
    char l[] = {"Hello"};
    char dest2[] = {};

    ft_memmove(dest2, l, 6);
    printf("%s\n", dest2);
} */
