/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 08:56:24 by alfertah          #+#    #+#             */
/*   Updated: 2021/10/05 11:31:15 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != ('\0'))
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*int main(){
	char *s1 = "ali";
	ft_putstr(s1);

}*/