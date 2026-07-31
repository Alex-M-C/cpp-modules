# 📘 CPP Module 01 - Memoria, Punteros, Referencias y Archivos

[ 🇪🇸 Español ] | [ 🇬🇧 English ](README_EN.md)

## 🎯 Objetivo General
Profundizar en la gestión manual de memoria en C++ usando `new` y `delete`, comprender la diferencia fundamental entre punteros y referencias, y aprender a manejar flujos de archivos (File I/O) y punteros a funciones miembro.

## 🧠 Conceptos Clave Aprendidos por Ejercicio

### `ex00`: BraiiiiiiinnnzzzZ
*   **Asignación de Memoria Dinámica vs. Estática:** Comprensión de cuándo instanciar un objeto en el Stack (memoria local, destrucción automática al salir del *scope*) y cuándo en el Heap (memoria dinámica).
*   **`new` y `delete`:** Sustitución de `malloc` y `free` de C. Uso de `new` para crear objetos (llamando automáticamente a su constructor) y `delete` para destruirlos (llamando a su destructor).

### `ex01`: Moar brainz!
*   **Arrays Dinámicos:** Uso de `new []` para reservar memoria para un arreglo continuo de objetos.
*   **Liberación de Arrays:** Uso obligatorio de `delete []` en lugar de `delete` simple para asegurar que se llame al destructor de *cada uno* de los elementos del array, evitando *memory leaks*.

### `ex02`: HI THIS IS BRAIN
*   **Punteros vs. Referencias:** Primer contacto directo con las referencias (`&`) en C++. 
*   **Sintaxis:** Diferenciación visual y conceptual entre el valor original, su dirección de memoria, un puntero a esa dirección (`*`), y una referencia a la variable.

### `ex03`: Unnecessary violence
*   **Composición de Clases:** Inclusión de objetos de una clase (ej. `Weapon`) dentro de otra (ej. `HumanA` y `HumanB`).
*   **Decisión de Diseño (Puntero o Referencia):** Comprensión de cuándo es obligatorio usar un puntero (cuando el objeto puede no existir o puede cambiar a lo largo del tiempo, permitiendo `NULL`) y cuándo es mejor usar una referencia (cuando el objeto siempre debe existir desde la construcción y no va a cambiar de identidad).

### `ex04`: Sed is for losers
*   **Flujos de Archivos (File I/O):** Uso de `std::ifstream` para leer archivos y `std::ofstream` para crear/escribir archivos.
*   **Manipulación Avanzada de Strings:** Búsqueda y reemplazo de ocurrencias dentro de cadenas utilizando métodos de `std::string` como `.find()`, `.erase()`, y `.insert()` (o construcciones con iteradores/substrings).

### `ex05`: Harl 2.0
*   **Punteros a Funciones Miembro:** Sintaxis avanzada para crear arrays de punteros que apuntan a métodos dentro de una misma clase.
*   **Optimización de Código:** Eliminación de largas cadenas de `if/else if` mediante el uso de estos punteros para llamar a la función correcta de forma dinámica.
