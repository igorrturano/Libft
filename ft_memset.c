/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igturano <igorturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 20:52:22 by igturano          #+#    #+#             */
/*   Updated: 2022/06/11 21:06:25 by igturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str[] = "hello world\0";
// 	char *ans = str;
// 	ft_memset(&ans[5], ';', 3);
// 	printf("%s\n", str);
// }
