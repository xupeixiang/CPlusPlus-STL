#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> coll;

    for (int i = -3; i <= 9; ++i)
    {
        coll.push_back(i);
    }
    
    // length
    cout << "length/distance:" << coll.end() - coll.begin() << endl;

    vector<int>::iterator pos;

    for (pos = coll.begin(); pos < coll.end(); ++pos)
    {
        cout << *pos << ' ';
    }
    cout << endl;

    // using []
    for (int i = 0; i < coll.size(); ++i)
    {
        cout << coll.begin()[i] << ' ';
     }
    cout << endl;

    // print every second element
    for (pos = coll.begin(); pos < coll.end() - 1; pos += 2)
    {
        cout << *pos << ' ';
    }
    cout << endl;
    
}
