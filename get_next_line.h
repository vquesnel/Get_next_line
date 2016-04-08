/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 13:22:30 by vquesnel          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2016/04/08 14:32:14 by vquesnel         ###   ########.fr       */
=======
/*   Updated: 2016/03/29 16:23:38 by vquesnel         ###   ########.fr       */
>>>>>>> 0b1cbcd5e589be70ae193e06f1d70015d41b3fa3
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <sys/uio.h>
# include <fcntl.h>
# include <sys/types.h>
# define BUFF_SIZE 24
# define MAX_FILES 10240

int		get_next_line(int const fd, char **line);

#endif
