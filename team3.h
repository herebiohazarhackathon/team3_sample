#ifndef TEAM3_H
#define TEAM3_H

#include "team3_global.h"
#include <unistd.h>
class TEAM3SHARED_EXPORT Team3
{

public:
    Team3();
};

extern "C"  std::string  process(std::string id,std::string arg)
{
    // here you can put your main logic
    // id - id of task
    // arg - is argument of task , in any format. look in task description

    return "1,2,3";
}
#endif // TEAM3_H
