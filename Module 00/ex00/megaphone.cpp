/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 01:03:12 by adriouic          #+#    #+#             */
/*   Updated: 2022/05/20 01:03:28 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

void	upper_string(char **vector)
{
	for (int i = 1; vector[i]; i++)
		for (int j = 0; vector[i][j];  j++)
			std::cout << (char) toupper(vector[i][j]);
}

int main(int ac, char **av)
{
	const char *default_message;
	
	default_message = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	if (ac == 1)
		std::cout << default_message;
	else
		upper_string(av);
	std::cout << std::endl;
}
