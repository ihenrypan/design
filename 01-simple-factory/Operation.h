#ifndef _OPERATION_H
#define _OPERATION_H

#include <stdexcept>

class Operation
{
    public:
        Operation() : m_fNumberA(0.0), m_fNumberB(0.0) {  }

        virtual double GetResult() {
            return 0.0;
        }
        void SetNumberA(double fNumberA) { m_fNumberA = fNumberA; }
        void SetNumberB(double fNumberB) { m_fNumberB = fNumberB; }

        virtual ~Operation() { }
    protected:
        double m_fNumberA;
        double m_fNumberB;
};

class OperationAdd : public Operation
{
    public:
        double GetResult() {
            return m_fNumberA + m_fNumberB;
        }
};

class OperationSub : public Operation
{
    public:
        double GetResult() {
            return m_fNumberA - m_fNumberB;
        }
};

class OperationMul : public Operation
{
    public:
        double GetResult() {
            return m_fNumberA * m_fNumberB;
        }
};

class OperationDiv : public Operation
{
    public:
        double GetResult() {
            if (m_fNumberB == 0.0) {
                throw std::runtime_error("Can't divide 0 !"); 
            }
            return m_fNumberA / m_fNumberB;
        }
};

#endif

