/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prukngan <phongsathon.rak2003@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:12:21 by prukngan          #+#    #+#             */
/*   Updated: 2023/09/22 14:12:21 by prukngan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}	t_node;

typedef t_node	t_stack;

void	ft_swap(t_stack *top);
void	ft_push(t_stack **s1, t_stack **s2);
t_stack	*ft_rotate(t_stack *top);
t_stack	*ft_reverse(t_stack *top);

#endif