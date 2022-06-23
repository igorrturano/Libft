/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igturano <igorturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 21:27:07 by igturano          #+#    #+#             */
/*   Updated: 2022/06/11 21:45:23 by igturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	tot_size;

	tot_size = nmemb * size;
	ptr = (void *) malloc (tot_size);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, tot_size);
	return (ptr);
}
