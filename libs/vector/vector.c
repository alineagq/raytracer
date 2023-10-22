/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:10:36 by aqueiroz          #+#    #+#             */
/*   Updated: 2023/10/22 00:22:35 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector	vector(double x, double y, double z)
{
	t_vector	v;

	v.x = x;
	v.y = y;
	v.z = z;
	return (v);
}

t_vector	vector_add(t_vector u, t_vector v)
{
	t_vector	w;

	w.x = u.x + v.x;
	w.y = u.y + v.y;
	w.z = u.z + v.z;
	return (w);
}

t_vector	vector_sub(t_vector u, t_vector v)
{
	t_vector	w;

	w.x = u.x - v.x;
	w.y = u.y - v.y;
	w.z = u.z - v.z;
	return (w);
}

t_vector	vector_mul(t_vector u, t_vector v)
{
	t_vector	w;

	w.x = u.x * v.x;
	w.y = u.y * v.y;
	w.z = u.z * v.z;
	return (w);
}

t_vector	vector_div(t_vector u, t_vector v)
{
	t_vector	w;

	w.x = u.x / v.x;
	w.y = u.y / v.y;
	w.z = u.z / v.z;
	return (w);
}
