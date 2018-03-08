/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsilva <rsilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 20:24:54 by rsilva            #+#    #+#             */
/*   Updated: 2018/03/03 20:25:33 by rsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	jlen;
	char	*join;

	i = 0;
	if (s1 && s2)
	{
		jlen = ft_strlen(s1) + ft_strlen(s2);
		join = malloc((sizeof(char)) * (jlen + 1));
		if (!join)
			return (NULL);
		while (i < ft_strlen(s1))
		{
			join[i] = s1[i];
			i++;
		}
		while (i < jlen)
		{
			join[i] = s2[i - ft_strlen(s1)];
			i++;
		}
		join[i] = '\0';
		return (join);
	}
	return (NULL);
}
