/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 13:56:22 by vquesnel          #+#    #+#             */
/*   Updated: 2016/04/08 14:34:36 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	int		fd;
	char	*tmp;
	int		ret;

	tmp = NULL;
	(void)ac;
	fd = open(av[1], O_RDONLY);
	while ((ret = get_next_line(fd, &tmp)) > 0)
	{
		printf("%s|->%d\n", tmp, ret);
	}
	printf("|->%d\n", ret);
	close(fd);
	return (0);
}
