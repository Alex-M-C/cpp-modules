# 📘 CPP Module 00 - Namespaces, Classes, Member Functions & stdio Streams

[ 🇪🇸 Español ](README.md) | [ 🇬🇧 English ]

## 🎯 General Objective
Transition from procedural C to Object-Oriented C++ (C++98 standard). Learn the fundamentals of class declaration, member functions, standard streams (`std::cout`, `std::cin`), string manipulation, and static members.

## 🧠 Key Concepts Learned by Exercise

### `ex00`: Megaphone
* **Standard I/O Streams:** Basics of using `std::cout` and `std::endl` instead of `printf`.
* **String Manipulation:** Processing command-line arguments (`argc`, `argv`) and converting characters to uppercase using `std::toupper`.

### `ex01`: My Awesome PhoneBook
* **Classes and Objects:** Designing basic classes (`Contact` and `PhoneBook`) with private attributes and public getter/setter methods.
* **Array of Objects:** Managing a fixed-size array of objects acting as a circular buffer (overwriting the oldest contact when full).
* **Text Formatting:** Using `std::setw` and `std::right` from `<iomanip>` to format tabular console output.
* **Input Handling:** Safely reading user input with `std::getline` and managing EOF (`Ctrl+D`) conditions.

### `ex02`: Account (Re-creating a source file)
* **Static Members:** Understanding class-level static attributes (`_nbAccounts`, `_totalAmount`) shared among all instances.
* **Class Implementation from Header:** Implementing member functions based solely on an existing `Account.hpp` declaration file.
* **Log and Timestamp Generation:** Formatting and outputting custom timestamps using `<ctime>` to match exact log output specifications.