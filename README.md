# Module_3 Grade Predictor
A simple program that allows users to input assignments to calculate their current grade and projected grade. The user can additionally use a formatted .txt file to read in assignments.

## File Description
- `Main_Program.cpp`: Contains the main function and starts the program.
- `Assignment.h` and `Assignment.cpp`: contain the attributes for each assignment.
- `FileHandler.h` and `FileHandler.cpp`: Contain the methods for reading a text file  
- `ConsoleUI.h` and `ConsoleUI.cpp`: Contains the user interfaces. Controls the users selections.
- `Category.h` and `Category.cpp`: Contains attributes of each category such as name, weight, and a summary of all assignments within the category.
- `GradePredictor.h` and `GradePredictor.cpp`: contains the logic of the program such as adding a category, editing assignments, and reading the values from the file and placing them into assignments and categories.
## How to run the program
- build and compile the files.
- load "test.txt" file as the filepath
## Program Features
- read in grades from files
- add to a category
- edit grades
- predict grade
- calculate current grade
