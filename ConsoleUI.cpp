#include "ConsoleUI.h"
#include <iostream>

void ConsoleUI::displayMenu() {
	std::cout << "***Grade Predictor Main Menu***" << std::endl;
    std::cout << "\n";
    std::cout << "1. Add Category" << std::endl;
    std::cout << "2. Add Assignment" << std::endl;
    std::cout << "3. Display Category Summary" << std::endl;
    std::cout << "4. Edit Assignment" << std::endl;
    std::cout << "5. Load Assignments from File" << std::endl;
    std::cout << "6. Display Overall Grade" << std::endl;
    std::cout << "7. Exit" << std::endl;
	
    
}


void ConsoleUI::addCategory() {
    std::string name;
    double weight;

    std::cout << "Enter category name: ";
    std::cin >> name;
    std::cout << "Enter category weight: ";
    std::cin >> weight;
    gradePredictor.addCategory(Category(name, weight));

    
}

void ConsoleUI::addAssignment() {
    std::string categoryName;
    std::string assignmentName;
    double pointsEarned;
    double totalPoints;
    bool isTurnedIn;

    std::cout << "Enter category name: ";
    std::cin >> categoryName;
    std::cout << "Enter assignment name: ";
    std::cin >> assignmentName;
    std::cout << "Enter points achieved: ";
    std::cin >> pointsEarned;
    std::cout << "Enter points possible: ";
    std::cin >> totalPoints;
    std::cout << "Is the assignment completed (0 for no, 1 for yes)? ";
    std::cin >> isTurnedIn;

    gradePredictor.addAssignmentToCategory(categoryName, Assignment(assignmentName, pointsEarned, totalPoints, isTurnedIn));

   
}

void ConsoleUI::displayCategorySummary() {
    std::string categoryName;
    std::cout << "Enter category name: ";
    std::cin >> categoryName;
    std::cout << gradePredictor.getCategorySummary(categoryName) << std::endl;
    
}

void ConsoleUI::editAssignment() {
    std::string categoryName;
    std::string assignmentName;
    double newScore;
    std::cout << "Enter category name: ";
    std::cin >> categoryName;
    std::cout << "Enter assignment name: ";
    std::cin >> assignmentName;
    std::cout << "Enter new score: ";
    std::cin >> newScore;
    gradePredictor.editAssignment(categoryName, assignmentName, newScore);
    
}

void ConsoleUI::loadAssignments() {
    std::string filePath;
    std::cout << "Enter file path: ";
    std::cin >> filePath;
    gradePredictor.readAssignmentsFromFile(filePath);
    
    
}

void ConsoleUI::runProgram() {
    int choice;
    do {
        displayMenu();
        std::cout << "Choose from the following: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            addCategory();
            break;
        case 2:
            addAssignment();
            break;
        case 3:
            displayCategorySummary();
            break;
        case 4:
            editAssignment();
            break;
        case 5:
            loadAssignments();
            break;
        case 6:
            std::cout << "Predicted Grade: " << gradePredictor.getOverallGrade() << "%" << std::endl;
            break;
        case 7:
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
        }

        
    } while (choice != 7);

    system("cls");
    
}