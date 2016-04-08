/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 13:56:22 by vquesnel          #+#    #+#             */
/*   Updated: 2016/04/08 14:48:52 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	int		fd;
	int		fd1;
	int		fd2;
	int		fd3;
	int		fd4;
	int		fd5;
	int		fd6;
	int		fd7;
	int		fd8;
	char	*tmp;
	int		ret;

	tmp = NULL;
	(void)ac;
	fd = open(av[1], O_RDONLY);
	fd1 = open(av[2], O_RDONLY);
	fd2 = open(av[3], O_RDONLY);
	fd3 = open(av[4], O_RDONLY);
	fd4 = open(av[5], O_RDONLY);
	fd5 = open(av[6], O_RDONLY);
	fd6 = open(av[7], O_RDONLY);
	fd7 = open(av[8], O_RDONLY);
	fd8 = open(av[9], O_RDONLY);
	if ((ret = get_next_line(fd, &tmp)) > 0)
	{
		printf("%s|->%d\n", tmp, ret);
	}
	if ((ret = get_next_line(fd1, &tmp)) > 0)
	{
		printf("%s|->%d\n", tmp, ret);
	}
	if ((ret = get_next_line(fd2, &tmp)) > 0)
	{
		printf("%s|->%d\n", tmp, ret);
	}
	if ((ret = get_next_line(fd3, &tmp)) > 0)
	{
		printf("%s|->%d\n", tmp, ret);
	}
	if ((ret = get_next_line(fd4, &tmp)) > 0)
	{
		printf("%s|->%d\n", tmp, ret);
	}
	if ((ret = get_next_line(fd5, &tmp)) > 0)
	{
		printf("%s|->%d\n", tmp, ret);
	}
	if ((ret = get_next_line(fd6, &tmp)) > 0)
	{
		printf("%s|->%d\n", tmp, ret);
	}
	if ((ret = get_next_line(fd7, &tmp)) > 0)
	{
		printf("%s|->%d\n", tmp, ret);
	}
	if ((ret = get_next_line(fd8, &tmp)) > 0)
	{
		printf("%s|->%d\n", tmp, ret);
	}
	printf("|->%d\n", ret);
	close(fd);
	return (0);
}
