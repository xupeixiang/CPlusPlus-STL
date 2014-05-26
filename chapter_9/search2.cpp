#include "algostuff.hpp"
using namespace std;

bool checkEven (int elem, bool even)
{
    if (even)
        return elem % 2 == 0;
    else
        return elem % 2 == 1;
}

int main()
{
    vector<int> coll;
    INSERT_ELEMENTS(coll, 1, 9);
    PRINT_ELEMENTS(coll, "coll: ");

    bool checkEventArgs[3] = {true, false, true};

    vector<int>::iterator pos;
    pos = search(coll.begin(), coll.end(),
                checkEventArgs, checkEventArgs + 3, // pointer iterator
                checkEven);

    while (pos != coll.end())
    {
        cout << "substring found: ";
        copy(pos, pos + 3,                         // only work for random iterator
             ostream_iterator<int>(cout, " "));
        cout << endl;

        pos = search(++pos, coll.end(),
                     checkEventArgs, checkEventArgs + 3, // pointer iterator
                     checkEven);
    }
}
