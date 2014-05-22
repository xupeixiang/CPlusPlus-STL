#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include "genera.h"
#include "../chapter_5/print.cpp"
using namespace std;

int main()
{
    list<int> coll;
    generate_n(back_inserter(coll),
               9,
               IntSequence(1));
    PRINT_ELEMENTS(coll);

    generate(++coll.begin(),
             --coll.end(),
             IntSequence(42));
    PRINT_ELEMENTS(coll);

    vector<int> vct;
    generate_n(back_inserter(vct),
               9,
               IntSequence(1));
    PRINT_ELEMENTS(vct);
    
    // succeed: vector.begin() is implemented as struct or class in g++
    generate(++vct.begin(),
             --vct.end(),
             IntSequence(42));
    PRINT_ELEMENTS(vct);
}
