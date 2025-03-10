# Proyecto
## Daños COD
### Juan Triana & Santiago Forero
  
***1.1 Análisis del problema***
* Descripción clara del problema
En este problema se nos plantea la generación de un código que arroje diferentes resultados, de acuerdo a sus variables, en este caso se utiliza el Call of Duty y las variables de daño.
Se nos plantea el daño generado por 3 tipos de munición y la cantidad de escudo que se tenga, los tres tipos de munición son: la normal la cual nos genera un daño base, la perforante, la cual genera un daño base, pero ignora la mitad del escudo, y la explosiva que genera el doble de daño, pero no ignora el escudo.
Al final del problema nos tiene que decir cuanto daño se genero y si fue crítico o no, dependiendo del daño generado y la cantidad de escudo.
* Identificación requisitos funcionales y no funcionales.
En el problema todo nos sirve como un requisito funcional, ya que se nos menciona cuanto daño debe generar cada bala, sus características, además del escudo y como afecta el daño recibido.
* Análisis de casos de uso principales.
El uso principal del código es reaccionar y generar diferentes resultados de acuerdo a las variables dadas, esto funciona en cualquier videojuego o aplicación, por medio de un condicional, un elif en caso de otro resultado en la variable y un else en caso de no existir o coincidir con el resultado de la variable.
*  Identificación de entradas, procesos y salidas esperadas.
Como entrada podemos identificar las variables, las cuales serian las balas, el escudo, y que tipo o cantidad se utiliza en cada uno, en el caso de las balas si es una normal, perforante o explosiva, y en caso de las placas es si generan 10, 20, o más protección al jugador.
Como salida se nos da el resultado de todo el proceso, en esta ocasión es poder conocer si fue un daño crítico, y cuanto daño se le causo al jugador.
  
***1.2 Justificación de la solución***
*	Explicación detallada de la estrategia decidida para resolver el problema.
Para desarrollar el código tanto en C++  como en Python en este problema utilizamos los condicionales if, else, y if else o elif cada uno para su respectivo lenguaje, para después utilizar una herramienta del respectivo lenguaje para dejar digitar al usuario que tipo de bala utiliza, las placas y el daño de bala, de esta manera con los datos dados por el usuario se realizan 3 diferentes operaciones, la primera que es el daño causado menos el escudo, la segunda que es el daño causado menos la mitad del escudo, y la tercera que es el doble de daño – el escudo
*	Justificación de la estructura de datos y algoritmos seleccionados.
Utilizamos los condicionales, ya que es necesario generar una respuesta ante las diversas soluciones que se den, de lo contrario solo podremos generar una solución, en ves de varios procedimientos según lo que se escoge.
*	Comparación con posibles soluciones alternativas y razones de la elección final.
Otra posible solución es utilizando los case, los cuales cumplen casi la misma función que el if, pero estos es preferiblemente utilizarlos en casos de mas condicionales, pero se pueden utilizar casi de la misma manera.
  
***1.3. Diagrama UML***
![WhatsApp Image 2025-03-08 at 3 07 19 PM](https://github.com/user-attachments/assets/a549eb25-f9d2-4240-8c1f-1262b45ee0b2)
![WhatsApp Image 2025-03-08 at 3 06 50 PM](https://github.com/user-attachments/assets/371261df-af50-4985-ba80-758b9aa29a03)
