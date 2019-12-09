/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_memory.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:41:07 by ngale             #+#    #+#             */
/*   Updated: 2019/11/16 18:41:13 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "take_tetrimino.h"

void		delete_tetro_list(void)
{
	int		i;
	int		j;

	i = -1;
	while ((g_ms == 26) ? (++i < g_ms) : (++i <= g_ms))
	{
		j = -1;
		while (g_tl[i].shape[++j] != NULL)
			ft_memdel((void **)&g_tl[i].shape[j]);
		ft_memdel((void **)&g_tl[i].shape);
	}
	ft_putendl("error");
	exit(0);
}

void		delete_2d(char ***arr, int h)
{
	int i;

	i = -1;
	if (arr)
	{
		while (++i < h)
			ft_memdel((void **)&(*arr)[i]);
		ft_memdel((void **)&(*arr));
	}
}
