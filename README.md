# C++ FSM vs. Switch-Case Benchmark

This project aims to benchmark the performance of Finite State Machines (FSM) against switch-case statements in C++. It measures the time it takes to perform a specific task using both techniques and provides insights into their efficiency.

## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
  - [Using Development Container](#using-development-container)
  - [Manual Setup](#manual-setup)
- [Benchmark Results](#benchmark-results)
- [Contributing](#contributing)
- [License](#license)

## Introduction

Finite State Machines (FSMs) and switch-case statements are common programming constructs used to handle state transitions in software applications. This project compares the performance of these two approaches when used to convert characters to states. The benchmark involves calling two functions, `fsm_char_to_state` and `scase_char_to_state`, a large number of times (8,000,000,000) and measuring the time it takes to complete these operations.

## Usage


1. Clone this repository to your local machine:

   ```sh
   git clone https://github.com/drakerunner/cpp-switch-vs-fsm.git
   ```
2. Open the project directory:

    ```sh
    cd cpp-switch-vs-fsm
    ```

### Using Development Container

To make it easier to set up the project and its dependencies, we provide a development container configuration.

1. Install Visual Studio Code and the Remote - Containers extension if you haven't already.

2. Open the project in Visual Studio Code.

3. When prompted, click on the green "Reopen in Container" button in the bottom right corner. This will automatically set up a development container with all the required dependencies.

4. Once the container is up and running, build and run the benchmark:

    ```sh
    mkfir ./build
    cd ./build
    cmake ..
    make
    ./cpp-switch-vs-fsm
    ```

### Manual Setup
If you prefer to set up the project manually, follow these steps:

1. Prerequisites

    Before running the benchmark, ensure that you have the following prerequisites installed:

    - C++ compiler (e.g., GCC or Clang)
    - CMake (for building the project)


2. Build the benchmark:

    ```sh
    mkfir ./build
    cd ./build
    cmake ..
    make
    ./cpp-switch-vs-fsm
    ```

3. Run the benchmark:
    ```sh
    ./cpp-switch-vs-fsm
    ```

## Benchmark Results
After running the benchmark, you will see the results, including the time taken for each method (`fsm_char_to_state` and `scase_char_to_state`) to complete 8,000,000,000 iterations. Use these results to analyze the performance of FSM vs. switch-case in your specific environment and use case.

### My results:
Debug profile

    benchmarking fsm
    took: 22.0375seconds.

    benchmarking switch case
    took: 95.9046seconds.

Release profile

    benchmarking fsm
    took: 7.34566seconds.

    benchmarking switch case
    took: 7.66134seconds.

Release profile (16000000000 iterations)

    benchmarking fsm
    took: 14.5696seconds.

    benchmarking switch case
    took: 15.2587seconds.

## Contributing
Contributions are welcome! If you have any suggestions, improvements, or bug fixes, please open an issue or submit a pull request.

## License
This project is licensed under the MIT License - see the [LICENSE](https://github.com/drakerunner/cpp-switch-vs-fsm/LICENSE) file for details.