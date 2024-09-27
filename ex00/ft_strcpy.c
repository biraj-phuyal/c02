/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:57:02 by bphuyal           #+#    #+#             */
/*   Updated: 2024/09/27 12:55:09 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char *ori;

        ori = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ori);
}
/*
int	main()
{
	char src[] = "blah blah";
	char dest[15];

	ft_strcpy(dest, src);
	printf("Copied string = %s\n", dest);
}
*/
