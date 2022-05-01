/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 00:15:54 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/02 00:59:32 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string searchAndReplace(string s, string needle, string rep)
{
	size_t	i = s.find(needle, 0);
	size_t	nlen = needle.length();
	size_t	rlen = rep.length();

	while (i != string::npos)
	{
		s.erase(i, nlen);
		s.insert(i, rep);
		i = s.find(needle, i + rlen);
	}
	return s;
}

void loser_sed(string fname, string s1, string s2)
{
	if (!s1.length() || !s2.length())
	{
		cerr << "Error. Empty string." << endl;
		exit(1);
	}
	ifstream ifs(fname);
	if (!ifs)
	{
		cerr << "Error. file opening failed." << endl;
		exit(1);
	}
	ofstream ofs(fname + ".replace");
	if (!ofs)
	{
		cerr << "Error. file creation failed." << endl;
		exit(1);
	}
	string line;
	while(getline(ifs, line))
		ofs << searchAndReplace(line, s1, s2) << endl;
	ifs.close();
	ofs.close();
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		cerr << "Usage : <Filename> <s1> <s2>" << endl;
		exit(1);
	}
	string fname = string(argv[1]);
	string s1 = string(argv[2]);
	string s2 = string(argv[3]);

	loser_sed(fname, s1, s2);
	return 0;
}