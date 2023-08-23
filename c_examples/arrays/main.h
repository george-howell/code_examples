/***********************************************************************************************************************
 * @file    main.h
 *
 * @brief   brief description
 * 
 * detailed description
 *  
 * @par
 * @author 	ghowell
 **********************************************************************************************************************/

#ifndef _MAIN_H_
#define _MAIN_H_

#ifdef __cplusplus
extern "C" {
#endif

/*------------------------------------------- INCLUDES ---------------------------------------------------------------*/
/*------------------------------------------- INCLUDES ---------------------------------------------------------------*/
/*------------------------------------------- MACROS AND DEFINES -----------------------------------------------------*/
/*------------------------------------------- TYPEDEFS ---------------------------------------------------------------*/
/*------------------------------------------- EXPORTED VARIABLES -----------------------------------------------------*/
/*------------------------------------------- GLOBAL FUNCTION PROTOTYPES ---------------------------------------------*/

/*
 * 2D Arrays Basics
 */

void arrays_2d_init_with_zeros(void);
void arrays_2d_init_with_data(void);

/*
 * 2D Arrays and Pointers
 */

void arrays_2d_assign_to_pointer(void);
void arrays_2d_interleave_data(void);
void arrays_2d_deinterleave_data(void);

/*
 * 2D Arrays and Structures
 */

void arrays_2d_structs_assign_data(void);
void arrays_2d_structs_assign_data_point_struct(void);

#ifdef __cplusplus
}
#endif

#endif /* _MAIN_H_ */
