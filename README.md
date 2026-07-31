# 🚀 42 C++ Modules (CPP 00 - CPP 04)

[ 🇪🇸 Español ] | [ 🇬🇧 English ](README_EN.md)

Este repositorio contiene la primera serie de módulos del itinerario de C++ de la **Escuela 42**. El objetivo principal es realizar la transición de la programación imperativa en C hacia la **Programación Orientada a Objetos (POO)** en C++, respetando el estándar **C++98**.

---

## 🛠️ Estándar de Compilación y Reglas
Todos los proyectos han sido compilados y testeados bajo las siguientes condiciones:
* **Compilador:** `c++` o `g++`
* **Flags requeridas:** `-Wall -Wextra -Werror -std=c++98`
* **Gestión de memoria:** Verificación con `valgrind` y `-fsanitize=address` para garantizar la ausencia total de *memory leaks*.

---

## 📚 Resumen de Módulos

| Módulo | Conceptos Clave | Directorio |
| :--- | :--- | :--- |
| **CPP Module 00** | Namespaces, Clases, Atributos/Métodos, Entrada/Salida Estándar (`std::cin`, `std::cout`), Miembros Estáticos. | [`/cpp00`](./cpp00) |
| **CPP Module 01** | Asignación de Memoria (Stack vs Heap), Punteros, Referencias, Punteros a Funciones Miembro, Flujos de Archivos (`fstream`). | [`/cpp01`](./cpp01) |
| **CPP Module 02** | Sobrecarga de Operadores, Polimorfismo Ad-hoc, Forma Canónica Ortodoxa, Representación de Números en Punto Fijo. | [`/cpp02`](./cpp02) |
| **CPP Module 03** | Herencia Simple y Múltiple, Jerarquías de Clases, Orden de Construcción/Destrucción, Problema del Diamante (`virtual inheritance`). | [`/cpp03`](./cpp03) |
| **CPP Module 04** | Polimorfismo de Subtipos, Enlace Dinámico (`virtual`), Copias Profundas (*Deep Copies*), Clases Abstractas e Interfaces. | [`/cpp04`](./cpp04) |

---

## 📋 Estructura del Repositorio
Cada directorio contiene los ejercicios correspondientes junto a su documentación detallada en español e inglés:

```text
.
├── cpp00/          # Módulo 00: Fundamentos de C++
├── cpp01/          # Módulo 01: Memoria y Referencias
├── cpp02/          # Módulo 02: Forma Canónica y Sobrecarga
├── cpp03/          # Módulo 03: Herencia
├── cpp04/          # Módulo 04: Polimorfismo y Clases Abstractas
├── README.md       # Documentación global (Español)
└── README_EN.md    # Global documentation (English)