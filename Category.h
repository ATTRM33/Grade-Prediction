#ifndef CATEGORY_H
#define CATEGORY_H

#include <string>
#include <vector>
#include "Assignment.h"


class Category
{ private:
	std::string name;
	double weight;
	std::vector<Assignment> assignments;
public:
    Category(const std::string name, double weight);
    void addAssignment(const Assignment& assignment);
    void editAssignment(const std::string& assignmentName, float newScore);
    double findCurrentGrade() const;
    double findProjectedGrade() const;
    std::string getSummary() const;
    std::string getName() const;
    double getWeight() const;
    const std::vector<Assignment>& getAssignments() const;
	

};

#endif
