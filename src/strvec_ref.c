/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strvec_ref.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:05:22 by pbielik           #+#    #+#             */
/*   Updated: 2021/09/21 17:05:23 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_vec.h"

void	strvec_push(t_strvec *self, t_str value)
{
	vec_set(self, vec_length(self), &value);
}
