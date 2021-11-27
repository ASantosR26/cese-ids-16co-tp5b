/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

/**
 * @brief Estructura que almacenará los datos del alumno.
 */
typedef struct alumno_s {
    char apellidos[30]; /**< Array de caracteres que almacena el apellido del alumno. */
    char nombres[30];   /**< Array de caracteres que almacena el nombre del alumno. */
    char documento[11]; /**< Array de carateres que almacena el número de documento del alumno. */
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

/** 
 * @brief Función que formatea los datos de un alumno en una cadena de caracteres.
 * @param cadena Buffer donde se almacena los datos formateados del alumno.
 * @param espacio Tamaño del buffer que almacena la información del alumno.
 * @param alumno Estructura de datos que contiene la información de un alumno.
 * @return true Si el proceso ha sido exitoso.
 * @return false Si hubo algún error en el proceso.
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/**
 * @brief Función que concatena en un solo buffer la información de todos los alumnos.
 * @param cadena Buffer donde se almacena la información de los alumnos.
 * @param espacio Tamaño del buffer que almacena la información de los alumnos
 * @return true Si el proceso ha sido exitoso.
 * @return false Si hubo algún error en el proceso.
 */
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
