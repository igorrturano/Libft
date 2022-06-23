/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igturano <igorturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 21:15:36 by igturano          #+#    #+#             */
/*   Updated: 2022/06/11 19:46:20 by igturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (!(c >= '0' && c <= '9')
		&& !(c >= 'a' && c <= 'z')
		&& !(c >= 'A' && c <= 'Z'))
	{
		return (0);
	}
	return (1);
}

/* #include <stdio.h>
int main(void)
{
    int res = ft_isalnum('0');
    printf("%i\n", res);
} */