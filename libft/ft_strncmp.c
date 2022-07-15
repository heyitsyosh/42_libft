/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:20:40 by myoshika          #+#    #+#             */
/*   Updated: 2022/07/16 01:28:15 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*uc_s1;
	unsigned char	*uc_s2;

	uc_s1 = (unsigned char *)s1;
	uc_s2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (*(uc_s1 + i) && *(uc_s2 + i) && i < n)
	{
		if (*(uc_s1 + i) != *(uc_s2 + i))
			break ;
		i++;
	}
	if (i == n)
		return (0);
	return (*(uc_s1 + i) - *(uc_s2 + i));
}
