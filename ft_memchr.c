/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igturano <igorturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 17:41:43 by igturano          #+#    #+#             */
/*   Updated: 2022/06/11 20:09:04 by igturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
			return (((void *) s) + i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
    //MEMCHR
      char hello[20] = "Hello World!";
    char c = 'W';
    printf("resulting string of memchr(\"Hello World!\", 'e', 3):\n%s\n",
	ft_memchr(hello, c, 10));

} */
