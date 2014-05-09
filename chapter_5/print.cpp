#include <iostream>
#include <vector>
using namespace std;

template <class T>
inline void PRINT_ELEMENTS(const T& coll, const char* optcstr="")
{
    typename T::const_iterator pos;
    cout << optcstr << endl;
    for(pos = coll.begin(); pos!= coll.end(); ++pos)
    {
        cout << *pos << ' ';
    }
    cout << endl;
}

int main()
{
    vector<int> vct;
    for(int i=1; i<=10; ++i)
    {
        vct.push_back(i);
    }
    PRINT_ELEMENTS(vct, "test template function on vector");
}
