#include "inventory.h"
#include <iostream>

void Inventory::addProduct(const Product& product) {
    products.push_back(product);
}

bool Inventory::removeProduct(const std::string& name) {
    for (auto it = products.begin(); it != products.end(); ++it) {
        if (it->getName() == name) {
            products.erase(it);
            return true;
        }
    }
    return false;
}

void Inventory::listAllProducts() const {
    std::cout << "=== Product List ===" << std::endl;
    for (const auto& product : products) {
        std::cout << "Name: " << product.getName() << std::endl;
        std::cout << "Price: $" << product.getPrice() << std::endl;
        std::cout << "Quantity: " << product.getQuantity() << std::endl;
        std::cout << std::endl;
    }
}