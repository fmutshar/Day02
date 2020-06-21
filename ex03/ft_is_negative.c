/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmutshar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 14:07:55 by fmutshar          #+#    #+#             */
/*   Updated: 2020/06/21 14:08:08 by fmutshar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_is_negative(void)
{
    int number;
    printf("Enter any Postive number or a Negative number: ");
    scanf("%d", &number);

    if  (number >= 0) {
        printf("%d\nP\n",number);
    }
    else {
        printf("%d\nN\n",number);
    }
}
