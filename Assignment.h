#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H


#include <string>

class Assignment
{ private:
	std::string name;
	double pointsEarned;
	double totalPoints;
	bool isTurnedIn;

public:
	Assignment(std::string name, double pointsEarned, double totalPoints, bool isTurnedIn);
	double getPercentage();

	std::string getName() const;
	double getPointsEarned() const;
	double getTotalPoints() const;
	bool getIsTurnedIn() const;

	void setPointsEarned(float points);
	void setIsTurnedIn(bool completed);
};

#endif // !ASSIGNMENT_H