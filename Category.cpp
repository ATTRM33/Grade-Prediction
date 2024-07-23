#include "Category.h"
#include "Assignment.h"

Category::Category(std::string name, double weight):
name(name), weight(weight){

}
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