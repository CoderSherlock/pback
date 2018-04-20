//
// Created by pengzhan on 4/17/18.
//

#include <iostream>
#include <experimental/filesystem>

namespace fs = std::experimental::filesystem;

class config{
    public:

    fs::path CONFIG_DIR_ROOT;
    fs::path CONFIG_DIR;


    config() {
        std::string *home = new std::string(getenv("HOME"));
        this->CONFIG_DIR_ROOT += *home;
        delete home;
        std::cout << CONFIG_DIR_ROOT << std::endl;

        this->CONFIG_DIR = this->CONFIG_DIR_ROOT;
        this->CONFIG_DIR += "/pback";

        std::cout << CONFIG_DIR_ROOT << std::endl;
        std::cout << CONFIG_DIR << std::endl;

    }
};