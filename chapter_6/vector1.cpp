#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> sentence;

    sentence.reserve(5);

    sentence.push_back("Hello,");
    sentence.push_back("how");
    sentence.push_back("are");
    sentence.push_back("you");
    sentence.push_back("?");

    // output
    copy(sentence.begin(), sentence.end(), 
        ostream_iterator<string>(cout, " "));
    cout << endl;
    
    cout << "max_size(): " << sentence.max_size() << endl;
    cout << "size(): " << sentence.size() << endl;
    cout << "capacity(): " << sentence.capacity() << endl;

    // swap
    swap(sentence[1], sentence[2]);

    // insert 'always' before '?'
    sentence.insert(find(sentence.begin(), sentence.end(), "?"), "always");

    // assign '!' to the last element
    sentence.back() = "!";

    // output again
    copy(sentence.begin(), sentence.end(), 
        ostream_iterator<string>(cout, " "));
    cout << endl;

    // output metedata again
    cout << "max_size(): " << sentence.max_size() << endl;
    cout << "size(): " << sentence.size() << endl;
    cout << "capacity(): " << sentence.capacity() << endl;

}
