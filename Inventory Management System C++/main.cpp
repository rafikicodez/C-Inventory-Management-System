#include <iostream>
#include <vector>
#include "product.h"
#include "inventory.h"

int main() {
    Inventory inventory;

    while (true) {
        std::cout << "=== Inventory Management System ===" << std::endl;
        std::cout << "1. Add product" << std::endl;
        std::cout << "2. Remove product" << std::endl;
        std::cout << "3. List all products" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::cout << "Enter product details: " << std::endl;
                std::string name;
                double price;
                int quantity;
                std::cout << "Name: ";
                std::cin >> name;
                std::cout << "Price: ";
                std::cin >> price;
                std::cout << "Quantity: ";
                std::cin >> quantity;
                inventory.addProduct(Product(name, price, quantity));
                std::cout << "Product added successfully!" << std::endl;
                break;
            }
            case 2: {
                std::cout << "Enter the product name to remove: ";
                std::string name;
                std::cin >> name;
                if (inventory.removeProduct(name)) {
                    std::cout << "Product removed successfully!" << std::endl;
                } else {
                    std::cout << "Product not found!" << std::endl;
                }
                break;
            }
            case 3:
                inventory.listAllProducts();
                break;
            case 4:
                std::cout << "Exiting program..." << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice! Please try again." << std::endl;
                break;
        }
    }
}