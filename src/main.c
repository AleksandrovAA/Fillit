/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:42:24 by ngale             #+#    #+#             */
/*   Updated: 2019/11/19 17:23:50 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve.h"
#include "take_tetrimino.h"

int		main(int argc, char *argv[])
{
	int fd;

	if (argc)
	{
		fd = open(argv[1], O_RDONLY);
		parse_file(fd);
		search_solve(g_ms);
		close(fd);
		return (0);
	}
}
