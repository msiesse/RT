/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quadratic_function.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msiesse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 20:58:41 by msiesse           #+#    #+#             */
/*   Updated: 2020/01/31 21:51:11 by msiesse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

float	get_delta(float a, float b, float c)
{
	float delta;

	delta = powf(b, 2.0) - 4.0 * a * c;
	return (delta);
}
