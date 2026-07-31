# 📘 CPP Module 02 - Ad-hoc Polymorphism & Orthodox Canonical Form

[ 🇪🇸 Español ](README.md) | [ 🇬🇧 English ]

## 🎯 General Objective
Standardize class creation using the **Orthodox Canonical Form** and introduce **Ad-hoc Polymorphism** through function and operator overloading. Additionally, learn how to implement fixed-point number mathematical logic from scratch.

## 🧠 Key Concepts Learned by Exercise

### `ex00`: My First Class in Orthodox Canonical Form
* **Orthodox Canonical Form:** Strict implementation of the "Four Horsemen" rule that every robust class in C++ must have:
  1. Default constructor
  2. Copy constructor
  3. Copy assignment operator (`operator=`)
  4. Destructor
* **Fixed-point Numbers:** Theoretical understanding of representing fractional numbers using only integers to optimize performance and precision.

### `ex01`: Towards a more useful fixed-point number class
* **Constructor Overloading:** Creating multiple constructors for the same class accepting different parameter types (`int` or `float`), allowing `Fixed` objects to be initialized from various data types.
* **Type Conversions:** Implementing methods (`toInt`, `toFloat`) to convert the fixed-point representation back to standard types.
* **Insertion Operator Overloading (`<<`):** Modifying the behavior of `std::ostream` to print custom objects directly using `std::cout << myFixedObject`.

### `ex02`: Now we're talking
* **Relational Operator Overloading:** Implementing `>`, `<`, `>=`, `<=`, `==`, and `!=` to compare two `Fixed` objects directly.
* **Arithmetic Operator Overloading:** Implementing `+`, `-`, `*`, and `/` while correctly handling fractional bit logic.
* **Increment and Decrement Operators:** Differentiating between pre-increment (`++a`) and post-increment (`a++`) syntax and implementation.
* **Overloaded Static Functions:** Creating static member functions (`min` and `max`) capable of comparing both constant and non-constant object references.
