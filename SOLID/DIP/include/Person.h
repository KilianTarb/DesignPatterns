#pragma once
#include "vector"
#include "string"
using namespace std;

class Person {
    public:
        Person(char *first_name, char *last_name);
        string FirstName;
        string LastName;
        vector<Person *> Parents;
        vector<Person *> Children;
        vector<Person *> Siblings;
};
