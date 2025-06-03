/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzeybek <vzeybek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:12:21 by vzeybek           #+#    #+#             */
/*   Updated: 2025/06/03 13:53:05 by vzeybek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1unsigned;
	unsigned char	*s2unsigned;
	size_t			i;

	s1unsigned = (unsigned char *)s1;
	s2unsigned = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1unsigned[i] == '\0' && s2unsigned[i] == '\0')
			return (0);
		else if (!s1unsigned[i] && s2unsigned[i])
			return (-s2unsigned[i]);
		else if (!s2unsigned[i] && s1unsigned[i])
			return (s1unsigned[i]);
		else if (s1unsigned[i] != s2unsigned[i])
			return (s1unsigned[i] - s2unsigned[i]);
		i++;
	}
	return (0);
}
