/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:07:56 by bphuyal           #+#    #+#             */
/*   Updated: 2024/09/26 19:08:24 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z')  || (*str >= 'A' && *str <= 'Z')))
		{
			return (1);
		}
		else
		{
			str++;
		}
		
	}
	return (0);
}

int main()
{
	char b[]= "good";
	int i = ft_str_is_alpha(b);
	printf("%d", i);
}
