#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include<iostream>
#include "Product.h"
#include "ProductType.h"
#define SIZE 5
/*
function to create 5 objects of Produt in heap
*/
void createObject(Product* arr[SIZE]);

/*
Function to find and return average ProductPrice
*/
float averageProductPrice(Product* arr[SIZE]);

/*
Function to return productTaxAmount of Product with minimum ProductPrice
*/
float productTaxAmount(Product* arr[SIZE]);

/*
Function to return Maximum productPrice
*/
float maximumProductPrice(Product* arr[SIZE]);

/*
Function to delete heap memory allocation
*/
void freeMemory(Product* arr[SIZE]);

#endif // FUNCTIONALITIES_H
