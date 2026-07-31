# 🚀 42 C++ Modules (CPP 00 - CPP 04)

[ 🇪🇸 Español ](README.md) | [ 🇬🇧 English ]

This repository contains the first series of modules from the **42 School** C++ curriculum. The primary goal is to transition from procedural programming in C to **Object-Oriented Programming (OOP)** in C++, following the **C++98** standard.

---

## 🛠️ Compilation Standard & Rules
All projects are compiled and tested under the following conditions:
* **Compiler:** `c++` or `g++`
* **Required Flags:** `-Wall -Wextra -Werror -std=c++98`
* **Memory Management:** Verified with `valgrind` and `-fsanitize=address` to ensure zero memory leaks.

---

## 📚 Module Overview

| Module | Key Concepts | Directory |
| :--- | :--- | :--- |
| **CPP Module 00** | Namespaces, Classes, Attributes/Methods, Standard I/O (`std::cin`, `std::cout`), Static Members. | [`/cpp00`](./cpp00) |
| **CPP Module 01** | Memory Allocation (Stack vs Heap), Pointers, References, Pointers to Member Functions, File Streams (`fstream`). | [`/cpp01`](./cpp01) |
| **CPP Module 02** | Operator Overloading, Ad-hoc Polymorphism, Orthodox Canonical Form, Fixed-Point Number Logic. | [`/cpp02`](./cpp02) |
| **CPP Module 03** | Single and Multiple Inheritance, Class Hierarchies, Construction/Destruction Order, The Diamond Problem (`virtual inheritance`). | [`/cpp03`](./cpp03) |
| **CPP Module 04** | Subtype Polymorphism, Dynamic Binding (`virtual`), Deep Copies, Abstract Classes & Interfaces. | [`/cpp04`](./cpp04) |

---

## 📋 Repository Structure
Each directory contains the respective exercises alongside detailed documentation in both Spanish and English:

```text
.
├── cpp00/          # Module 00: C++ Basics
├── cpp01/          # Module 01: Memory & References
├── cpp02/          # Module 02: Canonical Form & Overloading
├── cpp03/          # Module 03: Inheritance
├── cpp04/          # Module 04: Polymorphism & Abstract Classes
├── README.md       # Global documentation (Spanish)
└── README_EN.md    # Global documentation (English)