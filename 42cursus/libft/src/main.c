/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:00:37 by nmallett          #+#    #+#             */
/*   Updated: 2021/09/20 15:18:47 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs/libft.h"

int main(void)
{
    char    string1[250] = "Some_test_we_are_doing";
    char   	**target = ft_split(string1, '_');
	int	i = 0;
	int	i2 = 0; // Keep this to zero for now
	
	while (target[i])
		printf("%s", target[i++]);

	// Free the addresses we allocated for the double ptr
	i = 0;
	while (target[i])
		free(target[i++]);
	free(target);
    return (0);
}