/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:29:05 by myoshika          #+#    #+#             */
/*   Updated: 2022/07/03 20:56:30 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// static size_t	malloc_size(const char *s, char c)
// {
// 	size_t	size;

// 	size = 0;
// 	while (*s != '\0')
// 	{
// 		if (*s != c)
// 		{
// 			size++;
// 			while (*s && *s != c)
// 				s++;
// 		}
// 		else
// 			s++;
// 	}
// 	return (size);
// }

// char	**ft_split(const char *s, char c)
// {
// 	char	**split;
// 	size_t	i;
// 	size_t	len;

// 	if (s == NULL)
// 		return (NULL);
// 	i = 0;
// 	split = malloc(sizeof(char *) * (malloc_size(s, c) + 1));
// 	if (split == NULL)
// 		return (NULL);
// 	while (*s != '\0')
// 	{
// 		if (*s != c)
// 		{
// 			len = 0;
// 			while (*s && *s != c && len++)
// 				s++;
// 			*(split + i + 1) = ft_substr(s - len, 0, len);
// 		}
// 		else
// 			s++;
// 	}
// 	*(split + i) = 0;
// 	return (split);
// }
