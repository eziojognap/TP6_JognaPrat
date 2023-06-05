/***************************************************************************************************
 * @file    BSP.H
 * @author  eziojognap
 * @date
 * @brief
 **************************************************************************************************/

/************************************* C++ compilar como C ****************************************/
#ifdef __cplusplus /*Esta definición se usa para compilar en c codigo que es de c++*/
extern "C" {
#endif

/************************************* INCLUDES ***************************************************/
#include <stdbool.h>
#include "digital.h"

/************************************* MACROS AND DEFINES *****************************************/

/************************************* TYPEDEFS
 ***************************************************/

typedef struct board_estructura {
    digital_output_puntero led_verde;
    digital_output_puntero led_rojo;
    digital_output_puntero led_amarillo;
    digital_output_puntero led_azul;

    digital_input_puntero Boton1;
    digital_input_puntero Boton2;
    digital_input_puntero Boton3;
    digital_input_puntero Boton4;
} const * const board_puntero;

/************************************* EXPORTED VARIABLES *****************************************/

/************************************* GLOBAL FUNCTION PROTOTYPES *********************************/

board_puntero BoardCreate(void);

#ifdef __cplusplus /*Con esto se cierra la la def condicional para compilar en c codigo que es de  \
                      c++*/
}
#endif