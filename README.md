# Game of Life - Cellular Automaton Simulation

## Introduction
This C++ project implements Conway's Game of Life, a cellular automaton devised by mathematician John Conway. The Game of Life is a zero-player game, meaning its evolution is determined by its initial state, requiring no further input. The grid consists of cells that are either alive or dead, following specific rules for their evolution.

## Project Overview
The project consists of the following components:

- `Cellule.h`: Header file for the Cellule class representing a single cell.
- `Cellule.cpp`: Implementation file for the Cellule class.
- `JeuDeLaVie.h`: Header file for the JeuDeLaVie class managing the game.
- `JeuDeLaVie.cpp`: Implementation file for the JeuDeLaVie class.
- `main.cpp`: The main file containing the program execution logic.

## Usage
1. Compile the source files using a C++ compiler.
2. Run the compiled executable.
3. Input the height and width of the grid.
4. Choose between initializing the grid randomly or manually specifying the configuration.
5. Watch the simulation of the Game of Life in the console window.

## Files Description
- `Cellule.h` and `Cellule.cpp`: These files define the Cellule class responsible for managing individual cell states.
- `JeuDeLaVie.h` and `JeuDeLaVie.cpp`: These files define the JeuDeLaVie class, handling the overall grid and its evolution.
- `main.cpp`: Contains the main program logic, including user interaction and simulation.

## How to Run
- Ensure you have a C++ compiler installed.
- Compile the source files using the compiler.
- Execute the compiled program.
- Follow the on-screen instructions to initialize the grid and start the simulation.

## Additional Notes
- The simulation runs for a fixed number of generations (50,000 in this case) before stopping.
- Use the provided options to choose between random initialization or manual cell configuration.

## Dependencies
- The code uses standard C++ libraries and headers.
- The Windows-specific `Windows.h` library is utilized for console manipulation.

## Credits
- Created by Channel NIANGA.

