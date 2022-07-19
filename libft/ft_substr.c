/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:29:27 by myoshika          #+#    #+#             */
/*   Updated: 2022/07/19 14:07:06 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sub_len;
	char	*sub;

	if (s == NULL || *s == '\0')
		return (NULL);
	sub_len = ft_strnlen(s + start, len);
	if (sub_len == 0 || ft_strlen(s) <= start)
		return (ft_strdup(""));
	sub = (char *)malloc(sub_len + 1);
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, sub_len + 1);
	return (sub);
}
