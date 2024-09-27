/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:53:55 by bphuyal           #+#    #+#             */
/*   Updated: 2024/09/26 17:04:20 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char *ori_dest = dest;

	i = 0;
	while (i != n)
	{
		if(*src)
		{
			*dest = *src;
			src++;
		}
		else
		{
			*dest = '\0';
		}
		dest++;
		i++;
	}
	return (ori_dest);
}
/*
int main() {
    char src[] = "Hello, world!";
    char dest[20]; 
    ft_strncpy(dest, src, 5);
    printf("%s", dest);
    return 0;
}
*/
