// Appraisal_utils.h
#pragma once
#include <unordered_map>

namespace calculations {
    class Appraisal {
        double value;
    public:
        Appraisal(double value);
        operator double() const;
        bool operator>=(const Appraisal& other) const;
        bool operator<=(const Appraisal& other) const;
    };

    void checkYearlyAppraisal(int employeeID);
    void calculateAppraisal(std::unordered_map<int, std::string>& hrEmployees);
}
