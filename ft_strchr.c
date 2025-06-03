/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzeybek <vzeybek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:09:47 by vzeybek           #+#    #+#             */
/*   Updated: 2025/06/03 12:10:35 by vzeybek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strchr(const char *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	if (c == '\0')
		return (str);
	return (NULL);
}
