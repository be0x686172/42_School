/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abehar-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:57:55 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/06 17:37:30 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

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

	// Tests
	printf(
		"#############\n"
		"### TESTS ###\n"
		"#############\n"
	);
	
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_strlen();
	test_bzero();
	test_memset();
	test_memcpy();
	test_memmove();
	test_strlcpy();
	test_strlcat();
	test_toupper();
	test_tolower();
	test_strchr();
	test_strrchr();
	test_strncmp();
	test_memchr();

	printf(
		"\n\n###########\n"
		"### END ###\n"
		"###########\n"
	);
	
	return (0);
}
