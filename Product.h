#include <string>
using namespace std;

class Product {
  private:
    int productId;
    string productName;
    float price;

    void changePrice(float f);

  public:
    int getProductId();
    string getProductName();
    float getPrice();
};