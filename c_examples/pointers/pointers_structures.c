/***********************************************************************************************************************
 * @file    pointers_structures.c
 *
 * @brief   brief description
 * 
 * detailed description
 *  
 * @par
 * @author 	george_howell
 **********************************************************************************************************************/

/*------------------------------------------- INCLUDES ---------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

/*------------------------------------------- EXTERN VARIABLES -------------------------------------------------------*/
/*------------------------------------------- PRIVATE MACROS AND DEFINES ---------------------------------------------*/

#define PSTRUCT_NCOLS				5

/*------------------------------------------- PRIVATE TYPEDEFS -------------------------------------------------------*/

typedef struct struct_1_t
{
	int *val;
	int **arr2d;
} struct_1_t;

typedef struct struct_2_t
{
	struct_1_t str;
	struct_1_t *pStr;
} struct_2_t;

/*------------------------------------------- STATIC VARIABLES -------------------------------------------------------*/
/*------------------------------------------- GLOBAL VARIABLES -------------------------------------------------------*/
/*------------------------------------------- STATIC FUNCTION PROTOTYPES ---------------------------------------------*/

static void print_1d_array(int len, int *arr);

/*------------------------------------------- STATIC FUNCTIONS -------------------------------------------------------*/

static void print_1d_array(int len, int *arr)
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
 * @brief 	initialise pointer value within a structure
 * 
 * creates a structure, initialises a value and writes values
 */
void pointers_structs_init_struct_val(void)
{
	struct_1_t str;

	// allocate memory for pointer value
	str.val = (int*)malloc(sizeof(int));

	// assign a value
	*(str.val) = 5;

	printf("pointers_structs_init_struct_val\n");
	printf("%d\n", *(str.val));
	printf("\n");
}

/**
 * @brief 	initialise pointer array within a structure
 *
 * creates a structure, initialises an array and writes values to it
 */
void pointers_structs_init_struct_array(void)
{
	int i;
	struct_1_t str;

	// allocate memory for pointer value
	str.val = (int*)malloc(PSTRUCT_NCOLS*sizeof(int));

	// assign values to the array
	for (i = 0; i < PSTRUCT_NCOLS; i++)
	{
		str.val[i] = i+1;
	}

	printf("pointers_structs_init_struct_array\n");
	print_1d_array(PSTRUCT_NCOLS, str.val);
	printf("\n");
}

/**
 * @brief 	initialise pointer array within a structure
 *
 * creates a structure within a structure, initialises an array and writes data to it
 */
void pointers_structs_init_struct_within_struct(void)
{
	int i;
	struct_2_t str2;
	struct_1_t str1;

	// allocate memory for pointer value
	str1.val = (int*)malloc(PSTRUCT_NCOLS*sizeof(int));
	str2.str.val = (int*)malloc(PSTRUCT_NCOLS*sizeof(int));

	// assign values to the array
	for (i = 0; i < PSTRUCT_NCOLS; i++)
	{
		str1.val[i] = i+1;
		str2.str.val[i] = i+1;
	}

	// assign to parent structure
	str2.pStr = &str1;

	printf("pointers_structs_init_struct_within_struct\n\n");

	printf("str2.str.val\n\n");
	print_1d_array(PSTRUCT_NCOLS, str2.str.val);
	printf("\n");

	printf("str2.pStr->val\n\n");
	print_1d_array(PSTRUCT_NCOLS, str2.pStr->val);
	printf("\n");
}

/**
 * @brief 	initialise pointer array within a pointer structure
 *
 * creates a structure within a pointer structure, initialises an array and writes data to it
 */
void pointers_structs_init_struct_within_struct_pointer(void)
{
	int i;
	struct_2_t str2Tmp;
	struct_2_t *str2 = &str2Tmp;
	struct_1_t str1;

	// allocate memory for pointer value
	str1.val = (int*)malloc(PSTRUCT_NCOLS*sizeof(int));
	str2->str.val = (int*)malloc(PSTRUCT_NCOLS*sizeof(int));

	// assign values to the array
	for (i = 0; i < PSTRUCT_NCOLS; i++)
	{
		str1.val[i] = i+1;
		str2->str.val[i] = i+1;
	}

	// assign to parent structure
	str2->pStr = &str1;

	printf("pointers_structs_init_struct_within_struct_pointer\n\n");

	printf("str2->str.val\n\n");
	print_1d_array(PSTRUCT_NCOLS, str2->str.val);
	printf("\n");

	printf("str2->pStr->val\n\n");
	print_1d_array(PSTRUCT_NCOLS, str2->pStr->val);
	printf("\n");
}
