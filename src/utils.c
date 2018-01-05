/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agundry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:39:13 by agundry           #+#    #+#             */
/*   Updated: 2018/01/05 14:32:08 by agundry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	exit_printf(int code)
{
	write(2, "malloc error\n", 13);
	exit(code);
}

int		cleanup_buf(t_buf *pb)
{
	FT_BUF_FREE(pb);
	return (-1);
}
