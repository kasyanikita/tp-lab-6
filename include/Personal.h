// Copyright 2021 Kasyanov
#ifndef INCLUDE_PERSONAL_H_
#define INCLUDE_PERSONAL_H_

#include "Employee.h"
#include "Interfaces.h"
#include <string>

class Personal: public Employee, public WorkBaseTime {
 public:
    void PrintInfo() const;
    int CalcBase(int, int) const;
    int CalcBonus() const;
 protected:
    int salary;
};

class Driver : public Personal {
 public:
    Driver(int, std::string, Position, int);
    std::string GetPosition() const;
    void Calc();
    int CalcBonus() const;
};

class Cleaner : public Personal {
 public:
    Cleaner(int, std::string, Position, int);
    std::string GetPosition() const;
    void Calc();
};

#endif  // INCLUDE_PERSONAL_H_
