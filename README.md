# CoreLib

CoreLib is a modular C++ library designed to provide a collection of utilities for array manipulation, mathematical computations, number operations, and random number generation. The library is organized into distinct modules, each focusing on a specific functionality, making it easy to use, extend, and integrate into other projects.

## Table of Contents

- [CoreLib](#corelib)
  - [Table of Contents](#table-of-contents)
  - [Features](#features)
  - [Project Structure](#project-structure)
  - [Getting Started](#getting-started)
    - [Prerequisites](#prerequisites)
    - [Building the Library](#building-the-library)
    - [Running Tests](#running-tests)
  - [Contributing](#contributing)

## Features

- **Array Utilities**: Functions for manipulating and processing arrays.
- **Mathematical Computations**: Common mathematical operations and algorithms.
- **Number Operations**: Utilities for working with numbers.
- **Random Number Generation**: Tools for generating random numbers.

## Project Structure

The project is organized into the following directories:

- **include/**: Contains the header files for the library modules.
  - `array.h`: Header file for array utilities.
  - `math.h`: Header file for mathematical computations.
  - `number.h`: Header file for number operations.
  - `random.h`: Header file for random number generation.

- **src/**: Contains the implementation files for the library modules.
  - `array/array.cpp`: Implementation of array utilities.
  - `math/math.cpp`: Implementation of mathematical computations.
  - `number/number.cpp`: Implementation of number operations.
  - `random/random.cpp`: Implementation of random number generation.

- **test/**: Contains test cases and Makefiles for each module.
  - `array/`: Tests for array utilities.
  - `math/`: Tests for mathematical computations.
  - `number/`: Tests for number operations.
  - `random/`: Tests for random number generation.

## Getting Started

### Prerequisites

To build and test the library, ensure you have the following installed:

- A C++ compiler (e.g., `g++` or `clang++`)
- `make` build system

### Building the Library

Each module in the `test/` directory contains a `Makefile` to build and run the tests for that module. To build the library, navigate to the desired module's test directory and run:

```bash
make
```

### Running Tests

After building, you can run the tests for a specific module by executing:

```bash
./main
```

## Contributing

Contributions are welcome! If you have ideas for new features, improvements, or bug fixes, follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or fix:

   ```bash
   git checkout -b feature-name
   ```

3. Commit your changes:

   ```bash
   git commit -m "Add feature description"
   ```

4. Push to your branch:

   ```bash
   git push origin feature-name
   ```

5. Submit a pull request.

---

For more information, visit the [CoreLib GitHub Repository](https://github.com/Choubi-Mohammed/corelib)