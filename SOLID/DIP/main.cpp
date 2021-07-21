#include "iostream"
#include "IRelationshipManager.h"
#include "RelationshipManager.h"
#include "Person.h"

using namespace std;

int main() {
    IRelationshipManager *manager = new RelationshipManager();

    Person *garry = new Person("Garry", "Doe");
    Person *sarah = new Person("Sarrh", "Doe");
    Person *liam = new Person("Liam", "Doe");

    manager->AddParent(garry, liam);
    manager->AddParent(sarah, liam);

    cout << "Liam's Parents:" << endl;
    for (int i = 0; i < liam->Parents.size(); i++) {
        cout << liam->Parents.at(i)->FirstName << " " << liam->Parents.at(i)->LastName << endl;
    }
    
    return 0;
}
