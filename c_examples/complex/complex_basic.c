/***********************************************************************************************************************
 * @file    complex_basic.c
 *
 * @brief  	basic complex functions
 *  
 * @par
 * @author 	ghowell
 **********************************************************************************************************************/

/*------------------------------------------- INCLUDES ---------------------------------------------------------------*/

#include <stdio.h>
#include <complex.h>

#include "main.h"

/*------------------------------------------- EXTERN VARIABLES -------------------------------------------------------*/
/*------------------------------------------- PRIVATE MACROS AND DEFINES ---------------------------------------------*/
/*------------------------------------------- PRIVATE TYPEDEFS -------------------------------------------------------*/
/*------------------------------------------- STATIC VARIABLES -------------------------------------------------------*/
/*------------------------------------------- GLOBAL VARIABLES -------------------------------------------------------*/
/*------------------------------------------- STATIC FUNCTION PROTOTYPES ---------------------------------------------*/
/*------------------------------------------- STATIC FUNCTIONS -------------------------------------------------------*/
/*------------------------------------------- GLOBAL FUNCTIONS -------------------------------------------------------*/

/**
 * @brief 	load complex data by value
 */
void complex_load_by_value(void)
{
	float complex arr[2];

	arr[0] = 2 + 3*I;
	arr[1] = 5.0 - 2.1*I;

	printf("%.2f + %.2fi\n", crealf(arr[0]), cimagf(arr[0]));
	printf("%.2f + %.2fi\n", crealf(arr[1]), cimagf(arr[1]));
}

/**
 * @brief 	load complex data by cast
 */
void complex_load_by_cast(void)
{
	float arr[4] = {3.2, 5.6, 2.9, -7.5};

	float complex *arrCpx;

	arrCpx = (complex float*)arr;

	printf("%.2f + %.2fi\n", crealf(arrCpx[0]), cimagf(arrCpx[0]));
	printf("%.2f + %.2fi\n", crealf(arrCpx[1]), cimagf(arrCpx[1]));
}
