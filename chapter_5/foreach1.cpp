#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

// simple function
void print(int elem)
{
    cout << elem << ' ';
}

// template function
template <class T>
void print_all(T elem)
{
    cout << elem << ' ';
}

// template functor
template <class T>
class PrintAll
{
    public:
        void operator() (T elem) const
        {
            cout << elem << ' ';
        }
};

int main()
{
    vector<string> vct;
    for(int i=1; i<=10; ++i)
    {
        char buff[3];
        sprintf(buff, "%d", i);
        vct.push_back(string(buff));
    }

    for_each (vct.begin(), vct.end(), PrintAll<string>());
    cout << endl;
}
