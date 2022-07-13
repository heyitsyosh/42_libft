/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:20:43 by myoshika          #+#    #+#             */
/*   Updated: 2022/07/14 02:14:37 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	if (len < needle_len)
		return (NULL);
	len -= needle_len - 1;
	while (*c_haystack != '\0' && len--)
	{
		if (!ft_strncmp(haystack, needle, needle_len))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
