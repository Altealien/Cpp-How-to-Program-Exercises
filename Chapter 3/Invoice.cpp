#include <iostream>
#include <string>
#include "Invoice.h"

int main(){
    Invoice myInvoice("ABC10","Car paint",1000, 8);
    std::cout << "The part number is " << myInvoice.getPartNumber() << std::endl;
    std::cout << "The description is " << myInvoice.getDescription() << std::endl;
    std::cout << "The invoice is $" << myInvoice.getInvoiceAmount() << std::endl;
    return 0;
}