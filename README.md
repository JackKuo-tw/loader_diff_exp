# Linker Difference Sample Projects

This repository demonstrates linker behavior across different operating systems using a set of CMake projects:

- **ProjectA**: Static library with a global linked list and an add function.
- **ProjectB**: Static library, links to ProjectA.
- **ProjectC**: Shared library, dynamically links to ProjectB, calls `TraceFlagList::Add`.
- **ProjectD**: Shared library, dynamically links to ProjectB, calls `TraceFlagList::Add`.
- **ProjectE**: Executable, links to ProjectC and ProjectD, calls their functions.

## Build Instructions

```sh
mkdir build
cd build
cmake ..
cmake --build .
```

## Project Structure

- ProjectA/
- ProjectB/
- ProjectC/
- ProjectD/
- ProjectE/
- CMakeLists.txt (top-level)
