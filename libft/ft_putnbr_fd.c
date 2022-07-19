/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:29:00 by myoshika          #+#    #+#             */
/*   Updated: 2022/07/19 13:47:00 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int				div;
	int				tmp;
	unsigned int	buf;

	div = 1;
	if (n < 0)
	{
		write(fd, "-", 1);
		buf = -n;
	}
	buf = n;
	while (buf / 10 >= (unsigned int)div)
		div *= 10;
	while (div != 0)
	{
		tmp = (buf / div) + '0';
		write(fd, &tmp, 1);
		buf %= div;
		div /= 10;
	}
}
