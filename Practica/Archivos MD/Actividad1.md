# Actividad 1: Relaciones y Upcast 

## 1️⃣ Tipo de relación entre las clases

En el código se observa una relación de **herencia** entre las clases:

- `Animal` → Clase base
- `Mamifero` → Hereda de `Animal`
- `Perro` → Hereda de `Mamifero`

Por lo tanto:

- Un `Perro` **es un** `Mamifero`
- Un `Mamifero` **es un** `Animal`
- Por lo tanto, un `Perro` **es un** `Animal`

## 2️⃣ ¿Por qué el Upcast es seguro?

En el código se realiza el siguiente upcast:

```cpp
Perro* perro = new Perro();

Animal* animal = perro;
Mamifero* mamifero = perro;
```

El upcast es seguro porque:

- Un objeto derivado contiene completamente a su clase base, por lo que el puntero a la base apunta a una parte válida del objeto derivado.
- El objeto original no se altera, solo cambia el tipo del puntero.
- Se cumple el principio "es un": todo `Perro` es un `Animal`, lo que hace válida la conversión.