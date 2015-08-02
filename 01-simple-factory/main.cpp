#include <iostream>

#include "Operation.h"
#include "OperationFactory.h"

using namespace std;

int main() {
    Operation* pOper = OperationFactory::createOperate("/");
    pOper->SetNumberA(3);
    //pOper->SetNumberB(9.8);

    double ret;
    ret = pOper->GetResult();

    cout << "Result: " << ret << endl;
    
    delete pOper;

    return 0;
}

