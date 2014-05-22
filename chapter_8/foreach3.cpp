#include <iostream>
#include <vector>
#include <algorithm>
#include "genera.h"
using namespace std;

class MeanValue
{
    private:
        long num;
        long sum;
    public:
        MeanValue(): num(0), sum(0) {}

        void operator() (int elem)
        {
            num++;
            sum += elem;
        }

        double value()
        {
            return static_cast<double>(sum) / static_cast<double>(num);
        }
        
        // no return value declartion
        operator double ()
        {
            return static_cast<double>(sum) / static_cast<double>(num);
        }
};

int main()
{
    vector<int> coll;
    generate_n(back_inserter(coll),
              8,
              IntSequence(1));
    MeanValue mv = for_each(coll.begin(), coll.end(), MeanValue());
    cout << "mean value: " << mv.value() << endl;

    double d_mv = for_each(coll.begin(), coll.end(), MeanValue());
    cout << "mean value: " << d_mv << endl;
}
