#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include "print.cpp"
using namespace std;

int square(int value)
{
    return value * value;
}

int main()
{
    vector<int> vct;
    set<int> st;

    for(int i = 0; i < 10; ++i)
    {
        vct.push_back(i);
    }

    PRINT_ELEMENTS(vct, "Original Vector:");

    transform(vct.begin(), vct.end(), inserter(st, st.begin()), square);

    PRINT_ELEMENTS(st, "Squared Set:");
}
