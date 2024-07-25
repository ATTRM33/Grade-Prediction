#include "GradePredictor.h"
#include <sstream>


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
	for (size_t i = 0; i < categories.size(); ++i) {
		if (categories[i].getName() == categoryName) {
			return categories[i].getSummary();
		}
	}
	return "Category not found.";
}

double  GradePredictor::getOverallGrade() const {
	double weightedSum = 0;
	double weightSum = 0;

	for (size_t i = 0; i < categories.size(); ++i) {
		double currentGrade = categories[i].findCurrentGrade();
		weightedSum += currentGrade * categories[i].getWeight();
		weightSum += categories[i].getWeight();
	}

	return (weightSum != 0) ? (weightedSum / weightSum) : 0;
}

void  GradePredictor::editAssignment(const std::string& categoryName, const std::string& assignmentName, float newScore){
	for (int i = 0; i < categories.size(); ++i) {
		if (categories[i].getName() == categoryName) {
			categories[i].editAssignment(assignmentName, newScore);
			return;
		}
	}
}

void GradePredictor::readAssignmentsFromFile(const std::string& filePath) {
	std::vector<std::string> lines = FileHandler::readFromFile(filePath);
	categories.clear();
	Category* currentCategory = nullptr;

	for (size_t i = 0; i < lines.size(); ++i) {
		std::istringstream iss(lines[i]);
		std::string type;
		iss >> type;

		if (type == "Category:") {
			std::string name;
			double weight;
			iss >> name >> weight;
			categories.push_back(Category(name, weight));
			currentCategory = &categories.back();
		}
		else if (type == "Assignment:") {
			std::string name;
			double pointsEarned, totalPoints;
			bool isTurnedIn;
			iss >> name >> pointsEarned >> totalPoints >> isTurnedIn;
			if (currentCategory != nullptr) {
				currentCategory->addAssignment(Assignment(name, pointsEarned, totalPoints, isTurnedIn));
			}
		}
	}
}