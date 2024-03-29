/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:44:36 by ngale             #+#    #+#             */
/*   Updated: 2019/11/16 18:44:38 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "libft.h"
# define TETRO_SIZE 4

typedef struct	s_tetriminos
{
	char		**shape;
	char		letter;
	int			width;
	int			height;
}				t_tetriminos;

t_tetriminos g_tl[26];
int				g_ms;

#endif
