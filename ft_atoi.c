/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igturano <igorturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 20:33:35 by igturano          #+#    #+#             */
/*   Updated: 2022/06/20 20:59:50 by igturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	isneg;

	i = 0;
	res = 0;
	isneg = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		isneg = 1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] != 0 && (nptr[i] >= 48 && nptr[i] <= 57))
		res = (res * 10) + (nptr[i++] - 48);
	if (isneg == 1)
		res = -res;
	return (res);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	char s[] = "  --47";
// 	printf(" === Função Criada ===\n");
//     printf("%d\n", ft_atoi(s));
// 	printf(" === Função Original ===\n");
//     printf("%d\n", atoi(s));
//     return 0;
// }
