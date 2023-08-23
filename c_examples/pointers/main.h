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
 * Pointers Basics
 */

void pointers_init_value(void);
void pointers_init_value_mem_alloc(void);
void pointers_init_array(void);
void pointers_init_array_mem_alloc(void);

/*
 * Pointer Structures
 */

void pointers_structs_init_struct_val(void);
void pointers_structs_init_struct_array(void);
void pointers_structs_init_struct_within_struct(void);
void pointers_structs_init_struct_within_struct_pointer(void);

#ifdef __cplusplus
}
#endif

#endif /* _MAIN_H_ */
