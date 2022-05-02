/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 00:15:54 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/03 00:19:28 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string searchAndReplace(std::string s, std::string needle, std::string rep)
{
	size_t	i = s.find(needle, 0);
	size_t	nlen = needle.length();
	size_t	rlen = rep.length();

	while (i != std::string::npos)
	{
		s.erase(i, nlen);
		s.insert(i, rep);
		i = s.find(needle, i + rlen);
	}
	return s;
}

void loser_sed(std::string fname, std::string s1, std::string s2)
{
	if (!s1.length() || !s2.length())
	{
		std::cerr << "Error. Empty string." << std::endl;
		exit(1);
	}
	std::ifstream ifs(fname);
	if (!ifs)
	{
		std::cerr << "Error. file opening failed." << std::endl;
		exit(1);
	}
	std::ofstream ofs(fname + ".replace");
	if (!ofs)
	{
		std::cerr << "Error. file creation failed." << std::endl;
		exit(1);
	}
	std::string line;
	while(getline(ifs, line))
		ofs << searchAndReplace(line, s1, s2) << std::endl;
	ifs.close();
	ofs.close();
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage : <Filename> <s1> <s2>" << std::endl;
		exit(1);
	}
	std::string fname = std::string(argv[1]);
	std::string s1 = std::string(argv[2]);
	std::string s2 = std::string(argv[3]);

	loser_sed(fname, s1, s2);
	return 0;
}