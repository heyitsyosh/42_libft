/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:29:20 by myoshika          #+#    #+#             */
/*   Updated: 2022/07/11 01:12:15 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	ret = ft_strdup(s);
	i = 0;
	if (ret == NULL || f == NULL)
		return (NULL);
	while (*(s + i) != '\0')
	{
		*(ret + i) = f(i, *(s + i));
		i++;
	}
	return (ret);
}