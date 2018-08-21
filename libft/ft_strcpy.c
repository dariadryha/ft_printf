/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 16:14:45 by ddryha            #+#    #+#             */
/*   Updated: 2017/10/30 16:14:46 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strcpy(char *dst, const char *src)
{
	int k;

	k = 0;
	while (src[k] != '\0')
	{
		dst[k] = src[k];
		k++;
	}
	dst[k] = '\0';
	return (dst);
}
