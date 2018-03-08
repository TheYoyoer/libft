/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsilva <rsilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 12:15:07 by rsilva            #+#    #+#             */
/*   Updated: 2018/03/02 12:15:50 by rsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*alloc;
	size_t	i;

	i = 0;
	alloc = malloc((sizeof(size)) * size);
	if (!alloc)
		return (NULL);
	while (i < size)
	{
		((unsigned char *)alloc)[i] = '\0';
		i++;
	}
	return (alloc);
}
