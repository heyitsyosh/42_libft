/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:29:27 by myoshika          #+#    #+#             */
/*   Updated: 2022/06/21 23:55:36 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		s_len;
	char	*sub;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (len > s_len - start - 1)
		return (NULL);
	sub = (char *)malloc(len + 1);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}


// abcde\0
//   2
//   index 2, len 4;