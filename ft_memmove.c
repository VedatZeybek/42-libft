/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzeybek <vzeybek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:15:48 by vzeybek           #+#    #+#             */
/*   Updated: 2025/06/03 13:34:18 by vzeybek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dest_u;
	char	*src_u;

	dest_u = (char *)(dst);
	src_u = (char *)(src);
	if (len == 0 || dest_u == src_u)
		return (dst);
	i = len - 1;
	if (dest_u > src_u)
	{
		while (i > 0)
		{
			dest_u[i] = src_u[i];
			i--;
		}
		if (i == 0)
			dest_u[i] = src_u[i];
	}
	else
	{
		ft_memcpy(dest_u, src_u, len);
	}
	return (dst);
}
