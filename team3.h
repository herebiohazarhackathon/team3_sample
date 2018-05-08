#ifndef TEAM3_H
#define TEAM3_H

#include "team3_global.h"
#include <unistd.h>
#include <QString>
#include <vector>

class TEAM3SHARED_EXPORT Team3
{

public:
    Team3();
};

static void split_str(const std::string& a, int &first, int &second )
{
    size_t found=a.find(' ');
    if (found==std::string::npos)
        return;
    std::vector<int> arr;
    first= stoi (a.substr(0, found));
    second= stoi (a.substr(found));
}

std::string orthogonality(std::string& arg)
{
    std::pair<int, int> a;
    std::pair<int, int> b;

    int sum1=1;
    int sum2=1;

    bool flag = false;
    for(int i=0;i<arg.length();++i)
    {
        int a=0;
        if (arg[i] <= '9' && arg[i] >= '0')
        {
            if(arg[i-1]=='-')
            {
                a=(arg[i]-'0')*(-1);
            }
            else
            {
                a=(arg[i]-'0');
            }

            if(flag==false)
            {
                sum1*=a;
                flag=true;
            }
            else
            {
                flag=false;
                sum2*=a;
            }
        }
    }

    if((sum1+sum2)==0)
    {
        return "1";
    }
    else
    {
        return "0";
    }
}


extern "C"  std::string process(std::string id, std::string arg)
{
    int _id=stoi(id);

    if(_id<1 || _id>896)
    {
        return "";
    }
    else if(_id>=1 && _id<=40)
    {
        return "";
    }
    else if(_id>=41 && _id<=60)
    {
        return "";
    }
    else if(_id>=61 && _id<=80)
    {
        return "";
    }
    else if(_id>=81 && _id<=100)
    {
        return "";
    }
    else if(_id>=101 && _id<=120)
    {
        return orthogonality(arg);
    }
    else if(_id>=121 && _id<=140)
    {
        return "";
    }
    else if(_id>=141 && _id<=160)
    {
        return "";
    }
    else if(_id>=161 && _id<=180)
    {
        return "";
    }
    else if(_id>=181 && _id<=200)
    {
        return "";
    }
    else if(_id>=201 && _id<=220)
    {
        return "";
    }
    else if(_id>=221 && _id<=240)
    {
        return "";
    }
    else if(_id>=241 && _id<=260)
    {
        return "";
    }
    else if(_id>=261 && _id<=280)
    {
        return "";
    }
    else if(_id>=281 && _id<=300)
    {
        return "";
    }
    else if(_id>=301 && _id<=320)
    {
        return "";
    }
    else if(_id>=321 && _id<=340)
    {
        return "";
    }
    else if(_id>=341 && _id<=360)
    {
        return "";
    }
    else if(_id>=361 && _id<=380)
    {
        return "";
    }
    else if(_id>=381 && _id<=400)
    {
        return "";
    }
    else if(_id>=401 && _id<=420)
    {
        return "";
    }
    else if(_id>=421 && _id<=440)
    {
        return "";
    }
    else if(_id>=441 && _id<=460)
    {
        return "";
    }
    else if(_id>=461 && _id<=480)
    {
        return "";
    }
    else if(_id>=481 && _id<=500)
    {
        return "";
    }
    else if(_id>=501 && _id<=520)
    {
        return "";
    }
    else if(_id>=521 && _id<=540)
    {
        return "";
    }
    else if(_id>=541 && _id<=560)
    {
        return "";
    }
    else if(_id>=561 && _id<=580)
    {
        return "";
    }
    else if(_id>=581 && _id<=600)
    {
        return "";
    }
    else if(_id>=601 && _id<=620)
    {
        return "";
    }
    else if(_id>=621 && _id<=640)
    {
        return "";
    }
    else if(_id>=641 && _id<=660)
    {
        return "";
    }
    else if(_id>=661 && _id<=680)
    {
        return "";
    }
    else if(_id>=681 && _id<=700)
    {
        return "";
    }
    else if(_id>=701 && _id<=720)
    {
        return "";
    }
    else if(_id>=741 && _id<=760)
    {
        return "";
    }
    else if(_id>=761 && _id<=780)
    {
        return "";
    }
    else if(_id>=781 && _id<=800)
    {
        return "";
    }
    else if(_id>=801 && _id<=820)
    {
        return "";
    }
    else if(_id>=821 && _id<=840)
    {
        return "";
    }
    else if(_id>=841 && _id<=860)
    {
        return "";
    }
    else if(_id>=861 && _id<=880)
    {
        return "";
    }
    else if(_id>=881 && _id<=896)
    {
        return "";
    }
}
#endif // TE_idM3_H
