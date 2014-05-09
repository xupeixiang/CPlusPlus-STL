#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

void print(int elem)
{
    cout << elem << ' ';
}

template <class T>
void print_all(T elem)
{
    cout << elem << ' ';
}

int main()
{
    vector<string> vct;
    for(int i=1; i<=10; ++i)
    {
        char buff[3];
        sprintf(buff, "%d", i);
        vct.push_back(string(buff));
    }

    for_each (vct.begin(), vct.end(), print_all<string>);
    cout << endl;
}
