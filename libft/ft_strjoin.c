/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:29:14 by myoshika          #+#    #+#             */
/*   Updated: 2022/06/30 23:32:22 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	int		s1_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	joined = (char *)malloc(s1_len + ft_strlen(s2) + 1);
	if (joined == NULL)
		return (NULL);
	ft_strlcpy(joined, s1, s1_len + 1);
	ft_strlcpy(joined + s1_len, s2, ft_strlen(s2) + 1);
	return (joined);
}
