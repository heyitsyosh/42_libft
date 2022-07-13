/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:20:35 by myoshika          #+#    #+#             */
/*   Updated: 2022/07/14 01:57:37 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	dst += dst_len;	
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dst_len >= dstsize)
		return (dstsize + ft_strlen(src));
	ft_strlcpy(dst, src, dstsize - dst_len);
	return (dst_len + ft_strlen(src));
}
