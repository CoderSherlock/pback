//
// Created by pengzhan on 4/20/18.
//

#include "core/rules.h"
#include "config.h"

int main(){
    config *env = new config();
    core::rules *rules = new core::rules();

    delete env;
    delete rules;
}