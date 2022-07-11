/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:20:43 by myoshika          #+#    #+#             */
/*   Updated: 2022/07/11 21:35:17 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	char	*c_haystack;

	needle_len = ft_strlen(needle);
	c_haystack = (char *)haystack;
//	if (*needle == '\0')
//		return ((char *)haystack);
	if (len < needle_len)
		return (NULL);
	len -= needle_len - 1;
	while (*c_haystack != '\0' && len--)
	{
		if (!ft_strncmp(c_haystack, needle, needle_len))
			return (c_haystack);
		c_haystack++;
	}
	return (NULL);
}
