#ifndef PRODUCT_H
#define PRODUCT_H
#include<iostream>
#include "ProductType.h"
class Product
{
private:
    std::string _productId;
    ProductType _productType;
    float _productPrice;
    std::string _productBrand;

public:
    Product(
        std::string productId,
        ProductType productType,
        float productPrice,
        std::string productBrand
    );
    Product(){}
    ~Product() {
        std::cout<<"\nProduct with ID : "<<productId()<<" is destroyed";
    }
    



    std::string productId() const { return _productId; }

    ProductType productType() const { return _productType; }

    float productPrice() const { return _productPrice; }

    std::string productBrand() const { return _productBrand; }
};

#endif // PRODUCT_H
