/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zeph <Zeph@student.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:07:37 by Zeph              #+#    #+#             */
/*   Updated: 2023/05/27 12:07:37 by Zeph             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (nb > 2)
	{
		fact = fact * (nb - 1);
		nb --;
	}
	return (fact);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	while (power)
	{
		result = result * nb;
		power --;
	}
	return (result);
}

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 || power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	return (nb * ft_recursive_power(nb, (power - 1)));
}
