#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "product.h"

class Inventory {
private:
    std::vector<Product> products;

public:
    void addProduct(const Product& product);
    bool removeProduct(const std::string& name);
    void listAllProducts() const;
};

#endif // INVENTORY_H