/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:20:28 by myoshika          #+#    #+#             */
/*   Updated: 2022/06/15 16:10:18 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst > src)
	{
		dst += len;
		src += len;
		while (len > 0)
		{
			*(char *)(dst + len) = *(char *)(src + len);
			len--;
		}
	}
	else
	{
		while (i <= len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	return (dst);
}
