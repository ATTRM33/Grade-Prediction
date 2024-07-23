#include "Assignment.h"

#include <iostream>

Assignment::Assignment(std::string name, double pointsEarned, double totalPoints, bool isTurnedIn) :
	name(name), pointsEarned(pointsEarned), totalPoints(totalPoints),isTurnedIn(isTurnedIn)
{

}
double Assignment::getPercentage(){
	if (totalPoints != 0)
		return pointsEarned / totalPoints * 100;
}

std::string Assignment::getName() const {
	return name;
}
double Assignment::getPointsEarned() const {
	return pointsEarned;
}
double Assignment::getTotalPoints() const {
	return totalPoints;
}
bool Assignment::getIsTurnedIn() const {
	return isTurnedIn;
}

void Assignment::setPointsEarned(float points) {
	pointsEarned = points;
	
}
void Assignment::setIsTurnedIn(bool completed) {
	isTurnedIn = completed;
}