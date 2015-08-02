#ifndef _OPERATIONFACTORY_H
#define _OPERATIONFACTORY_H

#include <iostream>
#include <string>

#include "Operation.h"

using std::string;
using std::cout;

class OperationFactory
{
public:
    static Operation* createOperate(string operate) {
        Operation* oper = NULL;
        cout << "operator: " << operate;
        if (operate.compare("+") == 0) {
            cout << "+";
            oper = new OperationAdd();
        } else if (operate.compare("-") == 0) {
            cout << "-";
            oper = new OperationSub();
        } else if (operate.compare("*") == 0) {
            cout << "*";
            oper = new OperationMul();
        } else if (operate.compare("/") == 0) {
            cout << "/";
            oper = new OperationDiv();
        }

        return oper;
    }
};

#endif
