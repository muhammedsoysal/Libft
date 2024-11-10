/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musoysal <musoysal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:36:24 by musoysal          #+#    #+#             */
/*   Updated: 2024/10/19 13:40:42 by musoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[j + i] == needle[j] && (i + j) < len)
		{
			if (j + 1 == needle_len)
			{
				return ((char *)&haystack[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
