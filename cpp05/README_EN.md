# 📘 CPP Module 05 - Repetition and Exceptions

[ 🇪🇸 Español ](README.md) | [ 🇬🇧 English ]

## 🎯 General Objective
Deepen the understanding of native error handling in C++ using exceptions (`try`, `catch`, `throw`), understand and apply abstract classes through pure virtual methods, and design dynamic class architectures by implementing patterns (like the *Factory* pattern) using pointers to member functions.

## 🧠 Key Concepts Learned per Exercise

### `ex00`: Mommy, when I grow up I want to be a bureaucrat!
-   **Custom Exceptions:** Creation of nested exception classes (e.g., `GradeTooHighException`, `GradeTooLowException`) inheriting from the standard `std::exception` class and overriding the `what()` method.
-   **Throwing and Catching (`try/catch/throw`):** Moving away from C-style error codes (returning `0` or `-1`). Using `throw` to interrupt the flow when an anomaly occurs and `try/catch` blocks to handle the error by catching exceptions by constant reference.

### `ex01`: Form up, maggots!
-   **Class Interaction:** Passing objects by constant reference to interact safely (a `Bureaucrat` attempting to sign a `Form`).
-   **Constant Attributes (`const`):** Reinforcing the mandatory use of the constructor's initialization list to assign values to attributes that are immutable from birth (like the name or required grades).

### `ex02`: No, you need form to do that
-   **Abstract Classes:** Transforming a base class into an abstract one (`AForm`) by declaring at least one pure virtual method (`= 0`), which prevents its direct instantiation and forces child classes to implement it.
-   **Constructor Delegation and Encapsulation:** Initializing private and constant attributes of the parent class by calling its constructor explicitly from the initialization list of the derived classes.
-   **Streams and Randomness:** Advanced use of output streams (`std::ofstream`) to generate files with ASCII art, and C libraries (`<cstdlib>`) for probability calculations (`rand() % 2`).

### `ex03`: At least this beats coffee-making
-   **Factory Pattern and Method Pointers:** Dynamic object creation completely avoiding forbidden `if/else if/else` chains. Utilizing arrays of pointers to member functions invoked dynamically via the `->*` operator.
-   **Warning Suppression:** Techniques to maintain the Orthodox Canonical Form in empty classes (without attributes) by omitting variable names or using `(void)` casting to prevent compilation errors with the `-Werror` flag.