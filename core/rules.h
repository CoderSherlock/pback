//
// Created by pengzhan on 4/13/18.
//

#include <vector>
#include <string>
#include <utility>

#ifndef PBACK_RULES_H
#define PBACK_RULES_H



namespace core {

    enum rule_type{
        WATCH = 1,
        IGNORE = 2,
        CHECK = 3
    };


    class rules {
    private:
        std::vector <std::pair<std::string, int> > ruleList;

    public:
        rules() {
//TODO: Check if configuration has been done(Env)
            this->restore_from_Disk();
        };

        virtual ~rules() {
            this->sync_to_Disk();
        };

        int add_Rules(std::string, int);

        int add_Watch(std::string);

        int add_Ignore(std::string);

        int add_Ignore_Universal(std::string);

        bool check_status(std::string);

        void sync_to_Disk();

        void restore_from_Disk();

    };
}
#endif //PBACK_RULES_H
