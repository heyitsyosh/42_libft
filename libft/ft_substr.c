/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:29:27 by myoshika          #+#    #+#             */
/*   Updated: 2022/07/13 23:54:58 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		s_len;
	char	*sub;

	// if (s == NULL)
	// 	return (NULL);
	s_len = ft_strlen(s);
	if (0 > s_len - (int)start - 1)
		return (ft_strdup(""));
	if (len + start > (size_t)s_len)
		sub = (char *)malloc(ft_strlen((char *)s) - start + 1);
	else
		sub = (char *)malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
