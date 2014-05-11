#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include "print.cpp"
using namespace std;

int main()
{
    set<int, greater<int> > st;
    vector<int> vct;

    for(int i = 0; i < 10; ++i)
    {
        st.insert(i);
    }

    PRINT_ELEMENTS(st, "initialized: ");

    // transform to vct by multiplying 10
    transform(st.begin(), st.end(),
              back_inserter(vct),
              bind2nd(multiplies<int>(), 10));
    PRINT_ELEMENTS(vct, "multiplied: ");

    // replace value equal to 70 with 42
    replace_if(vct.begin(), vct.end(),
              bind2nd(equal_to<int>(), 70),
              42);
    PRINT_ELEMENTS(vct, "replaced: ");

    //remove all elements less than 50
    vct.erase(remove_if(vct.begin(), vct.end(),
                       bind2nd(less<int>(), 50)),
             vct.end());

    PRINT_ELEMENTS(vct, "removed: ");
}
