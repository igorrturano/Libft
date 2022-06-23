/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igturano <igorturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:56:39 by coder             #+#    #+#             */
/*   Updated: 2022/06/14 19:01:40 by igturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char s1[] = "abcde";
// 	char *ps1 = s1;
// 	char s2[] = "abcdef";
// 	char *ps2 = s2;

// 	ft_strcmp(ps1, ps2);
// 	printf("Tem que retornar %i: %i\n", (strcmp(ps1, ps2)),
// 		ft_strcmp(ps1, ps2));
// }
