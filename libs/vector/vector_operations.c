/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:12:44 by aqueiroz          #+#    #+#             */
/*   Updated: 2023/10/22 00:24:55 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

double	vector_dot(t_vector u, t_vector v)
{
	return (u.x * v.x + u.y * v.y + u.z * v.z);
}

t_vector	vector_cross(t_vector u, t_vector v)
{
	t_vector	w;

	w.x = u.y * v.z - u.z * v.y;
	w.y = u.z * v.x - u.x * v.z;
	w.z = u.x * v.y - u.y * v.x;
	return (w);
}

double	vector_length(t_vector u)
{
	return (sqrt(vector_dot(u, u)));
}

t_vector	vector_unit(t_vector u)
{
	return (vector_scalar(u, 1 / vector_length(u)));
}

t_vector	vector_scalar(t_vector u, double b)
{
	t_vector	w;

	w.x = u.x * b;
	w.y = u.y * b;
	w.z = u.z * b;
	return (w);
}
