/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:06:32 by aqueiroz          #+#    #+#             */
/*   Updated: 2023/10/22 00:23:39 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# include <math.h>

typedef struct s_vector
{
	double	x;
	double	y;
	double	z;
}			t_vector;

t_vector	vector(double x, double y, double z);
t_vector	vector_add(t_vector a, t_vector b);
t_vector	vector_sub(t_vector a, t_vector b);
t_vector	vector_mul(t_vector u, t_vector v);
t_vector	vector_div(t_vector u, t_vector v);
double		vector_dot(t_vector a, t_vector b);
t_vector	vector_cross(t_vector a, t_vector b);
double		vector_length(t_vector a);
t_vector	vector_unit(t_vector a);
t_vector	vector_rotate(t_vector a, t_vector b, double angle);
t_vector	vector_rotate_x(t_vector a, double angle);
t_vector	vector_rotate_y(t_vector a, double angle);
t_vector	vector_rotate_z(t_vector a, double angle);
t_vector	vector_scalar(t_vector a, double b);
#endif