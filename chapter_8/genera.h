#include <iostream>
#include <algorithm>
using namespace std;

class IntSequence
{
    private:
        int value;
    public:
        IntSequence(int initValue): value(initValue) {}

        int operator() ()
        {
            return value++;
        }
};
