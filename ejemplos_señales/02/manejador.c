/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manejador.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jroldan- <jroldan-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:59:02 by Jroldan-          #+#    #+#             */
/*   Updated: 2023/03/08 18:55:56 by Jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <signal.h>
#include <sys/types.h>

void	manejador(int signum);
void	manejador_1( int signum);

int		bandera = 1;
int		pid;
int		status;
char	*parametro;

int	main(int argc, char **argv)
{
	parametro = argv[1];
	signal(SIGUSR1, manejador_1);
	signal(SIGUSR2, manejador_1);
}