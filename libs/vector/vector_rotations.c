/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_rotations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:14:27 by aqueiroz          #+#    #+#             */
/*   Updated: 2023/10/22 00:16:23 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector	vector_rotate(t_vector u, t_vector v, double angle)
{
	t_vector	w;
	double		c;
	double		s;

	c = cos(angle);
	s = sin(angle);
	w.x = (c + (1 - c) * v.x * v.x) * u.x + ((1 - c) * v.x * v.y - s * v.z)
		* u.y + ((1 - c) * v.x * v.z + s * v.y) * u.z;
	w.y = ((1 - c) * v.x * v.y + s * v.z) * u.x + (c + (1 - c) * v.y * v.y)
		* u.y + ((1 - c) * v.y * v.z - s * v.x) * u.z;
	w.z = ((1 - c) * v.x * v.z - s * v.y) * u.x + ((1 - c) * v.y * v.z + s
			* v.x) * u.y + (c + (1 - c) * v.z * v.z) * u.z;
	return (w);
}

t_vector	vector_rotate_x(t_vector u, double angle)
{
	t_vector	v;
	double		c;
	double		s;

	c = cos(angle);
	s = sin(angle);
	v.x = u.x;
	v.y = c * u.y - s * u.z;
	v.z = s * u.y + c * u.z;
	return (v);
}

t_vector	vector_rotate_y(t_vector u, double angle)
{
	t_vector	v;
	double		c;
	double		s;

	c = cos(angle);
	s = sin(angle);
	v.x = c * u.x + s * u.z;
	v.y = u.y;
	v.z = -s * u.x + c * u.z;
	return (v);
}

t_vector	vector_rotate_z(t_vector u, double angle)
{
	t_vector	v;
	double		c;
	double		s;

	c = cos(angle);
	s = sin(angle);
	v.x = c * u.x - s * u.y;
	v.y = s * u.x + c * u.y;
	v.z = u.z;
	return (v);
}
