# 📘 CPP Module 05 - Repetición y Excepciones

[ 🇪🇸 Español ] | [ 🇬🇧 English ](README_EN.md)

## 🎯 Objetivo General
Profundizar en el manejo nativo de errores en C++ mediante el uso de excepciones (`try`, `catch`, `throw`), comprender y aplicar clases abstractas mediante métodos virtuales puros, y diseñar arquitecturas de clases dinámicas implementando patrones (como el *Factory*) mediante punteros a funciones miembro.

## 🧠 Conceptos Clave Aprendidos por Ejercicio

### `ex00`: Mommy, when I grow up I want to be a bureaucrat!
-   **Excepciones Personalizadas:** Creación de clases de excepción anidadas (ej. `GradeTooHighException`, `GradeTooLowException`) heredando de la clase estándar `std::exception` y sobreescribiendo el método `what()`.
-   **Lanzamiento y Captura (`try/catch/throw`):** Abandono de los códigos de error de C (devolver `0` o `-1`). Uso de `throw` para interrumpir el flujo cuando ocurre una anomalía y bloques `try/catch` para manejar el error atrapando excepciones por referencia constante.

### `ex01`: Form up, maggots!
-   **Interacción entre Clases:** Paso de objetos por referencia constante para que interactúen de forma segura (un `Bureaucrat` intentando firmar un `Form`).
-   **Atributos Constantes (`const`):** Refuerzo del uso obligatorio de la lista de inicialización del constructor para asignar valores a atributos que nacen siendo inmutables (como el nombre o los grados requeridos).

### `ex02`: No, you need form to do that
-   **Clases Abstractas:** Transformación de una clase base en abstracta (`AForm`) declarando al menos un método virtual puro (`= 0`), lo que impide su instanciación directa y obliga a las clases hijas a implementarlo.
-   **Delegación de Constructores y Encapsulamiento:** Inicialización de atributos privados y constantes de la clase padre llamando a su constructor explícitamente desde la lista de inicialización de las clases derivadas.
-   **Flujos y Aleatoriedad:** Uso avanzado de flujos de salida (`std::ofstream`) para generar archivos con arte ASCII y uso de librerías de C (`<cstdlib>`) para cálculos de probabilidad (`rand() % 2`).

### `ex03`: At least this beats coffee-making
-   **Patrón Factory y Punteros a Métodos:** Creación dinámica de objetos evitando por completo las cadenas prohibidas de `if/else if/else`. Uso de arrays de punteros a funciones miembro invocados dinámicamente mediante el operador `->*`.
-   **Supresión de Warnings:** Técnicas para mantener la Forma Canónica Ortodoxa en clases vacías (sin atributos), omitiendo nombres de variables o usando el casteo `(void)` para evitar errores de compilación con la flag `-Werror`.