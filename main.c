/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 23:43:45 by aqueiroz          #+#    #+#             */
/*   Updated: 2023/10/21 23:54:33 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#define WIDTH 500
#define HEIGHT 500

typedef struct s_color
{
	double	r;
	double	g;
	double	b;
}			t_color;

void	ft_putstr_fd(char *str, int fd)
{
	while (*str)
		write(fd, str++, 1);
}

int	main(void)
{
	int		i;
	int		j;
	t_color	color;

	i = 0;
	j = 0;
	printf("P3\n%d %d\n255\n", WIDTH, HEIGHT);
	while (i < HEIGHT)
	{
		while (j < WIDTH)
		{
			color.r = (double)i / (double)WIDTH;
			color.g = (double)j / (double)HEIGHT;
			color.b = 0.2;
			printf("%d %d %d ", (int)(255.999 * color.r), (int)(255.999
					* color.g), (int)(255.999 * color.b));
			j++;
		}
		j = 0;
		printf("\n");
		i++;
	}
	return (0);
}
