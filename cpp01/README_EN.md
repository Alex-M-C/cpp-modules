# 📘 CPP Module 01 - Memory Allocation, Pointers to Members & References

[ 🇪🇸 Español ](README.md) | [ 🇬🇧 English ]

## 🎯 General Objective
Master memory allocation strategies in C++ (Stack vs. Heap), understand the fundamental differences between pointers and references, and explore advanced mechanics like pointers to member functions and file stream operations.

## 🧠 Key Concepts Learned by Exercise

### `ex00`: Braainz!
* **Stack vs. Heap Allocation:** Deciding when to instantiate an object on the Stack (automatic lifetime) versus the Heap using `new` (manual lifetime).
* **Explicit Destruction:** Using `delete` to free heap-allocated memory and prevent memory leaks.

### `ex01`: Moar brainz!
* **Dynamic Arrays of Objects:** Allocating an array of objects on the heap using `new[]`.
* **Array Deallocation:** Using `delete[]` correctly to ensure destructors are invoked for every instance in the array.

### `ex02`: HI THIS IS BRAIN
* **Pointers vs. References:** Visualizing the memory layout of variables, pointers (`std::string*`), and references (`std::string&`).
* **Reference Mechanics:** Understanding that a reference is an immutable alias to an existing object that cannot be null.

### `ex03`: Unnecessary violence
* **Aggregation and Composition:** Choosing between storing a pointer (can be null or reassigned) or a reference (must be initialized and cannot change) as a class attribute (`HumanA` vs. `HumanB`).

### `ex04`: Sed is for losers
* **File I/O Streams:** Reading and writing files using `std::ifstream` and `std::ofstream`.
* **String Replacement Logic:** Manipulating `std::string` using methods like `.find()` and `.erase()` / `.insert()` to replace occurrences of substrings without using C-style file functions.

### `ex05`: Harl 2.0
* **Pointers to Member Functions:** Creating a dispatch table using syntax like `void (Harl::*ptr)() = &Harl::debug;` to avoid lengthy `if/else` chains.
