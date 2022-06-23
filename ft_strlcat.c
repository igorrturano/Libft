/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igturano <igorturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 22:38:06 by igturano          #+#    #+#             */
/*   Updated: 2022/06/11 21:11:11 by igturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	size_dest;
	unsigned int	size_src;
	unsigned int	i;

	size_dest = ft_strlen(dst);
	size_src = ft_strlen(src);
	if (size == 0)
		return (size_src);
	i = 0;
	while ((size_dest + i < size - 1) && (src[i] != 0))
	{
		dst[size_dest + i] = src[i];
		i++;
	}
	if (size_dest > size)
		return (size + size_src);
	dst[size_dest + i] = '\0';
	return (size_dest + size_src);
}

/* #include <stdio.h>
int main(void) {
  char name[11] = "abcd";
  char name1[11] = "abcd";

  int size = ft_strlcat(name, "abc", 3);
  printf("%s => size: %d\n", name, size);
} */
