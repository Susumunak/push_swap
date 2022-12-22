/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 03:08:09 by del-khay          #+#    #+#             */
/*   Updated: 2022/12/22 03:11:09 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_arr *args)
{
	if (args->a_size < 2)
		return ;
	args->a_head = args->a_head->next;
	args->a->next = args->a->next->next;
	args->a_head->next = args->a;
	args->a = args->a_head;
	ft_putendl_fd("sa", 1);
}

void	sb(t_arr *args)
{
	if (args->b_size < 2)
		return ;
	args->b_head = args->b_head->next;
	args->b->next = args->b->next->next;
	args->b_head->next = args->b;
	args->b = args->b_head;
	ft_putendl_fd("sb", 1);
}

void	ss(t_arr *args)
{
	sa(args);
	sb(args);
}

void	pa(t_arr *args)
{
	if (args->b_size <= 0)
		return ;
	args->b_head = args->b->next;
	args->b->next = args->a_head;
	args->a_head = args->b;
	args->b = args->b_head;
	args->a = args->a_head;
	args->b_size -= 1;
	args->a_size += 1;
	ft_putendl_fd("pa", 1);
}

void	pb(t_arr *args)
{
	if (args->a_size <= 0)
		return ;
	args->a_head = args->a->next;
	args->a->next = args->b_head;
	args->b_head = args->a;
	args->a = args->a_head;
	args->b = args->b_head;
	args->a_size -= 1;
	args->b_size += 1;
	ft_putendl_fd("pb", 1);
}
