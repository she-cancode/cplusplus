# Procedural Programming Foundations in C++

A collection of console-based applications developed as part of the first-year Procedural Programming module at Eduvos. These projects were designed to solidify foundational programming concepts using *C++ Programming: Program Design including Data Structures* by D.S. Malik as a guiding text. 

The repository serves as a portfolio piece demonstrating a practical understanding of control structures, data validation, modular design, and early data aggregation techniques.

## 🛠️ Tech Stack & Concepts
* **Language:** C++
* **Paradigm:** Procedural Programming
* **Core Principles Demonstrated:**
  * Memory management and standard variable types.
  * Control flow (loops, `if/else`, `switch` statements).
  * Function-based modular design and parameter passing.
  * Array manipulation and basic statistical aggregation (min, max, average).
  * User input validation and error handling.

---

## 📂 Projects Included

### 1. Campus Cafeteria Ordering System (`Cafeteria.cpp`)
A point-of-sale simulator that allows users to select items from a predefined menu, specify quantities, and automatically calculate billing totals. 
* **Focus:** `struct` implementation, `while` loops, input validation, and formatting console output (`iomanip`).
* **Features:**
  * Enforces a maximum cart limit of 10 items.
  * Handles invalid user inputs (e.g., negative quantities or out-of-bounds menu selections).
  * Calculates subtotal, applies a 5% discount for orders over R300, and generates a formatted receipt.

### 2. Cinema Ticket Booking System (`Cinema.cpp`)
A self-service ticketing system designed to reduce queue times through an automated checkout process.
* **Focus:** Modular design. The logic is heavily abstracted into single-responsibility functions rather than living entirely inside `main()`.
* **Features:**
  * Uses `std::vector` to dynamically store ticket selections.
  * Modular functions for capturing customer details, displaying menus, and validating selections.
  * Implements conditional logic to apply a 12% discount for bulk purchases (5+ tickets totaling over R600).

### 3. Gym Weekly Attendance Analysis (`GymWeekly.cpp`)
A data tracker that records daily gym attendance over a 7-day period and produces a statistical summary report. 
* **Focus:** Arrays, iteration, and foundational data aggregation. This project acts as an early stepping stone into data processing and analysis.
* **Features:**
  * Iterates through a standard array to capture daily data points.
  * Computes the sum, average, maximum, and minimum values of the dataset.
  * Classifies the dataset into "Busy" or "Slow" weeks based on a calculated threshold.

---

## 🚀 How to Run

To compile and run any of these files locally, you will need a C++ compiler (like GCC) installed on your machine.

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/procedural-programming-cpp.git
   ```
2. Navigate to the directory:
   ```bash
   cd procedural-programming-cpp
   ```
3. Compile a specific file (e.g., the Cafeteria system):
   ```bash
   g++ Cafeteria.cpp -o Cafeteria
   ```
4. Run the executable:
   ```bash
   ./Cafeteria   # On Mac/Linux
   Cafeteria.exe # On Windows
   ```

---
*Created by Terinique as part of a BSc Information Technology (Data Science) curriculum.*