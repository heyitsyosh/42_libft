/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:20:25 by myoshika          #+#    #+#             */
/*   Updated: 2022/06/19 00:20:04 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*uc_dst;
	unsigned char	*uc_src;
	size_t			i;

	uc_dst = dst;
	uc_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*(uc_dst + i) = *(uc_src + i);
		i++;
	}
	return (dst);
}
