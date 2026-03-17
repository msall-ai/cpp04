# cpp04 - Polymorphism and Abstract Classes

By Fatoumata SALL

A C++98 project exploring object-oriented programming concepts including polymorphism, inheritance, abstract classes, and deep copying.

## Project Overview

This project consists of three exercises demonstrating increasingly advanced C++ OOP concepts:

### Exercise 00: Basic Polymorphism
- **File**: `ex00/`
- **Concepts**: 
  - Virtual functions and method overriding
  - Correct polymorphism with virtual destructors
  - Incorrect polymorphism (non-virtual functions)
- **Classes**: `Animal`, `Dog`, `Cat`, `WrongAnimal`, `WrongCat`
- **Key Features**:
  - Demonstrates the difference between virtual and non-virtual function calls
  - Shows proper memory management with virtual destructors
  - Includes examples of both correct and incorrect polymorphism patterns

### Exercise 01: Deep Copying with Dynamic Memory
- **File**: `ex01/`
- **Concepts**:
  - Deep copy semantics
  - Copy constructors and assignment operators
  - Memory management with member objects
- **Classes**: `Animal`, `Dog`, `Cat`, `Brain`
- **Key Features**:
  - `Brain` class containing an array of ideas
  - Deep copying ensures each animal has independent Brain memory
  - Tests array initialization and proper cleanup
  - Demonstrates that copying a Dog creates independent Brain instances

### Exercise 02: Abstract Classes
- **File**: `ex02/`
- **Concepts**:
  - Pure virtual functions (abstract methods)
  - Abstract base classes that cannot be instantiated
  - Polymorphic behavior through abstract interfaces
- **Classes**: `AAnimal` (abstract), `Dog`, `Cat`, `Brain`
- **Key Features**:
  - `AAnimal` cannot be instantiated directly (pure virtual methods)
  - `Dog` and `Cat` must implement pure virtual methods
  - Demonstrates the use of abstract classes as interfaces
  - Prevents accidental instantiation of incomplete base classes

## Compilation & Testing

### Build Individual Exercises
```bash
# Exercise 00
cd ex00
make
./polymorphism

# Exercise 01
cd ../ex01
make
./animals

# Exercise 02
cd ../ex02
make
./animals
```

### Clean Up
```bash
# Clean object files
make clean

# Remove object files and executable
make fclean

# Rebuild
make re
```

## Test Results

All exercises compile successfully with `-Wall -Wextra -Werror -std=c++98` flags:

- **ex00**: ✓ Correct and incorrect polymorphism behavior demonstrated
- **ex01**: ✓ Deep copying and memory management working correctly
- **ex02**: ✓ Abstract classes preventing instantiation, polymorphic behavior preserved

## Key Learning Points

1. **Polymorphism**: Virtual functions enable runtime polymorphism, allowing derived classes to override base class behavior
2. **Virtual Destructors**: Critical for proper cleanup when deleting derived objects through base class pointers
3. **Deep Copying**: Essential when classes manage dynamic memory to avoid shallow copy issues
4. **Abstract Classes**: Pure virtual functions create contracts that derived classes must fulfill
5. **Memory Safety**: Proper use of constructors, destructors, copy constructors, and assignment operators

## Compiler Requirements

- C++98 standard
- Must compile without warnings with `-Wall -Wextra -Werror` flags
