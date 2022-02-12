/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:55:20 by milmi             #+#    #+#             */
/*   Updated: 2022/02/09 14:17:08 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int replace(std::string filename, std::string s1,  std::string s2)
{
    std::string line;
    std::string output;
    // Input file
    std::ifstream inputFile(filename);
    if (!inputFile.is_open())  
        return 1;
    
    // Output file
    std::ofstream outFile(filename + ".replace");
    if (!outFile.is_open())  
        return 1;
    
    while (std::getline(inputFile, line))
    {
        for(size_t pos = 0; 1 ; pos += s2.length()) 
        {
            pos = line.find(s1, pos);
            if(pos == std::string::npos)
                break;
            line.erase(pos, s1.length());
            line.insert(pos,s2);
        }
        output += line;
		if (!inputFile.eof())
			output += "\n";
    }
	outFile << output;
    inputFile.close();
    outFile.close();
    return (0);
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string filename = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];
		
		if (filename.length() && s1.length() && s2.length())
			return(replace(filename, s1, s2));
		return (0);
	}
	std::cout << "USAGE: ./replace \"filename\" \"string1\" \"string2\"\n";
	return (1);
}