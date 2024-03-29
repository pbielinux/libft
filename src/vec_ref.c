/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_ref.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:16:44 by pbielik           #+#    #+#             */
/*   Updated: 2021/09/21 16:16:45 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

static void	exit_on_error(unsigned int line);

void	*vec_ref(const t_vec *self, size_t index)
{
	if (index < self->length)
		return (self->buffer + (index * self->item_size));
	else
	{
		print_stacktrace();
		exit_on_error(__LINE__);
	}
	return (NULL);
}

static void	exit_on_error(unsigned int line)
{
	fprintf(stderr, "%s:%d - Out of Bounds\n", __FILE__, line);
	exit(EXIT_FAILURE);
}
