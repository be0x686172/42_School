/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:57:55 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/03 15:48:35 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	// #############################################
	printf("\n");
	printf(
        	" _     _  ____  _____ _____ \n"
        	"/ \\   / \\/  __\\/    //__ __\\\n"
        	"| |   | || | //|  __\\  / \\  \n"
        	"| |_/\\| || |_\\\\| |     | |  \n"
        	"\\____/\\_/\\____/\\_/     \\_/  \n"
        	"                            \n"
    	);
	printf("\n");
	// #############################################

	// Variables
	int	isalpha_var = '-';
	int	isdigit_var = '8';

	// Tests
	printf("### FUNCTIONS TESTS ###\n");
	printf("\nft_isalpha(%d): %d\n", isalpha_var, ft_isalpha(isalpha_var));
	printf("ft_isdigit(%d): %d\n", isdigit_var, ft_isdigit(isdigit_var));

	// END
	printf("\n### END ###\n");
	return (0);
}
