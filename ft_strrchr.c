/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musoysal <musoysal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:01:22 by musoysal          #+#    #+#             */
/*   Updated: 2024/10/25 18:14:38 by musoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = (int)ft_strlen(s);
	while (s_len >= 0)
	{
		if (s[s_len] == (char)c)
		{
			s += s_len;
			return ((char *)s);
		}
		s_len--;
	}
	return (NULL);
}
