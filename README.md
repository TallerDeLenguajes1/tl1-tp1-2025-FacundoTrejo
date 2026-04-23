# Punto 2

## ¿Por qué es conveniente incluirlo?
 Incluir un archivo .gitignore ofrece varias ventajas clave para la gestión de proyectos:
- **Mantiene el repositorio limpio:** Evita subir archivos innecesarios o generados automáticamente que no forman parte del código fuente, como ejecutables o dependencias.
- **Seguridad de datos sensibles:** Previene la exposición accidental de información crítica como contraseñas, claves de API o archivos de configuración local en repositorios compartidos.
- **Eficiencia en el almacenamiento:** Evita que el repositorio crezca excesivamente al excluir carpetas pesadas (como node_modules en proyectos Node.js) que pueden reinstalarse fácilmente.
- **Orden en el historial:** Facilita el uso de comandos globales como git add . sin preocuparse por rastrear archivos temporales o específicos del sistema operativo (como .DS_Store en Mac).

## ¿Cuándo se debe hacer?
 Es fundamental crear el archivo .gitignore **al inicio del proyecto**, idealmente en el primer commit del repositorio. 
- **Momento ideal:** Inmediatamente después de ejecutar git init y antes de realizar el primer git add ..
- **Nota importante:** Si un archivo ya ha sido rastreado por Git, añadirlo al .gitignore no lo eliminará del historial; en ese caso, se debe usar git rm --cached para dejar de rastrearlo. 

##  ¿Cómo configuraría el archivo .gitignore?
 Para configurar el archivo correctamente, siga estos pasos:
1. **Creación:** Cree un archivo llamado exactamente .gitignore (con el punto al principio) en la raíz del proyecto.
    * a) En Windows, puede usar editores como Visual Studio Code o el Bloc de notas (asegurándose de guardar como "Todos los archivos").
    * b) En la terminal (Linux/Mac/Windows), puede usar touch .gitignore.
2. **Definición de reglas:** Escriba en líneas separadas los nombres o patrones de los elementos a excluir.
    * a) **Archivo específico:** config.ini
    * b) **Directorio completo:** node_modules/ (la barra indica que es una carpeta).
    * c) **Extensiones (comodines):** *.log ignora todos los archivos que terminen en .log.
3. **Uso de plantillas:** Para mayor comodidad, puede usar herramientas como la extensión de .gitignore en Visual Studio Code o sitios como gitignore.io para generar archivos basados en su lenguaje o framework.

# Punto 3

## a) - **Sobre el código misterioso:** Tenemos 3 funciones. La primera función se encarga de invertir el número, así que le cambié el nombre a "funcion_invertir". La segunda función solo se encarga de dividir el número en 2 así que le puse "f_div_mitad". La tercera función suma el valor de la variable temp, por ejemplo si temp es 123, suma 1 + 2 + 3; luego a ese resultado lo suma al valor almacenado en el puntero *p así que le puse "f_sumarVarMasPuntero".
