/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzeybek <vzeybek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:12:37 by vzeybek           #+#    #+#             */
/*   Updated: 2025/06/04 03:00:17 by vzeybek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	control(int s, long long res, int c)
{
	if (c >= 20 && s == -1)
		return (0);
	else if (c >= 20)
		return (-1);
	return (s * res);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	result;
	int			c;

	result = 0;
	i = 0;
	c = 0;
	if (str[0] == '\0')
		return (result);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= 48 && str[i] <= 57 && str[i])
	{
		result = (result * 10) + (str[i] - '0');
		if (result != 0)
			c++;
		i++;
	}
	return (control(sign, result, c));
}
