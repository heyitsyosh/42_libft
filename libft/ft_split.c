/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:29:05 by myoshika          #+#    #+#             */
/*   Updated: 2022/07/11 21:41:12 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	malloc_size(const char *s, char c)
{
	size_t	size;

	size = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			size++;
			while (*s != '\0' && *s != c)
				s++;
		}
		else
			s++;
	}
	return (size);
}

static void	function(const char *s, char c, char **split, int i)
{
	size_t	len;

	while (*s != '\0')
	{
		if (*s != c)
		{
			len = 0;
			while (*s != '\0' && *s != c)
			{
				len++;
				s++;
			}
			*(split + i) = ft_substr(s - len, 0, len);
			i++;
		}
		else
			s++;
	}
	*(split + i) = 0;
}

char	**ft_split(const char *s, char c)
{
	char	**split;

	if (s == NULL)
		return (NULL);
	split = malloc(sizeof(char *) * (malloc_size(s, c) + 1));
	if (split == NULL)
		return (NULL);
	function(s, c, split, 0);
	return (split);
}
