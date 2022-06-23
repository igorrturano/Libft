/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igturano <igorturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 03:44:00 by coder             #+#    #+#             */
/*   Updated: 2022/06/11 21:20:22 by igturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1 && s1[i])
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
// 	unsigned int  n = 3;

// 	ft_strncmp(ps1, ps2, n);
// 	printf("Tem que retornar %i: %i\n", (strncmp(ps1, ps2, n)),
// 		ft_strncmp(ps1, ps2, n));
// }
