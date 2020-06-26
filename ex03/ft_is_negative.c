/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmutshar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 14:07:55 by fmutshar          #+#    #+#             */
/*   Updated: 2020/06/26 13:01:59 by fmutshar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_is_negative(int n)
{
    if ( n >=0)
	{
		ft_putchar('P');
	}
		else 
		{
          ft_putchar('N');
	}
/*
}
int main ()
{
	ft_is_negative(-2);
	}
	*/
