/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lailah <lailah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:25:56 by lailah            #+#    #+#             */
/*   Updated: 2022/06/13 13:45:30 by lailah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*newnd;

	newnd = (t_list *)malloc(sizeof (t_list));
	newnd->content = content;
	newnd->next = NULL;
	return (newnd);
}