#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "print.cpp"
using namespace std;

class Person
{
    public:
        Person(string first_name, string last_name)
            :first_name_(first_name), last_name_(last_name)
        {}

        string firstname() const {return first_name_;}
        string lastname() const {return last_name_;}

        friend ostream& operator << (ostream&,const Person&);

    private:
        string first_name_;
        string last_name_;
};

ostream& operator << (ostream& output, const Person& p)
{
    output << p.first_name_ << ", " << p.last_name_;
    return output;
}

bool person_comparison(const Person& p1, const Person& p2)
{
    return p1.lastname() < p2.lastname() ||
        (p1.lastname() == p2.lastname() && p1.firstname() < p2.firstname());
}

int main()
{
    vector<Person> persons;
    persons.push_back(Person("San","Zhang"));
    persons.push_back(Person("Si","Li"));
    persons.push_back(Person("Wu","Li"));

    PRINT_ELEMENTS(persons, "Before sort:");
    sort(persons.begin(), persons.end(), person_comparison);
    PRINT_ELEMENTS(persons, "After sort:");
}
