# 📘 CPP Module 04 - Polimorfismo, Clases Abstractas y Deep Copies

[ 🇪🇸 Español ] | [ 🇬🇧 English ](README_EN.md)

## 🎯 Objetivo General
Dominar el **Polimorfismo de Subtipos** (resolución dinámica en tiempo de ejecución), comprender la importancia crítica de los **destructores virtuales** para evitar fugas de memoria, dominar las **copias profundas (deep copies)** frente a las superficiales, y aprender a diseñar **Clases Abstractas** e Interfaces.

## 🧠 Conceptos Clave Aprendidos por Ejercicio

### `ex00`: Polymorphism
*   **Polimorfismo Dinámico:** Uso de la palabra clave `virtual` en los métodos (ej. `virtual void makeSound() const;`) de la clase base (`Animal`). Esto indica al compilador que, si se llama a este método a través de un puntero a la clase base, debe ejecutar la versión de la clase derivada (`Dog` o `Cat`) a la que realmente apunta.
*   **Enlace Dinámico (Dynamic Binding):** Comprensión de cómo el programa decide en *tiempo de ejecución* (y no en tiempo de compilación) qué función debe ejecutarse.
*   **El Contraejemplo (`WrongAnimal`):** Creación de clases sin la palabra `virtual` para comprobar visualmente el problema: un puntero de tipo `WrongAnimal` apuntando a un `WrongCat` ejecutará siempre el sonido del padre, ignorando al hijo.

### `ex01`: I don’t want to set the world on fire
*   **Clases con Memoria Dinámica Interna:** Incorporación de una clase `Brain` como atributo dinámico (puntero) dentro de `Dog` y `Cat`.
*   **Deep Copy vs. Shallow Copy:** 
    *   *Shallow (Superficial):* Copiar solo la dirección de memoria del puntero. (Peligro: si un objeto se destruye, el otro se queda con un puntero colgante o un *double free*).
    *   *Deep (Profunda):* Reservar nueva memoria (`new Brain()`) y copiar el *contenido* de los datos iterando o desreferenciando (ej. `*this->brain = *other.brain;`). Obligatorio aplicar esto en el constructor de copia y en el operador de asignación (Regla de los Tres/Cuatro).
*   **Destructores Virtuales:** Implementación obligatoria de `virtual ~Animal();`. Si eliminamos un `Dog` usando un puntero de tipo `Animal*`, el destructor virtual asegura que se llame primero al destructor del hijo (que libera el `Brain`) antes que al del padre. Sin esto, `valgrind` detectaría fugas de memoria masivas.
*   **Arreglos Polimórficos:** Creación y gestión de un array de `Animal*`, llenando la mitad con `Dog` y la otra mitad con `Cat`, y liberándolos correctamente en un bucle.

### `ex02`: Abstract class
*   **Funciones Virtuales Puras:** Uso de la sintaxis `= 0` al final de la declaración de un método (ej. `virtual void makeSound() const = 0;`).
*   **Clases Abstractas:** Al incluir al menos una función virtual pura, la clase `Animal` se vuelve abstracta y ya **no puede ser instanciada** directamente (`Animal a;` da error de compilación). Solo sirve como plantilla base para obligar a sus clases hijas a implementar ese método.
