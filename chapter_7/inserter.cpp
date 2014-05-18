#include <iostream>
#include <set>
#include <list>
#include <algorithm>
#include "../chapter_5/print.cpp"
using namespace std;

int main()
{
    set<int> coll;

    // create iterator, inconvenient way
    insert_iterator<set<int> > iter(coll, coll.begin());
    *iter++ = 1;
    *iter++ = 2;
    *iter++ = 3;
    PRINT_ELEMENTS(coll, "set: ");

    // create inserter and insert elements, convenient way
    inserter(coll, coll.end()) = 44;
    inserter(coll, coll.end()) = 55;
    PRINT_ELEMENTS(coll, "set: ");

    // use with copy algorithm
    list<int> coll2;
    copy(coll.begin(), coll.end(),
            inserter(coll2, coll2.begin()));
    PRINT_ELEMENTS(coll2, "list: ");

    // reinsert all into the list before the second
    copy(coll.begin(), coll.end(),
            inserter(coll2, ++coll2.begin()));
    PRINT_ELEMENTS(coll2, "list: ");
}
