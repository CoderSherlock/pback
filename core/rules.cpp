//
// Created by pengzhan on 4/13/18.
//

#include "rules.h"

using namespace core;

int rules::add_Rules(std::string path, int type) {
    for (auto i : this->ruleList) {
        if(i.first.compare(path)) {
            if(i.second == type) {
                return 1;
            }
            else {
                // TODO: Add logger
                return 0;
            }
        }
    }
    this->ruleList.push_back(std::make_pair(path, type));
    return 1;
}

int rules::add_Watch(std::string path) {
    return this->add_Rules(path, rule_type::WATCH);
}

int rules::add_Ignore(std::string path) {
    return this->add_Rules(path, rule_type::IGNORE);
}

int rules::add_Ignore_Universal(std::string path) {
    // Check conflicts with specific ignore files.
    return this->add_Rules(path, rule_type::IGNORE);
}

bool rules::check_status(std::string path) {
    for(auto i : this->ruleList){
    }
}

void rules::sync_to_Disk() {

}

void rules::restore_from_Disk() {

}