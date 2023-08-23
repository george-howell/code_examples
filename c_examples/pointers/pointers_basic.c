/***********************************************************************************************************************
 * @file    pointers_basic.c
 *
 * @brief   brief description
 * 
 * detailed description
 *  
 * @par
 * @author 	ghowell
 **********************************************************************************************************************/

/*------------------------------------------- INCLUDES ---------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/*------------------------------------------- EXTERN VARIABLES -------------------------------------------------------*/
/*------------------------------------------- PRIVATE MACROS AND DEFINES ---------------------------------------------*/

#define PBASIC_ARRAY_LEN              5

/*------------------------------------------- PRIVATE TYPEDEFS -------------------------------------------------------*/
/*------------------------------------------- STATIC VARIABLES -------------------------------------------------------*/
/*------------------------------------------- GLOBAL VARIABLES -------------------------------------------------------*/
/*------------------------------------------- STATIC FUNCTION PROTOTYPES ---------------------------------------------*/

void print_1d_array(int len, int *arr);

/*------------------------------------------- STATIC FUNCTIONS -------------------------------------------------------*/

void print_1d_array(int len, int *arr)
{
    int i;

    for (i = 0; i < len; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n\n");
}

/*------------------------------------------- GLOBAL FUNCTIONS -------------------------------------------------------*/

/**
 * @brief   initialise pointer to value by value
 *
 * Initialises a pointer that points to a value by pointing to another value
 */
void pointers_init_value(void)
{
    // create an array
    int val = 3;

    // create a pointer
    int *p = NULL;

    // assign address of value to pointer
    p = &val;

    printf("pointers_init_by_value\n");
    printf("%d\n", *p);
    printf("\n");
}

/**
 * @brief   initialise pointer to value by memory allocation
 *
 * Initialises a pointer that points a value by allocating memory for a single value
 */
void pointers_init_value_mem_alloc(void)
{
    // create a pointer
    int *p = NULL;

    // allocate memory for it
    p = (int*)malloc(sizeof(int));

    // assign address of value to pointer
    *p = 6;

    printf("pointers_init_value_mem_alloc\n");
    printf("%d\n", *p);
    printf("\n");

    free(p);
}

/**
 * @brief   initialise pointer array by array
 * 
 * Initialises a pointer that points to an array by pointing to another array
 */
void pointers_init_array(void)
{
    int i;

    // create an array
    int arr[PBASIC_ARRAY_LEN] = {0};

    // fill array with values
    for (i = 0; i < PBASIC_ARRAY_LEN; i++)
    {
        arr[i] = i+1;
    }

    // create a pointer
    int *p = NULL;

    // allocate array to pointer
    p = arr;

    printf("pointers_init_array\n");
    print_1d_array(PBASIC_ARRAY_LEN, p);
}

/**
 * @brief   initialise pointer array by memory allocation
 *
 * Initialises a pointer that points to an array by allocating memory for each array element
 */
void pointers_init_array_mem_alloc(void)
{
    int i;

    // create a pointer
    int *p = NULL;

    // allocate memory to it
    p = (int*)malloc(PBASIC_ARRAY_LEN*sizeof(int));

    // fill array with values
    for (i = 0; i < PBASIC_ARRAY_LEN; i++)
    {
        p[i] = i+1;
    }

    printf("pointers_init_array_mem_alloc\n");
    print_1d_array(PBASIC_ARRAY_LEN, p);
}
