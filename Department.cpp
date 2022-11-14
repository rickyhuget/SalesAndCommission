#include "Department.h"
#include <vector>
#include <string>
using namespace std;


float Department::totalCommission(float f) {
  return (f * commission);
}

void Department::makeDepartmentManager(SalesRep s) {
  departmentManager = s;
}

void Department::addSalesRepToDep(SalesRep s) {
  salesReps.push_back(s);
}

void Department::addSalesRep(SalesRep DepManager, SalesRep newEmpl) {
  if (DepManager.getEmployeeId() == departmentManager.getEmployeeId()) {
    addSalesRepToDep(newEmpl);
  }
}

SalesRep Department::findSalesRep(int id) {
  for (int i = 0; i < salesReps.size(); i++) {
    if (id == salesReps[i].getEmployeeId()) {return salesReps[i];}
  }
}

float Department::getCommissionAmount(float f) {
  return commission;
}