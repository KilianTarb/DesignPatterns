#include "iostream"
#include "include/ProductFactory.h"

using namespace std;

/*
 * Mockup code that will be using the Product library. 
 * As displayed by use of the FactoryMethod, there is no dependency on the Apple or Orange classes
 * as they are abstracted by the Product class.
 */
int main() {
    ProductFactory factory;

    Product* apple = factory.CreateProduct("Apple");
    cout << "Apple: " << apple->GetPrice() << endl;

    Product *orange = factory.CreateProduct("Orange");
    cout << "Orange: " << orange->GetPrice() << endl;

    return 0;
}
