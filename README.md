# CMPSC 272 — Multi-File Project Refactoring

## Project overview
This project refactors the `Page` and `Book` classes out of `main.cpp` into separate header (`.h`) and implementation (`.cpp`) files.

## File organization
- `Page.h` — Page class declaration and include guard
- `Page.cpp` — Page member-function definitions using `Page::`
- `Book.h` — Book class declaration; includes `Page.h`
- `Book.cpp` — Book member-function definitions using `Book::`
- `main.cpp` — Demonstrates both classes by including their headers
- `Composition_Lab_UML.png` — UML class diagram
- `CMakeLists.txt` — Builds all three source files

## Aggregation / has-a relationship
`Book` contains a `Page` data member named `currentPage`. The UML diagram shows this relationship.

## Build and run
Open this folder in CLion, allow CMake to reload, then build and run the `Composition_Lab` target.

You can also compile from a terminal:
```bash
g++ -std=c++20 -Wall -Wextra -pedantic main.cpp Page.cpp Book.cpp -o Composition_Lab
./Composition_Lab
```
