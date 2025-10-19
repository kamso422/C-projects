# WARP.md

This file provides guidance to WARP (warp.dev) when working with code in this repository.

Repository overview
- This repo contains multiple independent C programs.
  - TicTacToe/: a small CLI game split across main.c, tictactoe.c, and tictactoe.h
  - project1..project9/: standalone single-file programs (each has its own main).
- There is no top-level build system, test harness, or linter configuration. Each program is compiled and run individually.

Common commands
- Create a build output directory (used in commands below):
  ```bash
  mkdir -p build
  ```
- Build and run TicTacToe:
  ```bash
  gcc -Wall -Wextra -O2 TicTacToe/main.c TicTacToe/tictactoe.c -o build/tictactoe && ./build/tictactoe
  ```
- Build and run a specific problem program (replace N with 1–9):
  ```bash
  gcc -Wall -Wextra -O2 projectN/problemN.c -o build/problemN && ./build/problemN
  # example
  gcc -Wall -Wextra -O2 project4/problem4.c -o build/problem4 && ./build/problem4
  ```
- Quick cleanup of built artifacts:
  ```bash
  rm -rf build
  ```
- Linting/tests:
  - No linter or unit-test tooling is configured in this repo. Use the compiler’s warnings (e.g., -Wall -Wextra) as a lightweight check during development.

High-level architecture and structure
- TicTacToe/
  - tictactoe.h declares the game interface:
    - displayBoard(char board[3][3])
    - checkWin(char board[3][3], int row, char player[], char winner[])
    - checkRows/Columns/Diagonal helpers
  - tictactoe.c implements the above helpers. Winning logic is factored into checkRows, checkColumns, and checkDiagonal, each returning 1 when a line is complete.
  - main.c owns program flow and state:
    - Initializes a 3x3 board of '_' chars, prompts for two player names, alternates turns, validates inputs, writes 'X'/'O', and calls checkWin after each move.
    - On win, copies the active player name into winner and exits; after 9 moves without a win, declares a draw.
- project1..project9/
  - Each directory contains a single problemN.c with a main(). These are independent programs that perform numeric computations (e.g., sums over ranges, digit products, primality loops).
  - No shared headers or libraries; compile each program directly as shown above.

Notes
- These programs rely only on the C standard library (stdio.h, string.h, etc.). No external dependencies are required.
- If you introduce shared utilities across projects in the future, prefer creating a common include/ and src/ with a simple Makefile or CMakeLists.txt so they can be built together.
