/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manejador.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jroldan- <jroldan-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:36:27 by Jroldan-          #+#    #+#             */
/*   Updated: 2023/03/08 17:57:28 by Jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void	manejador(int sign);
int	g_cont = 0;

int	main(int argc, char **argv)
{
	signal(SIGINT, manejador);
	printf("\nEjemplo de Signal Juan");
	while(g_cont<5);//podremos recibir hasta 5 cntrl + c (SIGINT)
}

void	manejador(int sign)
{
	printf("\n recibí la señan SIGNINT %i", g_cont);
	g_cont++;
	signal(SIGINT, manejador);
}
// SIGINT -> las teclas cntrl + c 