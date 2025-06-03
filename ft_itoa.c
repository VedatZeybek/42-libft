/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzeybek <vzeybek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:41:10 by vzeybek           #+#    #+#             */
/*   Updated: 2025/06/03 19:21:31 by vzeybek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int i)
{
	int		len;
	long	x;

	x = i;
	len = 0;
	if (x < 0)
	{
		len++;
		x = -x;
	}
	while (x / 10 != 0)
	{
		len++;
		x = x / 10;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		is_negative;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_intlen(n) - 1;
	str = malloc(ft_intlen(n) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str[ft_intlen(n)] = '\0';
	is_negative = 0;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		is_negative = 1;
	}
	while (i >= is_negative)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (str);
}
