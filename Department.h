#include <vector>
#include <string>
#include "SalesRep.h"
using namespace std;

class Department {
  private:
    float commission;
    SalesRep departmentManager;
    vector<SalesRep> salesReps;

    void addSalesRepToDep(SalesRep x);

  public:
    float totalCommission(float f);
    void makeDepartmentManager(SalesRep s);
    void addSalesRep(SalesRep depManager, SalesRep newEmpl);
    SalesRep findSalesRep(int id);
    float getCommissionAmount(float f);
};