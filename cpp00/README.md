# 📘 CPP Module 00 - Primeros pasos en C++

[ 🇪🇸 Español ] | [ 🇬🇧 English ](README_EN.md)

## 🎯 Objetivo General
Transición oficial de C a C++, cambiando la mentalidad de programación procedimental hacia la **Programación Orientada a Objetos (POO)**.

## 🧠 Conceptos Clave Aprendidos por Ejercicio

### `ex00`: Megaphone
*   **Entrada y Salida (I/O Streams):** Sustitución de `printf` por las herramientas de la librería estándar: `std::cout` y `std::endl`.
*   **Namespaces:** Uso del espacio de nombres `std::` para acceder a la librería estándar y evitar colisiones de nombres.
*   **Gestión básica de Strings:** Uso de la clase `std::string` en lugar de la gestión manual de arrays de caracteres (`char*`) de C.

### `ex01`: My Awesome PhoneBook
*   **Clases y Objetos:** Creación de las clases `PhoneBook` y `Contact`. Comprensión de la diferencia entre la plantilla (clase) y la instancia en memoria (objeto).
*   **Encapsulación y Visibilidad:** Uso de modificadores de acceso. Ocultación de la información interna de los contactos (`private`) y exposición de métodos de interacción (`public`).
*   **Atributos y Métodos Miembro:** Definición de variables y funciones que pertenecen exclusivamente a las instancias de la clase.
*   **Lectura de datos:** Uso de `std::cin` y `std::getline` para capturar la entrada del usuario de forma segura.
*   **Manipulación de Strings:** Uso de métodos integrados como `.length()` y `.substr()` para formatear la visualización de los contactos en la tabla.

### `ex02`: The Job Of Your Dreams
*   **Variables estáticas (`static`):** Uso de atributos estáticos para compartir información entre todas las instancias de una clase (ej. cantidad total de cuentas o de dinero).
*   **Métodos estáticos:** Funciones miembro que pueden ser llamadas directamente desde la clase sin necesidad de instanciar un objeto.
*   **Timestamps y Logs:** Generación de marcas de tiempo estructuradas para recrear un archivo de registro (log) exacto.