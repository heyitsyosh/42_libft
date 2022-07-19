/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:29:25 by myoshika          #+#    #+#             */
/*   Updated: 2022/07/17 18:12:23 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	find_front_back(int s1_len, int direction, char const *s1, char const *set)
{
	int	ret;

	ret = 0;
	while (s1_len-- && ft_strchr(set, *(s1 + ret)))
		ret += 1;
	return ((size_t)ret);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	s1_len;
	size_t	front;
	size_t	back;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL || *set == '\0')
		return (ft_strdup(s1));
	s1_len = ft_strlen(s1);
	front = find_front_back(s1_len, 1, s1, set);
	back = find_front_back(s1_len, -1, s1 + s1_len - 1, set);
	if ((size_t)(front + back) > s1_len)
		return (ft_strdup(""));
	ret = (char *)malloc(s1_len - front - back + 1);
	if (ret != NULL)
		ft_strlcpy(ret, s1 + front, s1_len - front - back + 1);
	return (ret);
}
