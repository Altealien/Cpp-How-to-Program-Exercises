#include <string>

class Invoice{
    public:
       explicit Invoice(std::string partNo,std::string description,int amount, int price){
        partNumber = partNo;
        partDescription = description;
        quantity = amount;
        pricePerItem = price;
    }

    void setPartNumber(std::string partNo){
        partNumber = partNo;
    }

    std::string getPartNumber() const {
        return partNumber;
    }

    void setDescription(std::string description){
        partDescription = description;
    }

    std::string getDescription() const {
        return partDescription;
    }

    void setQuantity(int amount){
        if (amount < 0){
            quantity = 0;
        }
        else{
            quantity = amount;
        }
    }

    int getQuantity() const{
        return quantity;
    }

    void setPrice(int price){
        if(price < 0){
            pricePerItem =0;
        }
        else{
            pricePerItem = price;
        }
    }

    int getPrice() const{
        return pricePerItem;
    }

    int getInvoiceAmount() const{
        int amount = quantity * pricePerItem;
        return amount;
    }
    
    private:
        std::string partNumber;
        std::string partDescription;
        int quantity;
        int pricePerItem;
};