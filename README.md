# C++ Vector Erase During Iteration Bug

This repository demonstrates a common error in C++ when removing elements from a `std::vector` while iterating through it.  The provided code attempts to remove the element with the value 3.  However, erasing an element invalidates iterators and pointers to elements beyond the erased position, leading to undefined behavior.

The solution provided offers safe and efficient ways to avoid this problem.

## Bug

The `bug.cpp` file contains the problematic code:

- Incorrectly erasing elements during a standard for loop iteration.