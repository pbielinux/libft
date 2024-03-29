/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_length.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:14:57 by pbielik           #+#    #+#             */
/*   Updated: 2021/09/21 17:15:01 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

size_t	str_length(const t_str *self)
{
	return (vec_length(self) - 1);
}
