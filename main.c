/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeph <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:50:31 by zeph              #+#    #+#             */
/*   Updated: 2024/09/01 20:45:34 by zeph             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"


int main()
{
	int nb, power,j;

	j = 1;
	while(j != 0)
	{
		printf("nombre a traiter :");
		scanf("%d",&nb);
		printf("puissance :");
		scanf("%d",&power);

		printf("FONCTION ITERATIVE:\n%d a la puissance %d = %d\n",nb, power,ft_iterative_power(nb, power));
		printf("FONCTION RECURSIVE:\n%d a la puissance %d = %d",nb, power,ft_recursive_power(nb, power));
		printf("\ncontinue ?? 0 for stop\n");
		scanf("%d",&j);

	}


	return 0;
}



