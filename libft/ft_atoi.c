/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:20:06 by myoshika          #+#    #+#             */
/*   Updated: 2022/06/24 01:54:08 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char c)
{
	if (c == 32 || (c <= 13 && c >= 9))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	nbr;

	sign = 1;
	nbr = 0;
	i = 0;
	while (is_space(*(str + i)))
		i++;
	if ((*(str + i) == '+' || *(str + i) == '-') && *(str + i))
	{
		if (*(str + i) == '-')
			sign = -1;
		i++;
	}
	while (*(str + i) && ((*(str + i) >= '0') && (*(str + i) <= '9')))
	{
		if (nbr > INT_MAX / 10
			|| (sign == 1 && (nbr * 10) + sign * (*(str + i) - '0') < 0))
			return (-1);
		else if (nbr < INT_MIN / 10
			|| (sign == -1 && (nbr * 10) + sign * (*(str + i) - '0') > 0))
			return (0);
		nbr = (nbr * 10) + sign * (*(str + i) - '0');
		i++;
	}
	return ((int)nbr);
}
