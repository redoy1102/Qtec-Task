# Array Search and Insertion Position

## Overview
This program takes a N sized array of numbers and a target number as input. It then sorts the array and searches for the target number using binary search. If the target number is found, it returns the index of the target number in the sorted array. If the target number is not found, it returns the index where the target number would be inserted to maintain the sorted order.

## Algorithm
1. **Input**: 
    - Input the size of the array `arraySize`.
    - Input an array of integers `numbers[]`.
    - Input the target number `targetNumber`.

2. **Sort the Array**:
    - Time complexity of `std::sort()`: O(nlog n)
    - Time complexity of `Selection sort algorithm`: O(N*N).
    - As the sorted algorithm isn't mentioned in the question I implemented the `std::sort()` function from the C++ Standard Library and selection sort algorithm both.

3. **Binary Search**:
    - Time complexity: O(log n)
    - Implement binary search to find the index of the target number in the sorted array.
    - If the target number is found, return its index.
    - If the target number is not found, return 0.

4. **Handle Insertion Position**:
    - If the target number is not found, determine the index where it would be inserted based on the sorted order.
    - Return this insertion position index.

5. **Output**: 
    - Output the index of the target number in the sorted array or the insertion position index.

## How to Use
1. Compile the program using a C++ compiler.
2. Run the compiled executable.
3. Input the size of the array, the array elements, and the target number.
4. The program will output the index of the target number in the sorted array or the insertion position index.
