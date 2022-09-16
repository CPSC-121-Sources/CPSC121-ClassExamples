/*
 *  Crandall's Receipt Generator
 */

#include <iostream>


int main() {
    // Allocate and set line items and their costs
    //  Line item #1 - Apples - $3.78
    double applesCostUSD = 3.78;
    //  Line item #2 - Oranges - $8.99
    double orangesCostUSD = 8.99;
    //  Line item #3 - Milk - $3.89
    double milkCostUSD = 3.89;

    // std::cout << "Apples: " << applesCostUSD << std::endl;

    // Allocate subtotal and total
    double subtotalUSD = 0.0;
    double totalUSD = 0.0;

    // Allocate tax rate
    double salesTaxRatePct = 8.3;
    double salesTaxRate = salesTaxRatePct / 100;

    // Calculate subtotal
    subtotalUSD = applesCostUSD + orangesCostUSD + milkCostUSD;

    // Calculate tax cost
    double taxCostUSD = subtotalUSD * salesTaxRate;

    // Calculate total
    totalUSD = subtotalUSD + taxCostUSD;

    // Print out receipt

    std::cout << "************************************" << std::endl;
    std::cout << "Company name: Crandall's Grocery" << std::endl;
    std::cout << "************************************" << std::endl;
    std::cout << "Apples: $" << applesCostUSD << std::endl;
    std::cout << "Oranges: $" << orangesCostUSD << std::endl;
    std::cout << "Milk: $" << milkCostUSD << std::endl;
    std::cout << std::endl;
    std::cout << "Subtotal: $" << subtotalUSD << std::endl;
    std::cout << "Tax: $" << taxCostUSD << std::endl;
    std::cout << "Total: $" << totalUSD << std::endl;

}
