
La directiva de preprocesador #include se usa en los lenguajes C y C++
para «incluir» las declaraciones de otro fichero en la compilación.
Esta directiva no tiene más misterio para proyectos pequeños. En cambio,
puede ayudar aprovechar bien esta directiva en proyectos con un gran número de subdirectorios.

Cuando el preprocesador encuentra una línea #include "fichero", entonces
reemplaza esta línea por el fichero incluido. Así procede con todas las
directivas de inclusión – también en aquellas anidadas en los fichero
ya a su vez incluidos. Es decir, existe un sólo fichero grande tras la precompilación.

No obstante, esta unión de varios ficheros no tiene lugar físicamente. Lo que sucede
es que se interrumpe la compilación del fichero actual, se compila el fichero incluido
y, tras compilarlo, se continúa con el primero. Por eso, el compilador puede
decirnos, en qué fichero tuvo lugar un error de compilación.

La directiva #include existe en dos versiones. En una se pone el nombre de 
fichero entre comillas, en la otra entre paréntesis angulares (el signo menor y mayor como «comillas»).
1
2
	
#include "fichero_con_comillas.h"
#include <fichero_entre_menor_y_mayor.h>

La versión con los paréntesis angulares busca los ficheros en todos los directorios
que se han especificado en la llamada al compilador – normalmente con la opción «-I».
Estos directorios se suelen rastrear por el fichero incluido en el orden en que
aparecen en la línea de comando.

Cuando se incluye un fichero entre comillas, entonces el compilador busca este fichero
primero en el mismo directorio que el fichero actualemente compilado y después
en los demás directorios


// Primero se debe incluir la cabecera de precompilación
#include "cabecera_de_precompilacion.h"
 
// Segundo, incluir la cabecera correspondiente
// a este fichero de implementación.
// Esto deja más claro, que es la
// clase que se implementa aquí.
#include "definicion_de_mi_clase.h"
 
// A continuación inclusiones de la biblioteca estándar.
// Se usan paréntesis angulares.
#include <vector>
 
// Inclusiones de otras bibliotecas de terceros
#include <wx.h>
#include <gl.h>
 
// Inclusiones de subbibliotecas básicas de
// mi proyecto con comillas
#include "mis_definiciones_basicas.h"
 
// Luego las demás inclusiones de mi proyecto
#include "clases_auxiliares.h"
#include "más_definiciones_para_mi_clase.h"

