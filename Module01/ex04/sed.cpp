/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:49:18 by haitkadi          #+#    #+#             */
/*   Updated: 2022/11/01 13:49:19 by haitkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

/*--------------------------------------------------------------------------------------*/

static void    readFileContent(std::string &fileName, std::string &fileContent){
    std::ifstream    infile(fileName);
    std::stringstream buffer;

    if (!infile.is_open()){
        std::cerr << "\033[0;31mSomething whent wrong while opening infile\033[0m" << std::endl;
        exit(EXIT_FAILURE);
    }
    buffer << infile.rdbuf();
    infile.close();
    fileContent = buffer.str();
}

/*--------------------------------------------------------------------------------------*/

static void    iterFileContent(std::string &fileContent, std::ofstream &outfile, const std::string &oldK, const std::string &newK){
    size_t pos0;
    std::stringstream   tmp;

    while((pos0 = fileContent.find(oldK)) != std::string::npos && !oldK.empty()){
        tmp << fileContent.substr(0, pos0);
        tmp << newK;
        outfile << tmp.str();
        tmp.str("");
        tmp.clear();
        fileContent.erase(0, pos0 + oldK.length());
    }
    if (!fileContent.empty()){
        outfile << fileContent;
    }
}

/*--------------------------------------------------------------------------------------*/

void searchAndReplace(std::string fileName, std::string oldKeyword, std::string newKeyword){
    std::string fileContent;
    std::string outfileName = fileName + ".replace";
    readFileContent(fileName, fileContent);
    std::ofstream outfile(outfileName, std::ios::trunc);
    iterFileContent(fileContent, outfile, oldKeyword, newKeyword);
    outfile.close();
}
