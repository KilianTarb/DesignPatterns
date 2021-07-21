#include "ProductFactory.h"

ProductFactory::ProductFactory() { }

Product* ProductFactory::CreateProduct(char *name) {
    if (name == "Apple")
        return new Apple();
    else if (name == "Orange")
        return new Orange();
    else
        return nullptr;
}
