/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:22:56 by clora-ro          #+#    #+#             */
/*   Updated: 2021/11/16 14:10:56 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dest;

	i = 0;
	j = 0;
	len_dest = ft_strlen(dest);
	if (!size)
		return (len_dest);
	while (dest[i] && i < size)
		i++;
	while (src[j] && i < size -1)
		dest[i++] = src[j++];
	if (size && size >= len_dest)
		dest[i] = '\0';
	if (size < len_dest)
		return (ft_strlen((char *)src) + size);
	else
		return (ft_strlen((char *)src) + len_dest);
}
