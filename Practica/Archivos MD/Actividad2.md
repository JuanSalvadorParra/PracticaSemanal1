# Actividad 2

## 1️⃣ Proceso del downcast

El **downcast** consiste en convertir un puntero de la clase base a una clase derivada.  
Pero **no siempre es seguro**, porque el objeto real puede no ser de la clase derivada.


En este proceso se utiliza `dynamic_cast`, el cual:

- Verifica en tiempo de ejecución el tipo real del objeto.
- Comprueba si el objeto apuntado realmente es de cierto tipo.
- Si la conversión es válida, devuelve un puntero válido.
- Si no es válida, devuelve `nullptr`.

En este ejemplo:

``` cpp
Animal* animal1 = new Perro();
Perro* perro2 = dynamic_cast<Perro*>(animal1); 

if (perro2 != nullptr) { 
    cout << endl << "Downcast exitoso" << endl;
    perro2->babear();
}
else
    cout << endl << "Downcast fallido" << endl;

Mamifero* mamifero1 = new Mamifero();
Animal* animal2 = mamifero1;

Perro *perro3 = dynamic_cast<Perro*>(animal2); 
// Como animal2 no esta apuntando a un perro devuelve nullptr

if (perro3 != nullptr) { 
    cout << endl << "Downcast exitoso" << endl;
    perro3->babear();
}
else
    cout << endl << "Downcast fallido" << endl; 
```

En el primer caso, como el puntero `animal1` realmente esta apuntando a un `perro` él `dinamic_cast` devuelve un puntero valido y se ejecuta la funcion exclusiva de perro `"babear()"`.

En el segundo caso, el puntero `animal1` apunta a un `Mamifero`, no un `Perro`, por lo tanto el `dynamic_cast` devuelve `nullptr` y se envia un mensaje de `"Downcast fallido"`.

Por lo tanto, se demuestra que el downcast no siempre es seguro y se debe usar él `dynamic_cast` para evitar problemas en tiempo de ejecucion