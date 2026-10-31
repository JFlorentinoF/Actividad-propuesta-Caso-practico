# Programa: Cálculo del total a pagar

## 1. Datos del estudiante

- **Nombre completo:** Jordany Florentino Franco
- **Matrícula:** 2025-2608

## 2. Descripción breve del programa

Este programa en C++ permite calcular el total a pagar por una compra a partir de la cantidad de artículos y el precio de cada uno. Si el total de la compra supera los RD$5,000, se aplica automáticamente un descuento del 10%. Finalmente, muestra en pantalla el monto total que debe pagar el usuario.

## 3. Datos de entrada

- **Cantidad de artículos:** Número entero que representa la cantidad de artículos comprados.
- **Precio del artículo:** Número decimal que representa el precio individual de cada artículo.

## 4. Datos que procesa

- Multiplica la cantidad de artículos por el precio individual para obtener el subtotal.
- Comprueba si el subtotal es mayor que RD$5,000.
- Si supera los RD$5,000, aplica un descuento del 10%.
- Calcula y almacena el total final a pagar.

## 5. Datos de salida

- **Total a pagar:** Muestra el monto final de la compra, incluyendo el descuento cuando corresponda.

## Capturas del programa en ejecución

### Prueba 1: Sin descuento
![image alt](https://github.com/JFlorentinoF/Actividad-propuesta---Caso-pr-ctico/blob/5e0ffcb8f955bb8b5741f41b26b764c644afcd21/Prueba1.png)
### Prueba 2: Con descuento
![image alt](https://github.com/JFlorentinoF/Actividad-propuesta---Caso-pr-ctico/blob/f4a8bd4d6c686cb5872c9e7c16f6863c36e5ded2/Prueba2.png)

## 6. Estructuras utilizadas y su función

- **Función `calcularTotalPagar()`:** Se utiliza una función de tipo `double` porque necesita realizar operaciones matemáticas y retornar el total de la compra. Recibe la cantidad y el precio como parámetros, calcula el subtotal y aplica el descuento del 10% si supera los RD$5,000.

- **Procedimiento `mostrarTotal()`:** Se utiliza un procedimiento de tipo `void` porque su propósito es mostrar el resultado en pantalla y no necesita retornar ningún valor.

- **Estructura condicional `if`:** Permite comprobar si el total de la compra supera los RD$5,000 para determinar si corresponde aplicar el descuento.

- **Estructura secuencial:** Permite ejecutar las instrucciones en orden: solicitar los datos, realizar el cálculo y mostrar el resultado.
