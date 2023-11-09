/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prukngan <phongsathon.rak2003@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:01:51 by prukngan          #+#    #+#             */
/*   Updated: 2023/09/23 11:01:51 by prukngan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_init_node(t_stack *head, int num)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (new_node == NULL)
		return (NULL);
	new_node->data = num;
	if (head)
		new_node->next = head;
	return (new_node);
}

int	main(int argc, char **argv)
{
	t_stack	*head;
	int	i;

	i = argc - 1;
	head = NULL;
	while (i > 0)
		ft_init_node(head, ft_atoi(argv[i++]));
	free(head);
	return (0);
}