#include "algostuff.hpp"
using namespace std;

// add functor
template <class T>
class AddValue
{
    private:
        T theValue; // value to add
    public:
        AddValue(const T& v):theValue(v) {}

        void operator() (T& elem) const
        {
            elem += theValue;
        }
};

int main()
{
    vector<int> coll;
    INSERT_ELEMENTS(coll, 1, 9);

    for_each(coll.begin(), coll.end(),
            AddValue<int>(10));
    PRINT_ELEMENTS(coll);

    // add value of first element to each element
    for_each(coll.begin(), coll.end(),
            AddValue<int>(*coll.begin()));
    PRINT_ELEMENTS(coll);
}
