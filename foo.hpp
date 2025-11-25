#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > dane;
    
    for (auto i = people.rbegin(); i != people.rend(); i++)
    {
        Human& person = *i;

        person.birthday();

        if (person.isMonster()) 
        {
            dane.push_back('n');
        }
        else 
        {
            dane.push_back('y');
        }

    }


    return dane;
}
