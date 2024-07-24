#include "Category.h"
#include "Assignment.h"
#include <iomanip>
#include <sstream>

Category::Category(std::string name, double weight) :
name(name), weight(weight){}

void Category::addAssignment(const Assignment& assignment) {
	assignments.push_back(assignment);
}
double Category::findCurrentGrade() const {

	double totalPointsEarned = 0;
	double totalPointsPossible = 0;

	for (const Assignment& a: assignments) {
		if (a.getIsTurnedIn() == true) {
			totalPointsEarned += a.getPointsEarned();
			totalPointsEarned += a.getTotalPoints();
		}
	}
	return totalPointsEarned / totalPointsEarned * 100;
}

double Category::findProjectedGrade() const {
	double totalPointsEarned = 0;
	double totalPointsPossible = 0;

	for (const Assignment& a : assignments) {
		if (a.getIsTurnedIn() == true) {
			totalPointsEarned += a.getPointsEarned();
			totalPointsEarned += a.getTotalPoints();
		}
	}
	return totalPointsEarned / totalPointsEarned * 100;
}

void Category::editAssignment(const std::string& assignmentName, float newScore) {

	for (Assignment& a : assignments) {
		if (a.getName() == assignmentName) {
			a.setPointsEarned(newScore);
			break;
		}
	}
}

std::string Category::getSummary() const {
	std::ostringstream oss;
	oss << "Category: " << name << "\n";
	oss << "Weight: " << weight << "\n";
	oss << "Assignments:\n";
	for (const Assignment& assignment : assignments) {
		oss << "  - " << assignment.getName() << ": "
			<< assignment.getPointsEarned() << "/" << assignment.getTotalPoints()
			<< (assignment.getIsTurnedIn() ? " (Completed)" : " (Not Completed)")
			<< "\n";
	}
	oss << std::fixed << std::setprecision(2);
	oss << "Current Grade: " << findCurrentGrade() << std::endl;
	oss << "Projected Grade: " << findProjectedGrade() << std::endl;
	return oss.str();
}


std::string Category::getName() const {
	return name;
}

double Category::getWeight() const {
	return weight;
}

const std::vector<Assignment>& Category::getAssignments() const {
	return assignments;
}