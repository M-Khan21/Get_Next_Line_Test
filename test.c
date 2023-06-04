/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 01:21:15 by makhan            #+#    #+#             */
/*   Updated: 2023/06/03 21:43:50 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	int	fd;
	char str[100];
	int new_str = 0;

	fd = open("file.txt", O_RDONLY);

	while(str)
	{
		new_str += read(fd, str, 4);
	}
	return new_str;
}
