/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musoysal <musoysal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:27:47 by musoysal          #+#    #+#             */
/*   Updated: 2024/10/13 15:39:45 by musoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source;

	if (!src && !dst)
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	dest = (char *)dst;
	source = (const char *)src;
	while (len--)
		dest[len] = source[len];
	return (dest);
}
