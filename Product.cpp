#include "Product.h"
#include <string>
using namespace std;


int Product::getProductId() {
  return productId;
}

string Product::getProductName() {
  return productName;
}

float Product::getPrice() {
  return price;
}