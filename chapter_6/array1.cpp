#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    int col[] = {5, 6, 2, 4, 1, 3};

    // col + 6
    transform(col, col + 6
            , col
            , col
            , multiplies<int>());

    sort(col + 1, col + 6);

    copy(col, col + 6, ostream_iterator<int>(cout, " "));
    cout << endl;
}
