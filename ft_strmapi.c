/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 08:30:56 by ohakon            #+#    #+#             */
/*   Updated: 2022/02/24 08:30:57 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*tmp;
	size_t	len;
	size_t	i;

	if (s == ((void *)0) || !f)
		return ((void *)0);
	len = ft_strlen(s);
	tmp = (char *)malloc((len + 1) * sizeof(char));
	if (!tmp)
		return ((void *)0);
	i = -1;
	while (++i < len)
		*(tmp + i) = (*f)(i, *(s + i));
	*(tmp + i) = '\0';
	return (tmp);
}
