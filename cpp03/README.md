# 📘 CPP Module 03 - Herencia (Inheritance)

[ 🇪🇸 Español ] | [ 🇬🇧 English ](README_EN.md)

## 🎯 Objetivo General
Comprender y aplicar el concepto de **Herencia** en C++, permitiendo la reutilización de código y el establecimiento de relaciones jerárquicas (padre-hijo) entre clases. También se aborda la resolución de ambigüedades en la herencia múltiple.

## 🧠 Conceptos Clave Aprendidos por Ejercicio

### `ex00`: Aaaaand... OPEN! (ClapTrap)
*   **Clase Base:** Creación de una clase fundamental (`ClapTrap`) con sus propios atributos protegidos/privados y funciones miembro, sirviendo como plantilla principal.
*   **Gestión de Estado:** Implementación de lógica interna donde los métodos (`attack`, `takeDamage`, `beRepaired`) dependen del estado actual del objeto (ej. comprobar si hay puntos de vida o energía antes de actuar).

### `ex01`: Serena, my love! (ScavTrap)
*   **Herencia Simple (`public`):** Creación de una clase derivada (`ScavTrap`) que hereda atributos y métodos de la clase base (`ClapTrap`).
*   **Orden de Construcción y Destrucción:** Comprensión del flujo de memoria: al instanciar un hijo, primero se llama al constructor del padre y luego al del hijo. Al destruirse, el orden se invierte (primero se destruye el hijo, luego el padre).
*   **Reescritura de Métodos (Overriding básico):** Redefinición del método `attack()` en la clase hija para que tenga un comportamiento distinto al de la clase padre.
*   **Atributos `protected`:** Cambio de la visibilidad de los atributos del padre de `private` (inaccesibles para el hijo) a `protected` (accesibles para el hijo, pero cerrados al exterior).

### `ex02`: Repetitive work (FragTrap)
*   **Expansión de la Herencia:** Creación de otra clase derivada (`FragTrap`) paralela a `ScavTrap`, consolidando cómo múltiples clases pueden heredar de una misma base pero tener estadísticas y habilidades especiales distintas (`highFivesGuys`).

### `ex03`: Now it's weird! (DiamondTrap)
*   **Herencia Múltiple:** Creación de una clase que hereda de dos clases simultáneamente (`DiamondTrap` hereda tanto de `ScavTrap` como de `FragTrap`).
*   **El Problema del Diamante (Diamond Problem):** Resolución del conflicto de memoria y ambigüedad que ocurre cuando dos clases padres heredan de la misma clase base (creando duplicados de `ClapTrap`).
*   **Herencia Virtual (`virtual public`):** Uso de la herencia virtual para asegurar que solo exista *una* instancia compartida de la clase base `ClapTrap` en la jerarquía.
*   **Resolución de Ámbito (Scope Resolution):** Uso del operador `::` (ej. `ScavTrap::energy_points`) para especificar explícitamente de qué clase padre provienen ciertos atributos o métodos en caso de conflicto.