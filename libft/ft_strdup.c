/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:20:32 by myoshika          #+#    #+#             */
/*   Updated: 2022/06/21 22:33:06 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;

	dup = (char *)malloc(ft_strlen(s1) + 1);
	if (dup == NULL)
		return (NULL);
	while (*s1 != '\0')
		*dup++ = *s1++;
	*dup = '\0';
	return (dup - ft_strlen(s1));
}


// char	*ft_strdup(const char *s1)
// {
// 	char	*dup;

// 	dup = (char *)malloc(ft_strlen(s1) + 1);
// 	if (dup == NULL)
// 		return (NULL);
// 	ft_strlcpy(dup, s1, ft_strlen(s1) + 1);
// 	return (dup);
// }
