#include "Apple.h"
#include "Orange.h"

class ProductFactory
{
    public:
        ProductFactory();
        Product* CreateProduct(char *name);
};
