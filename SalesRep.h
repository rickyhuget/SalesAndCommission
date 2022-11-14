#include <string>

class SalesRep {
  private:
    int employeeId;
    std::string lastName;
    std::string firstName;

  public:
    int getEmployeeId();
    std::string getEmplLastName();
};