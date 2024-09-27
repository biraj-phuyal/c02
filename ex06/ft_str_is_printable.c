/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:53:00 by bphuyal           #+#    #+#             */
/*   Updated: 2024/09/26 22:37:06 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_str_is_printable(char *str)
{
        if (!*str)
		return (1);

	while (*str)
        {
		if (!(*str >= 32 && *str <= 126))
		{
	       		return (0);
                }
		str++;
        }
        return (1);
}

int main()
{
        char b[]= "HelloWorld";
        int i = ft_str_is_printable(b);
        printf("%d", i);
}

