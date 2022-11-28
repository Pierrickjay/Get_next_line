/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:03:34 by pjay              #+#    #+#             */
/*   Updated: 2022/11/25 14:24:07 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"


int main()
{
	int fd;
	int fd2;
	char *str;
	fd = open("test.txt",O_RDWR);
	fd2 = open("test2.txt", O_RDWR);

	str = get_next_line(fd);
	printf(" 1 = %s", str);
	// printf(" 2 = %s", get_next_line(fd2));
	// printf(" 3 = %s", get_next_line(fd));
	// printf(" 4 = %s", get_next_line(fd2));
	// printf(" 5 = %s", get_next_line(fd));
	// printf(" 6 = %s", get_next_line(fd2));
	// printf(" 7 = %s", get_next_line(fd));
	// printf(" 8 = %s", get_next_line(fd2));
	// printf(" 9 = %s", get_next_line(fd));
	// printf(" 10 = %s", get_next_line(fd2));
	// printf(" 12 = %s", get_next_line(fd));
	// printf(" 13 = %s", get_next_line(fd2));
	// printf(" 14 = %s", get_next_line(fd));
	free(str);
	close(fd);
	close(fd2);
}
