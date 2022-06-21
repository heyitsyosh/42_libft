/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:20:16 by myoshika          #+#    #+#             */
/*   Updated: 2022/06/22 02:33:21 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	if (count != 0 && (size_t) - 1 / count < size)
		return (NULL);
	ret = malloc(size * count);
	if (ret != NULL)
		ft_bzero(ret, size * count);
	return (ret);
}
