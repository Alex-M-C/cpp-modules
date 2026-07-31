# 📘 CPP Module 03 - Inheritance

[ 🇪🇸 Español ](README.md) | [ 🇬🇧 English ]

## 🎯 General Objective
Understand and apply the concept of **Inheritance** in C++, enabling code reuse and establishing hierarchical (parent-child) relationships between classes. It also addresses ambiguity resolution in multiple inheritance.

## 🧠 Key Concepts Learned by Exercise

### `ex00`: Aaaaand... OPEN! (ClapTrap)
* **Base Class:** Creating a foundational class (`ClapTrap`) with its own protected/private attributes and member functions, serving as a primary blueprint.
* **State Management:** Implementing internal logic where methods (`attack`, `takeDamage`, `beRepaired`) depend on the object's current state (e.g., checking health or energy points before acting).

### `ex01`: Serena, my love! (ScavTrap)
* **Single Inheritance (`public`):** Creating a derived class (`ScavTrap`) that inherits attributes and methods from the base class (`ClapTrap`).
* **Order of Construction and Destruction:** Understanding memory flow: when instantiating a child object, the parent constructor is called first, followed by the child's. Upon destruction, the order is reversed (child first, then parent).
* **Method Overriding:** Redefining the `attack()` method in the derived class to alter behavior relative to the base class.
* **`protected` Attributes:** Changing visibility of parent attributes from `private` (inaccessible to children) to `protected` (accessible to children, but closed to the outside world).

### `ex02`: Repetitive work (FragTrap)
* **Expanding Inheritance:** Creating another derived class (`FragTrap`) parallel to `ScavTrap`, reinforcing how multiple classes can inherit from the same base while maintaining unique statistics and special abilities (`highFivesGuys`).

### `ex03`: Now it's weird! (DiamondTrap)
* **Multiple Inheritance:** Creating a class that inherits from two classes simultaneously (`DiamondTrap` inherits from both `ScavTrap` and `FragTrap`).
* **The Diamond Problem:** Resolving memory conflicts and ambiguities that arise when two parent classes inherit from the same base class (creating duplicate instances of `ClapTrap`).
* **Virtual Inheritance (`virtual public`):** Using virtual inheritance to ensure only *one* shared instance of the base class `ClapTrap` exists in the hierarchy.
* **Scope Resolution Operator:** Using `::` (e.g., `ScavTrap::energy_points`) to explicitly specify which parent class an attribute or method originates from during conflicts.