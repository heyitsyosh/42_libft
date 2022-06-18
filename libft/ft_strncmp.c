/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:20:40 by myoshika          #+#    #+#             */
/*   Updated: 2022/06/18 23:03:34 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*(s1 + i) && *(s2 + i) && i < n)
	{
		if (*(s1 + i) != *(s2 + i))
			break ;
		i++;
	}
	if (i == n)
		return (0);
	return (*(s1 + i) - *(s2 + i));
}
