#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"
#include <stdlib.h>


int	main(void)
{
	int	fd;

	fd = open("ft_putrstr_fd.c", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));

	

}
