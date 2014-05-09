#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(int elem)
{
    cout << elem << ' ';
}

int main()
{
    vector<int> vct;
    for(int i=1; i<=10; ++i)
    {
        vct.push_back(i);
    }

    for_each (vct.begin(), vct.end(), print);
    cout << endl;
}
