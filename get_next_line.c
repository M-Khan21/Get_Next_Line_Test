/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 21:53:40 by makhan            #+#    #+#             */
/*   Updated: 2023/06/03 22:35:25 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	//does sth with read(). what?
	char buffer[100];
	char *str;
	char *tmp;

	str = fd;
	//while ()
	tmp += read(fd, buffer, sizeof(buffer));

	return tmp;
}
