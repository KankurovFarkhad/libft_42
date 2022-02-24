/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 08:31:14 by ohakon            #+#    #+#             */
/*   Updated: 2022/02/24 08:31:16 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp_s;

	tmp_s = (char *)s;
	while (*tmp_s)
		tmp_s++;
	while (tmp_s >= s)
	{
		if (*tmp_s == c)
			return (tmp_s);
		tmp_s--;
	}
	return ((void *)0);
}
