/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igturano <igorturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 20:56:48 by igturano          #+#    #+#             */
/*   Updated: 2022/06/11 21:08:01 by igturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (i < n)
		str[i++] = 0;
}

// #include <stdio.h>
// #include <unistd.h>
// int main(void)
// {
//     char s[] = "hell world";
//     char *str = s;

//     ft_bzero(&str[2], 2);
//     // printf("%s\n", str);

//     int i = 0;

//     write(1, &str[i], 10);
//     i++;
// }
