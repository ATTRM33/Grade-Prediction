#ifndef CONSOLEUI_H
#define CONSLOEUI_H

#include "GradePredictor.h"

class ConsoleUI {
private:
	GradePredictor gradePredictor;
	void displayMenu();
	void addCategory();
	void displayCategorySummary();
	void editAssignment();
	void loadAssignments();
	void addAssignment();
public:
	void runProgram();
};
#endif // !CONSOLEUI_H
