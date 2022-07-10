/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:29:25 by myoshika          #+#    #+#             */
/*   Updated: 2022/06/30 23:51:13 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	if (c == 32 || (c <= 13 && c >= 9))
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		s1_len;
	int		front;
	int		back;
	int		i;

	front = 0;
	back = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	i = s1_len;
	while ((is_space(*s1 + front) || ft_strchr(set, *(s1 + front)))
		&& *(s1 + front))
		front++;
	while (i-- >= 0 && (is_space(*s1 + i) || ft_strchr(set, *(s1 + i))))
		back++;
	if (front + back > s1_len)
		return (ft_strdup(""));
	ret = (char *)malloc(s1_len - back - front + 1);
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, s1 + front, s1_len - front - back + 1);
	return (ret);
}
