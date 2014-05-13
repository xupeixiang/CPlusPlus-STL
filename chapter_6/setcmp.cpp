#include <iostream>
#include <set>
#include "../chapter_5/print.cpp"
using namespace std;

// type of sorting criterion
template <class T>
class RunTimeCmp
{
    public:
        enum cmp_mode {normal, reverse};

    private:
        cmp_mode mode;

    public:
        RunTimeCmp(cmp_mode m = normal):mode(m){}
        
        bool operator() (const T& t1, const T& t2) const 
        {
            return mode == normal? t1 < t2 : t2 < t1;
        }
        
        bool operator== (const RunTimeCmp& rc) 
        {
            return mode == rc.mode;
        }
};

typedef set<int, RunTimeCmp<int> > RunTimeIntSet;

//forward declaration
void fill(RunTimeIntSet& set);

int main()
{
    RunTimeIntSet coll1;
    fill(coll1);
    PRINT_ELEMENTS(coll1, "coll1: ");

    RunTimeCmp<int> reverse_order(RunTimeCmp<int>::reverse);
    RunTimeIntSet coll2(reverse_order);
    fill(coll2);
    PRINT_ELEMENTS(coll2, "coll2: ");

    coll1 = coll2;
    coll1.insert(3);
    PRINT_ELEMENTS(coll2, "coll2: ");
    PRINT_ELEMENTS(coll1, "coll1: ");
    
    if (coll1.value_comp() == coll2.value_comp())
    {
        cout << "same sorting criterion!" << endl;
    }
    else
    {
        cout << "different sorting criterion!" << endl;
    }
}

void fill (RunTimeIntSet& set)
{
    set.insert(4);
    set.insert(7);
    set.insert(1);
    set.insert(5);
    set.insert(6);
    set.insert(2);
    set.insert(5);
    set.insert(8);
}

