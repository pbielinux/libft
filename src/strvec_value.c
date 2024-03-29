/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strvec_value.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:05:45 by pbielik           #+#    #+#             */
/*   Updated: 2021/09/21 17:05:46 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_vec.h"

t_strvec	strvec_value(size_t capacity)
{
	return (vec_value(capacity, sizeof(t_str)));
}
