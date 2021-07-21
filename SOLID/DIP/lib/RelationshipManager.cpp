#include "RelationshipManager.h"
#include "iostream"
RelationshipManager::RelationshipManager() { }

int RelationshipManager::_findPersonByNames(vector<Person *> person_list, string first_name, string last_name) {
    return 0;
}

void RelationshipManager::AddParent(Person *parent, Person *child) {
    child->Parents.push_back(parent);
    parent->Children.push_back(child);
}

void RelationshipManager::AddSibling(Person *person, Person *sibling) {
    person->Siblings.push_back(sibling);
}

void RelationshipManager::RemoveParent(Person *parent, Person *child) {
    parent->Children.erase(parent->Children.begin() + _findPersonByNames(parent->Children, child->FirstName, child->LastName));
    child->Parents.erase(child->Parents.begin() + _findPersonByNames(child->Parents, parent->FirstName, parent->LastName));
}

void RelationshipManager::RemoveSibling(Person *person, Person *sibling) {
    person->Siblings.erase(person->Siblings.begin() + _findPersonByNames(person->Siblings, sibling->FirstName, sibling->LastName));
    sibling->Siblings.erase(sibling->Siblings.begin() + _findPersonByNames(sibling->Siblings, person->FirstName, person->LastName));
}
