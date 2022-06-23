/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igturano <igorturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:41:52 by igturano          #+#    #+#             */
/*   Updated: 2022/06/14 17:41:55 by igturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*sub_str;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	sub_str = (char *) malloc ((len + 1) * sizeof (char));
	if (sub_str == NULL)
		return (NULL);
	i = 0;
	while (s[start] != 0 && i <= len)
	{
		sub_str[i] = s[start];
		i++;
		start++;
	}
	sub_str[len] = '\0';
	return (sub_str);
}

/* #include <stdio.h>
int main(void)
{
	char a[] = "i just want this part #############";
	char *b = ft_substr(a, 5, 20);
	printf("%s\n", b);
}
 */
