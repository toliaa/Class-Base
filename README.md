# Class-Base
# C++ Class Hierarchy Example

This C++ program demonstrates a class hierarchy with polymorphism. It includes a base class (`Base`) and two derived classes (`DerA` and `DerB`). Additionally, a class (`DerAB`) is derived from both `DerA` and `DerB` using virtual inheritance.

## Program Structure

- **MyForm.h**: Header file for the program.

- **main.cpp**: The main source file containing the `main` function.

## Classes

### Base

- The base class with a virtual function `myname()`.

### DerA

- Derived from `Base`, overrides `myname()`.

### DerB

- Derived from `Base`, overrides `myname()`.

### DerAB

- Derived from both `DerA` and `DerB` using virtual inheritance.
- Overrides `myname()`.

## Program Execution

1. Creates objects for each class in the hierarchy.
2. Calls the `myname` function for each object.
3. Creates an array of pointers to the base class and dynamically allocates objects.
4. Calls the `myname` function for objects through pointers.
5. Frees memory from dynamically created objects.

## Building and Running

- Build the program using a C++ compiler.
- Run the compiled executable.

## Usage

- This program is a demonstration of polymorphism in C++ class hierarchies.
- Feel free to modify and experiment with the classes and their behaviors.

## Notes

- Ensure you have a compatible C++ compiler installed.

