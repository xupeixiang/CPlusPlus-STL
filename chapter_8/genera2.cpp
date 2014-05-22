#include <iostream>
#include <list>
#include <algorithm>
#include "../chapter_5/print.cpp"
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

int main()
{
    list<int> coll;
    IntSequence seq(1);
    // pass by reference -- seq
    // if will continue with 5
    generate_n<back_insert_iterator<list<int> >,
               int, IntSequence&>(back_inserter(coll),
               4,
               seq);
    PRINT_ELEMENTS(coll);

    // pass by value -- a copy
    generate_n(back_inserter(coll),
               4,
               IntSequence(42));
    PRINT_ELEMENTS(coll);

    // continue with 5 as seq is changed in the first insert
    generate_n(back_inserter(coll),
               4,
               seq);
    PRINT_ELEMENTS(coll);

    // continue with 5 again
    generate_n(back_inserter(coll),
               4,
               seq);
    PRINT_ELEMENTS(coll);

}
