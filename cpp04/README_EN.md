# 📘 CPP Module 04 - Subtype Polymorphism, Abstract Classes & Deep Copies

[ 🇪🇸 Español ](README.md) | [ 🇬🇧 English ]

## 🎯 General Objective
Master **Subtype Polymorphism** (runtime dynamic resolution), understand the critical importance of **virtual destructors** to prevent memory leaks, master **deep copies** vs. shallow copies, and learn how to design **Abstract Classes** and Interfaces.

## 🧠 Key Concepts Learned by Exercise

### `ex00`: Polymorphism
* **Dynamic Polymorphism:** Using the `virtual` keyword in base class methods (e.g., `virtual void makeSound() const;` in `Animal`). This instructs the compiler that when called via a base class pointer, it must execute the version belonging to the actual derived class (`Dog` or `Cat`).
* **Dynamic Binding:** Understanding how the program determines at *runtime* (rather than compile time) which function implementation to execute.
* **The Counterexample (`WrongAnimal`):** Creating classes without the `virtual` keyword to visually demonstrate the issue: an `Animal*` pointer pointing to a `WrongCat` will always play the parent's sound, ignoring the derived behavior.

### `ex01`: I don’t want to set the world on fire
* **Classes with Internal Dynamic Memory:** Incorporating a `Brain` class as a dynamic pointer attribute inside `Dog` and `Cat`.
* **Deep Copy vs. Shallow Copy:** 
  * *Shallow Copy:* Copying only the memory address of a pointer (Risk: dangling pointers or double-free errors if one object is destroyed).
  * *Deep Copy:* Allocating new memory (`new Brain()`) and copying the actual *data content* by dereferencing (e.g., `*this->brain = *other.brain;`). Mandatory application in copy constructors and assignment operators.
* **Virtual Destructors:** Essential implementation of `virtual ~Animal();`. Deleting a `Dog` through an `Animal*` pointer ensures the child destructor executes first (freeing the `Brain`) before the base destructor.
* **Polymorphic Arrays:** Managing an array of `Animal*` pointers, filling half with `Dog` and half with `Cat`, and properly releasing memory in a loop.

### `ex02`: Abstract class
* **Pure Virtual Functions:** Using the `= 0` syntax in method declarations (e.g., `virtual void makeSound() const = 0;`).
* **Abstract Classes:** Including at least one pure virtual function renders `Animal` abstract, preventing direct instantiation (`Animal a;` will trigger a compiler error). It acts purely as a contract for derived classes.
