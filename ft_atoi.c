/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eheike <eheike@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 14:11:17 by eheike            #+#    #+#             */
/*   Updated: 2022/07/12 16:43:09 by eheike           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

static int	figure(const char *str, int start, int end)
{
	int	res;

	res = 0;
	while (end >= start)
	{
		res *= 10;
		res += (str[start] - '0');
		start++;
	}
	return (res);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	a;

	res = 0;
	i = 0;
	while (str[i] && (str[i] == 32 || str[i] == 48))
		i++;
	a = i;
	while (str[i])
		i++;
	if ((i - a) > 10)
		return (-1);
	res = figure(str, a, i - 1);
	return (res);
}
