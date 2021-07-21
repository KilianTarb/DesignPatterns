#pragma once
#include "Person.h"

class IRelationshipManager
{
    public:
        virtual void AddParent(Person *child, Person *parent)       = 0;
        virtual void AddSibling(Person *sibling, Person *person)    = 0;
        virtual void RemoveParent(Person *child, Person *parent)    = 0;
        virtual void RemoveSibling(Person *sibling, Person *person) = 0;
};
