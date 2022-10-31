#include "sed.hpp"

std::string *readFileContent(std::string &fileName){
    std::ifstream    infile(fileName);
    std::stringstream buffer;

    if (!infile.is_open()){
        std::cerr << "\033[0;31mSomething whent wrong while opening infile\033[0m" << std::endl;
        exit(EXIT_FAILURE);
    }
    buffer << infile.rdbuf();
    infile.close();
    std::string *tmp = new(std::nothrow) std::string;
    if (!tmp)
        exit(EXIT_FAILURE);
    *tmp = buffer.str();
    return (tmp);
}

void    iterFileContent(std::string &fileContent, std::ofstream &outfile, const std::string &oldK, const std::string &newK){
    size_t pos0;
    std::stringstream   tmp;

    while((pos0 = fileContent.find(oldK)) != std::string::npos){
        tmp << fileContent.substr(0, pos0);
        tmp << newK;
        outfile << tmp.str();
        tmp.clear();
        
        fileContent.erase(0, pos0 + oldK.length());
    }
    if (!fileContent.empty()){
        outfile << fileContent;
    }
    std::cout << std::endl;
    std::cout << fileContent << std::endl;
    std::cout << std::endl;
}


void searchAndReplace(std::string fileName, std::string oldKeyword, std::string newKeyword){
 
    std::string *fileContent;
    std::string outfileName = fileName + ".replace";
    fileContent = readFileContent(fileName);
    std::ofstream outfile(outfileName, std::ios_base::app);
    iterFileContent(*fileContent, outfile, oldKeyword, newKeyword);
    delete fileContent;
    outfile.close();
    // std::cout << *fileContent << std::endl;
    std::cout << oldKeyword << std::endl;
    std::cout << newKeyword << std::endl;

}
