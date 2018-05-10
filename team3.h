#ifndef TEAM3_H
#define TEAM3_H

#include "team3_global.h"
#include <iostream>
#include <cmath>
#include<sstream>
#include <algorithm>
#include <vector>

class TEAM3SHARED_EXPORT Team3
{

public:
    Team3();
};

//PARSERS

std::vector<std::vector<int>> Parse_to_3x3(std::string arg)
{
    std::vector<std::vector<int>> matrix;
    std::vector<int> temp;

    std::string temp_s;
    int jumper=0;
    for(int i=0;i<arg.length();)
    {
        temp_s="";
        int a=0;
        if(arg[i]>='0' && arg[i]<='9')
        {
            if(arg[i-1]=='-')
            {
                temp_s+=arg[i-1];
            }

            while(arg[i]>='0' && arg[i]<='9')
            {
                temp_s+=arg[i];
                i++;
            }

            a = stoi(temp_s);

            if(jumper<3)
            {
                temp.push_back(a);
                jumper++;
            }
            else
            {
                matrix.push_back(temp);
                temp.erase(temp.begin(),temp.end());
                temp.shrink_to_fit();
                temp.push_back(a);
                jumper=1;
            }
        }
        else
        {
            if(i==arg.length()-1)
            {
                matrix.push_back(temp);
            }
            i++;
        }
    }
 return matrix;
}


std::vector<std::vector<int>> Parse_to_2x2(std::string arg)
{
    std::vector<std::vector<int>> matrix;
    std::vector<int> temp;

    int jumper=0;
    std::string temp_s;
    for(int i=0;i<arg.length();)
    {
        temp_s="";
        int a=0;
        if(arg[i]>='0' && arg[i]<='9')
        {
            if(arg[i-1]=='-')
            {
                temp_s+=arg[i-1];
            }

            while(arg[i]>='0' && arg[i]<='9')
            {
                temp_s+=arg[i];
                i++;
            }

            a=stoi(temp_s);

            if(jumper<2)
            {
                temp.push_back(a);
                jumper++;
            }
            else
            {
                matrix.push_back(temp);
                temp.erase(temp.begin(),temp.end());
                temp.shrink_to_fit();
                temp.push_back(a);
                jumper=1;
            }
        }

        else
        {
            if(i==arg.length()-1)
            {
                matrix.push_back(temp);
            }
            i++;
        }
    }
    return matrix;
}



//Scalar product must be 0
std::string orthogonality(std::string arg)
{
    std::vector<std::vector<int>> matrix=Parse_to_2x2(arg);

    int produce = (matrix[0][0]*matrix[1][0]) + (matrix[0][1]*matrix[1][1]);
    if(produce==0)
    {
        return "1";
    }
    else
    {
        return "0";
    }
}

std::string square_of_parellelegramm(std::string arg)
{
    std::vector<std::vector<int>> matrix = Parse_to_3x3(arg);


    int produce = (matrix[0][0]*matrix[1][0]) + (matrix[0][1]*matrix[1][1]);
    int len_a = sqrt(pow(matrix[0][0],2)+pow(matrix[0][1],2));
    int len_b = sqrt(pow(matrix[0][0],2)+pow(matrix[0][1],2));
    double temp = produce/(len_a*len_b);
    return std::to_string(static_cast<int>(len_a*len_b*sin(acos(temp))));
}

//Mixed product must be 0
std::string complanation(std::string arg)
{
    std::vector<std::vector<int>> matrix = Parse_to_3x3(arg);


    int determ = (matrix[0][0]*matrix[1][1]*matrix[2][2]) + (matrix[0][1]*matrix[1][2]*matrix[2][0]) + (matrix[1][0]*matrix[0][2]*matrix[2][1])
            - (matrix[2][0]*matrix[1][1]*matrix[0][2]) - (matrix[0][1]*matrix[1][0]*matrix[2][2]) - (matrix[0][0]*matrix[1][2]*matrix[2][1]);

    if(determ==0)
    {
        return "1";
    }
    else
    {
        return "0";
    }
}

std::string volume_of_parallelepiped(std::string arg)
{
    std::vector<std::vector<int>> matrix = Parse_to_3x3(arg);


    int determ = (matrix[0][0]*matrix[1][1]*matrix[2][2]) + (matrix[0][1]*matrix[1][2]*matrix[2][0]) + (matrix[1][0]*matrix[0][2]*matrix[2][1])
            - (matrix[2][0]*matrix[1][1]*matrix[0][2]) - (matrix[0][1]*matrix[1][0]*matrix[2][2]) - (matrix[0][0]*matrix[1][2]*matrix[2][1]);

    return std::to_string(abs(determ));
}

std::string addition_to_plural(std::string arg)
{
    std::string full="0123456789ABCDEF";

    for(int i=0;i<arg.size();++i)
    {
        full.erase(std::remove(full.begin(),full.end(),arg[i]),full.end());
    }

    return full;
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
        return complanation(arg);
    }
    else if(_id>=141 && _id<=160)
    {
        return volume_of_parallelepiped(arg);
    }
    else if(_id>=161 && _id<=180)
    {
        return square_of_parellelegramm(arg);
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
        return addition_to_plural(arg);
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
#endif
