/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igturano <igorturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:08:00 by igturano          #+#    #+#             */
/*   Updated: 2022/06/22 21:28:55 by igturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_counter(long int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*itoa_conditions(char *str, int i, long int nb)
{
	if (nb == 0)
	{
		str[0] = '0';
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	nb;
	char		*itoa_res;

	nb = n;
	i = digit_counter(nb);
	str = malloc(i + 1 * sizeof(char));
	if (!(str))
		return (0);
	str[i--] = '\0';
	itoa_res = itoa_conditions(str, i, nb);
	return (itoa_res);
}

//#include <stdio.h>
//int main(void)
//{
//    long int i = -2147483648;
//    printf("%s\n", ft_itoa(i));
//}
