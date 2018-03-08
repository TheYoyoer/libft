/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsilva <rsilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 16:03:04 by rsilva            #+#    #+#             */
/*   Updated: 2018/02/27 16:08:30 by rsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		c;
	char	*ret;

	i = 0;
	c = 0;
	while (src[i] != '\0')
		i++;
	ret = ((char*)malloc(sizeof(*src) * (i + 1)));
	if (!ret)
		return (0);
	while (c < i)
	{
		ret[c] = src[c];
		c++;
	}
	ret[c] = '\0';
	return (ret);
}
