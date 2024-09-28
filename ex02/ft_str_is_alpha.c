/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:07:56 by bphuyal           #+#    #+#             */
/*   Updated: 2024/09/28 20:47:59 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
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
/*
int main()
{
	char b[]= "good1";
	int i = ft_str_is_alpha(b);
	printf("%d", i);
}
*/
