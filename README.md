# Employee Appraisal System

## Project Overview
This system automates the performance appraisal process within an organization. It manages user roles including employees, bosses, and HR, facilitating interactions through a command-line interface.

## Features
- **Login Systems**: Secure login for employees, bosses, and HR.
- **Appraisal Handling**: Employees can fill self-assessments, bosses provide ratings, and HR manages final appraisals.
- **File Management**: Utilizes text files for storing user credentials and appraisal data.

## Getting Started

### Prerequisites
- GCC Compiler

### Building the Project
Clone the repository and compile the project using GCC:

```bash
git clone https://github.com/yourusername/Employee-Appraisal-System-Cpp.git
cd Employee-Appraisal-System-Cpp
g++ -o appraisal_system main_app.cpp appraisal_calculations.cpp
```

### Running the Project
Run the compiled executable to start the program:

```bash
./appraisal_system
```

## File descriptions
- **appraisal_utils.h**: Declares the Appraisal class and calculation functions.
- **appraisal_calculations.cpp**: Implements the functions for handling appraisals.
- **main_app.cpp**: Main application logic for user interactions.
- **data/*.txt**: Text files that store credentials and appraisal records.

