/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:23:59 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/18 18:53:51 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

static void		replace_str(std::string& contents, std::size_t foundAt, std::size_t len, std::string s2)
{
	contents.erase(foundAt, len);
	contents.insert(foundAt, s2);
}

int				main(int ac, char **av)
{
	std::size_t		found;

	if (ac != 4)
		return (1);
	std::string		s1(av[2]);
	std::string		s2(av[3]);
	std::string		filename(av[1]);
	std::ifstream	ifs(filename);
	std::string		contents;
	if (std::getline(ifs, contents, '\0')) {
		found = contents.find(s1);
		while (found != std::string::npos) {
			replace_str(contents, found, s1.length(), s2);
			found = contents.find(s1, found + s2.length());
		}
		std::ofstream	ofs(filename + ".replace");
		ofs << contents;
	} else {
		std::cerr << "Error: cannot read the file!" << std::endl;
	}
	return (0);
}
