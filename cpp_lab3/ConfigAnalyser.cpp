//
// Created by Лаэтин  Андрей on 09.04.2022.
//

#include "ConfigAnalyser.h"

ConfigAnalyser::ConfigAnalyser(std::string path) {
    this->path = path;
    dialog = {"FALSE", ""};
}

ConfigAnalyser::~ConfigAnalyser() = default;

std::vector<std::string> &ConfigAnalyser::getDial()  {
    return dialog;
}

std::vector<std::vector<std::string>> &ConfigAnalyser::getMain() {
    return mainIncluded;
}

std::vector<std::vector<std::string>> &ConfigAnalyser::getPop()  {
    return popIncluded;
}

std::vector<std::string> ConfigAnalyser::divideStr(std::string &str, char div) {
    std::vector<std::string> segmentlist;
    segmentlist.push_back(str.substr(0, str.find(div)));
    segmentlist.push_back(str.substr(segmentlist[0].size() + 1, str.size()));
    return segmentlist;
}

bool ConfigAnalyser::isIncluded(std::string &str, std::vector<std::string> &vect) {
    for (auto &elem: vect){
        if (str == elem)
            return true;
    }
    return false;
}

void ConfigAnalyser::analyse(){
    std::ifstream file(this->path);
    std::string str;
    std::string sign;
    std::vector<std::string> lines;
    std::vector<std::string> line;

    while (getline(file, str)) {
        lines.push_back(str);           //получаю вектор строк конфига
    }
    file.close();

    for (auto elem: lines) {
        line = divideStr(elem, ' ');             //отделяю Sign'ы от самих строк
        sign = line[0];
        line = divideStr(line[1], divider);
        if (sign == mainSign && isIncluded(line[0],mainNames)){
            mainIncluded.push_back(line);
        }
        else if (sign  == popSign && isIncluded(line[0], popNames)){
            popIncluded.push_back(line);
        }
        else if (sign  == dialSign && line[0] == dial){
            dialog = line;
        } else{
            std::cout<<"Ento ploho"<< std::endl;
        }
    }
    /*for(auto elem: mainIncluded)
    {
        std::cout << elem[0] << " " << elem[1] << std::endl;
    }
    for(auto elem: popIncluded)
    {
        std::cout << elem[0] << " " << elem[1] << std::endl;
    }
    std::cout << dialog[0] << " " << dialog[1] << std::endl;*/
}

