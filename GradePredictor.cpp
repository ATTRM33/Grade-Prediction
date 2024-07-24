#include "GradePredictor.h"
void GradePredictor::addCategory(const Category & category) {
	categories.push_back(category);
}
void  GradePredictor::addAssignmentToCategory(const std::string& categoryName, const Assignment& assignment) {
	for (Category& c : categories) {
		if (c.getName() == categoryName) {
			c.addAssignment(assignment);
		}
	}
}
std::string  GradePredictor::getCategorySummary(const std::string& categoryName) const {
	for (const Category& c : categories) {
		if (c.getName() == categoryName) {
			return c.getSummary();
		}
	}
}
float  GradePredictor::getOverallGrade() const {

}
void  GradePredictor::editAssignment(const std::string& categoryName, const std::string& assignmentName, float newScore){

}