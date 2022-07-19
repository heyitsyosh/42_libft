/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:29:25 by myoshika          #+#    #+#             */
/*   Updated: 2022/07/19 13:42:43 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	s(int dir, char const *s1, char const *set)
{
	size_t	ret;
	size_t s1_len;

	s1_len = ft_strlen(s1);
	ret = 0;
	while (dir == 1 && s1_len-- && ft_strchr(set, *(s1 + ret)))
		ret++;
	while (dir == -1 && s1_len-- && ft_strchr(set, *(s1 - ret)))
		ret++;
	return (ret);
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
	front = search(1, s1, set);
	back = search(-1, s1 + s1_len - 1, set);
	if (front + back < front || front + back > s1_len)
		return (ft_strdup(""));
	ret = (char *)malloc(s1_len - front - back + 1);
	if (ret != NULL)
		ft_strlcpy(ret, s1 + front, s1_len - front - back + 1);
	return (ret);
}
