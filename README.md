# Posicionador_Caracterizacion
Repositorio para archivos de control de sistema de automatización de motores NEMA23 con LabVIEW y arduino,

Los archivos ejecutables para este programa se encuentran en el repositorio https://github.com/SebRey1995/Posicionador_Caracterizacion.git 

SE DEBERÁN DESCARGAR TODOS LOS ARCHIVOS A UNA UBICACION A ELECCION EN LA COMPUTADORA.

PARA LA SECCIÓN DE IDE DE ARDUINO: El archivo denominado "motor2.ino" se encuentra en la carpeta denominada "motor2". 
PARA LA SECCIÓN DEL EJECUTABLE: El archivo denominado "Posicionador_VF.exe" se encuentra en la carpeta "LabVIEW".

Nota: Para conexión serial entre Gaussmetro y PC, será necesario instalar el archivo ejecutable contenido en la raíz del repositorio proporcionado al principio de este manual. El nombre del archivo es PL2303_64bit_Installer.exe. 
ENCENDER GAUSSMETRO MODELO 6010
IDE DE ARDUINO
1.  Los pines para la conexión del driver del motor con el Arduino están indicados en el archivo "motor2.ino" mediante las variables "DirPin", "StepPin", "EnnablePin" para el motor en X, y "DirPin2", "StepPin2", "EnnablePin2", para el motor en Y. El primer pin refiere a la Dirección; el segundo es el pin para mandarle el tren de pulsos y el tercero para habilitar el motor.

2.  Para modificar el desplazamiento de 1mm de ambos motores, se deberá modificar el archivo "motor2.ino" en la sección después del loop denominada "void stepMotor" y "void Stepmotor2, modificar la variable steps por la cantidad de desplazamiento deseado, tomando en cuenta que steps = 1000 = 1mm de desplazamiento.

Abrir PROGRAMA Posicionador_VF.exe  con los archivos .aliases y .ini en la misma carpeta en la que se ejecuta el archivo  Posicionador_VF.exe 

3.  En el apartado "Puerto Serial de Arduino" en la parte superior izquierda, indicar el puerto serial del Arduino. Para verificar en qué puerto se localiza, dirigirse al menú inicio y escribir "Administrador de dispositivos". Seguido de esto se dará clic en la opción con el mismo nombre y, en la ventana que emerge, se buscará el apartado "Puertos COM y LPT". El puerto del Arduino lleva por nombre inicial "Arduino".

4.  Para seleccionar el puerto del Gaussmetro, dirigirse como en el paso anterior al Administrador de dispositivos y en el apartado Puerto COM y LPT buscar el nombre "Prolific USB-to-Serial Comm Port", y el nombre del puerto se especificará entre paréntesis. Este nombre de puerto se especificará en el apartado "Puerto Serial del Gaussmetro" ubicado debajo del apartado "Puerto Serial de Arduino". 

5.  Ingresar la longitud [en mm] del imán.

6.  Ingresar la altura [en mm] del imán.

7.  Crear un archivo de texto .txt en la computadora (ubicación a elección) para guardar archivos.

8.  En el apartado "Ruta de archivo de medición" se deberá introducir la ubicación del archivo creado en el paso anterior.

9.  Colocar el imán a caracterizar de forma que la probeta se encuentre del lado superior izquierdo de este. Esto debido a que el movimiento horizontal es hacia la derecha, y el movimiento vertical es hacia abajo.

10. Verificar Conexión entre el Arduino y el posicionador. Esto se realiza observando un foco led color naranja en la carcasa del motor negro ubicado en el extremo izquierdo del riel horizontal (esto indica que la comunicación serial fue exitosa).

11.  En caso de estar apagada la luz led naranja del motor, se deberá reiniciar el programa. Para esto se presionará el botón rojo de la parte superior izquierda y se esperará unos segundos hasta ver la luz LED naranja encenderse. Una vez encendida esta luz, se correrá el programa con la flecha blanca de la parte superior izquierda.

12.  Se deberá iniciar colocando la posición inicial en X (Derecha e Izquierda). Una vez finalizada la posición inicial en X, oprimir el botón "Listo X". Al finalizar, deberá parpadear una vez el foco led naranja y se volverá a encender.

13.  Seguido, se colocará la posición inicial en Y (Arriba y Abajo). Una vez finalizada la posición inicial en Y, oprimir el botón "Listo Y". Al finalizar esto, parpadeará una vez el LED naranja y se dará inicio la caracterización deseada.

NOTA: SÓLO PARA LA POSICIÓN DE INICIO EN LA QUE POSICIÓN X = 0 Y POSICIÓN Y = 0, SE TOMARÁ LA MEDICIÓN DE ESE PUNTO, PERO NO SE DESPLAZARÁ 1mm A LA DERECHA. PARA TODOS LOS DEMÁS CASOS SÍ SE DESPLAZARÁ NORMALMENTE.

Creado por:
Sebastian A. Reyes Romero
Contacto: rerosa@ier.unam.mx
