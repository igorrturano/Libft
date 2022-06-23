/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igturano <igorturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 21:35:37 by igturano          #+#    #+#             */
/*   Updated: 2022/06/11 21:32:14 by igturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*str;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	ptr = (unsigned char *) dest;
	str = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		ptr[i] = str[i];
		i++;
	}
	return (dest);
}
/* #include <stdio.h>
int main(void)
{
    char chr[3] = {"aaa"};
    char *dste = {"a"};
    ft_memcpy(dste, chr, 3);

    printf("%s", dste);
} */
