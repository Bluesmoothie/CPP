/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:36:22 by ygille            #+#    #+#             */
/*   Updated: 2025/02/25 16:01:50 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	main(int argc, char **argv)
{
	std::string		destFileName;
	std::ifstream	sourceFile;
	std::ofstream	destFile;

	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments" << std::endl << "Usage : ./sed <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	sourceFile.open(argv[1]);
	if (!sourceFile.is_open())
	{
		std::cerr << "An error occured when opening " << argv[1] << std::endl;
		return (1);
	}
	destFileName = argv[1];
	destFileName.append(".replace");
	destFile.open(destFileName.c_str());
	if (!destFile.is_open())
	{
		sourceFile.close();
		std::cerr << "An error occured when opening " << destFileName << std::endl;
		return (1);
	}
	fileCopy(&sourceFile, &destFile, argv[2], argv[3]);
	sourceFile.close();
	destFile.close();
	return (0);
}

void	fileCopy(std::ifstream* sourceFile, std::ostream* destFile, char* s1, char* s2)
{
	std::string		line;

	line = cppgnl(sourceFile);
	while (line[0] != '\0')
	{
		for (int i = 0 ; line[i] ; i++)
		{
			for (int j = 0 ; s1[j] ; j++)
			{
				if (line[i + j] != s1[j])
					break ;
				if (s1[j + 1] == '\0')
					line = replaceWord(line, i, i + j, s2);
			}
		}
		*destFile << line;
		line = cppgnl(sourceFile);
	}
}

std::string	replaceWord(std::string source, int sPos, int ePos, char *s2)
{
	std::string	result;
	std::string	end;

	if (ePos + 1 < (int)source.length())
		end = source.substr(ePos + 1, source.length());
	result = source.substr(0, sPos);
	result.append(s2);
	if (ePos + 1 < (int)source.length())
		result.append(end);
	return (result);
}

std::string	cppgnl(std::ifstream* source)
{
	std::string line;
    char 		ch;

	ch = 0;
    while (source->get(ch) && ch != '\n')
        line += ch;

    if (ch == '\n')
        line += ch;

    return (line);
}
