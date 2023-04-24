#include <iostream>
#include "Invoice.h"

int main(){
    Invoice invoice1("ABC100", "Widget A", 4, 10);
    // Test getters
    std::cout << "Invoice number: " << invoice1.getPartNumber() << std::endl;
    std::cout << "Description: " << invoice1.getDescription() << std::endl;
    std::cout << "Price per item: $" << invoice1.getPrice() << std::endl;
    std::cout << "Quantity: " << invoice1.getQuantity() << std::endl;
    std::cout << "Invoice amount: $" << invoice1.getInvoiceAmount() << std::endl;

    // Test setters
    invoice1.setPartNumber("DEF456");
    invoice1.setDescription("Widget B");
    invoice1.setPrice(12);
    invoice1.setQuantity(3);

    // Test getters again
    std::cout << "\n";
    std::cout << "Invoice number: " << invoice1.getPartNumber() << std::endl;
    std::cout << "Description: " << invoice1.getDescription() << std::endl;
    std::cout << "Price per item: $" << invoice1.getPrice() << std::endl;
    std::cout << "Quantity: " << invoice1.getQuantity() << std::endl;
    std::cout << "Invoice amount: $" << invoice1.getInvoiceAmount() << std::endl;
    std::cout <<"\n";


}