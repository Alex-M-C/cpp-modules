# 📘 CPP Module 02 - Polimorfismo Ad-hoc y Forma Canónica Ortodoxa

[ 🇪🇸 Español ] | [ 🇬🇧 English ](README_EN.md)

## 🎯 Objetivo General
Estandarizar la creación de clases mediante la **Forma Canónica Ortodoxa (Orthodox Canonical Form)** e introducir el **Polimorfismo Ad-hoc** mediante la sobrecarga de funciones y operadores. Además, se aprende a implementar desde cero la lógica matemática de los números de coma fija (Fixed-point numbers).

## 🧠 Conceptos Clave Aprendidos por Ejercicio

### `ex00`: My First Class in Orthodox Canonical Form
*   **Forma Canónica Ortodoxa:** Implementación estricta de la regla de los "Cuatro Jinetes" que toda clase robusta en C++ debe tener:
    1.  Constructor por defecto.
    2.  Constructor de copia.
    3.  Operador de asignación de copia (`operator=`).
    4.  Destructor.
*   **Números de Coma Fija (Fixed-point):** Comprensión teórica de cómo representar números fraccionarios utilizando solo enteros para optimizar el rendimiento y la precisión.

### `ex01`: Towards a more useful fixed-point number class
*   **Sobrecarga de Constructores:** Creación de múltiples constructores para una misma clase que aceptan diferentes tipos de parámetros (`int` o `float`), permitiendo inicializar objetos Fixed desde distintos tipos de datos.
*   **Conversiones de Tipos:** Implementación de métodos (`toInt`, `toFloat`) para convertir la representación de coma fija de vuelta a tipos estándar.
*   **Sobrecarga del Operador de Inserción (`<<`):** Modificación del comportamiento de `std::ostream` para poder imprimir objetos personalizados directamente con `std::cout << miObjetoFixed`.

### `ex02`: Now we're talking
*   **Sobrecarga de Operadores Relacionales:** Implementación de `>`, `<`, `>=`, `<=`, `==` y `!=` para poder comparar dos objetos Fixed directamente.
*   **Sobrecarga de Operadores Aritméticos:** Implementación de `+`, `-`, `*` y `/` manejando correctamente la lógica de los bits fraccionarios.
*   **Operadores de Incremento y Decremento:** Diferenciación en la implementación y sintaxis entre el pre-incremento (`++a`) y el post-incremento (`a++`).
*   **Funciones Estáticas Sobrecargadas:** Creación de métodos miembro estáticos (`min` y `max`) que pueden comparar tanto referencias constantes como no constantes de objetos de la clase.
