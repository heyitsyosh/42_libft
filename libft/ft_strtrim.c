/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:29:25 by myoshika          #+#    #+#             */
/*   Updated: 2022/07/16 07:19:02 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	find_front_back(int s1_len, int direction, char const *s1, char const *set)
{
	int	ret;

	ret = 0;
	while (s1_len-- && ft_strchr(set, *(s1 + ret)))
		ret += direction;
	return (ret);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		s1_len;
	int		front;
	int		back;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL || *set == '\0')
		return (ft_strdup(s1));
	s1_len = ft_strlen(s1);
	front = find_front_back(s1_len, 1, s1, set);
	back = find_front_back(s1_len, -1, s1 + s1_len - 1, set);
	if (front - back > s1_len || *set == '\0')
		return (ft_strdup(""));
	ret = (char *)malloc(s1_len - front + back + 1);
	if (ret != NULL)
		ft_strlcpy(ret, s1 + front, s1_len - front + back + 1);
	return (ret);
}
