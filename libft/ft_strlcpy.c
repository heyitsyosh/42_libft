/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:20:37 by myoshika          #+#    #+#             */
/*   Updated: 2022/06/19 01:09:18 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < dstsize - 1 && *(src + i) && dstsize != 0)
	{
		*(dst + i) = *(src + i);
		i++;
	}
	if (dstsize != 0)
		*(dst + i) = '\0';
	return (ft_strlen(src));
}
