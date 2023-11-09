/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prukngan <phongsathon.rak2003@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 00:26:57 by prukngan          #+#    #+#             */
/*   Updated: 2023/09/23 00:26:57 by prukngan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack *top)
{
	int	swap;

	if (!top || !top->next)
		return ;
	swap = top->data;
	top->data = (top->next)->data;
	(top->next)->data = swap;
}

void	ft_push(t_stack **s1, t_stack **s2)
{
	t_stack	*next_s1;

	next_s1 = (*s1)->next;
	(*s1)->next = *s2;
	*s2 = *s1;
	*s1 = next_s1;
}

t_stack	*ft_rotate(t_stack *top)
{
	t_stack	*bottom;
	t_stack	*new_top;

	if (!top || !top->next)
		return (top);
	bottom = top;
	while (bottom->next)
		bottom = bottom->next;
	new_top = top->next;
	bottom->next = top;
	return (new_top);
}

t_stack	*ft_reverse(t_stack *top)
{
	t_stack	*bottom;
	t_stack	*pre;
	
	if (!top || !top->next)
		return (top);
	bottom = top;
	while (bottom->next)
	{
		pre = bottom;
		bottom = bottom->next;
	}
	bottom = top->next;
	pre->next = NULL;
	return (top);
}