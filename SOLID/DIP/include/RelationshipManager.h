#include "vector"
#include "IRelationshipManager.h"

using namespace std;

class RelationshipManager : public IRelationshipManager
{
    private:
        int _findPersonByNames(vector<Person *> person_list, string first_name, string last_name);
    public:
        RelationshipManager();
        virtual void AddParent(Person *parent, Person *child);
        virtual void AddSibling(Person *person, Person *sibling);
        virtual void RemoveParent(Person *parent, Person *child);
        virtual void RemoveSibling(Person *person, Person *sibling);
};
