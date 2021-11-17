/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 08:53:18 by clora-ro          #+#    #+#             */
/*   Updated: 2021/11/16 11:19:16 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	unsigned int	j;
	char			*str;

	j = 0;
	str = malloc((elementSize * elementCount) * sizeof(char));
	if (!str)
		return (NULL);
	while (j != (elementSize * elementCount))
	{
		str[j] = 0;
		j++;
	}
	return (str);
}
