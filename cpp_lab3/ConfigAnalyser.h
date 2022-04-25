//
// Created by Лаэтин  Андрей on 09.04.2022.
//

#ifndef CPP_LAB3_CONFIGANALYSER_H
#define CPP_LAB3_CONFIGANALYSER_H

#include "includeLibs.h"


class ConfigAnalyser {
private:
    std::string path;

    std::vector<std::string> mainNames = {"PLAY", "SETTINGS", "EXIT"}; //Что может быть в главном меню
    std::vector<std::string> popNames = {"POP1", "POP2", "POP3", "BACK"}; //Что может быть в подменю

    const char divider = '=';

    const std::string dial = "DIALOG";

    const std::string mainSign = "M";//
    const std::string popSign = "P";//
    const std::string dialSign = "D";//

    std::vector<std::vector<std::string>> mainIncluded; //Что будет в главном меню
    std::vector<std::vector<std::string>> popIncluded;  //Что будет в подменю
    std::vector<std::string> dialog;                    //"True"/"False" - есть ли диалоговое окно


    static std::vector<std::string> divideStr(std::string &str, char divider);

    static bool isIncluded(std::string &str,std::vector<std::string> &vect);

public:
    explicit ConfigAnalyser(std::string path);
    ~ConfigAnalyser();

    void analyse();

    std::vector<std::vector<std::string>> &getMain();
    std::vector<std::vector<std::string>> &getPop();
    std::vector<std::string> &getDial();

};


#endif //CPP_LAB3_CONFIGANALYSER_H
