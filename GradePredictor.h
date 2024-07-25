#ifndef GRADEPREDICTOR_H
#define GRADEPREDICTOR_H

#include <vector>
#include <string>
#include "Category.h"
#include "FileHandler.h"

class GradePredictor {
private:
    std::vector<Category> categories;

public:
    void addCategory(const Category& category);
    void addAssignmentToCategory(const std::string& categoryName, const Assignment& assignment);
    std::string getCategorySummary(const std::string& categoryName) const;
    double getOverallGrade() const;
    void editAssignment(const std::string& categoryName, const std::string& assignmentName, float newScore);
    void readAssignmentsFromFile(const std::string& filePath);
};

#endif // GRADEPREDICTOR_H

