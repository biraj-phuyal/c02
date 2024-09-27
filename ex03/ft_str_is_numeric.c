/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:23:08 by bphuyal           #+#    #+#             */
/*   Updated: 2024/09/26 20:44:38 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
        while (*str)
        {
                if (!(*str > '0' && *str < '9'))
                {
                        return (0);
                }
                else
                {
                        str++;
                }

        }
        return (1);
}

int main()
{
        char b[]= "123124o";
        int i = ft_str_is_numeric(b);
        printf("%d", i);
}
