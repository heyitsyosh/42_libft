/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoshika <myoshika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:20:06 by myoshika          #+#    #+#             */
/*   Updated: 2022/07/14 01:13:23 by myoshika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	if (c == 32 || (c <= 13 && c >= 9))
		return (1);
	return (0);
}

static long	long	make_l(const char *str, int i, int sign, long long num)
{
	while (*(str + i) && ((*(str + i) >= '0') && (*(str + i) <= '9')))
	{
		if (sign == 1 && ((num > LONG_MAX / 10))
				//|| (num == LONG_MAX / 10 && *(str + i) > LONG_MAX % 10)))
			return (LONG_MAX);
		else if (sign == -1 && ((num < LONG_MIN / 10))
				//|| (num == LONG_MIN / 10 && *(str + i) > LONG_MIN % 10)))
			return (LONG_MIN);
		num = (num * 10) + sign * (*(str + i) - '0');
		i++;
	}
	return (num);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	num;

	sign = 1;
	i = 0;
	while (is_space(*(str + i)))
		i++;
	if ((*(str + i) == '+' || *(str + i) == '-') && *(str + i))
	{
		if (*(str + i) == '-')
			sign = -1;
		i++;
	}
	num = make_l(str, i, sign, 0);
	return ((int)num);
}
