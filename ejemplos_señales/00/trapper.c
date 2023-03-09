/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trapper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jroldan- <jroldan-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:47:50 by Jroldan-          #+#    #+#             */
/*   Updated: 2023/03/08 13:56:42 by Jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Ejemplo 00 tratamiento de señales
#include <stdio.h>
#include <signal.h>	
#include <unistd.h>

void	trapper(int sig);

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < 64)
	{
		signal(i, trapper);
		i++;
	}
	printf("ºn El identificador del proceso PID: %d",getpid());
	pause();
	printf("Continue.......");
	return (0);
}

void	trapper(int sig)
{
	signal (sig, trapper);
	printf ("\n La señal ha sido recibida %d\n",sig);
}

// pause no recibe ningun parametro y retorna -1 cuando la señal ha terminado
// signal recibe dos parametros: numero de señal que queremos capturar y un puntero 
// puntero a la funcionque tratara la función.