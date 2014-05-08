#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> coll;
    // from cin to coll
    copy(istream_iterator<string>(cin), istream_iterator<string>(), back_inserter(coll));

    // sort
    sort(coll.begin(), coll.end());
    
    // from coll to cout
    unique_copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, "\n"));

}
