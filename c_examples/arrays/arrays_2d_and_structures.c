/***********************************************************************************************************************
 * @file    arrays_2d_and_structures.c
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

/*------------------------------------------- EXTERN VARIABLES -------------------------------------------------------*/
/*------------------------------------------- PRIVATE MACROS AND DEFINES ---------------------------------------------*/

#define ASTRUCT_NROWS                 3
#define ASTRUCT_NCOLS                 4
#define ASTRUCT_N                     (ASTRUCT_NROWS * ASTRUCT_NCOLS)

/*------------------------------------------- PRIVATE TYPEDEFS -------------------------------------------------------*/

typedef struct
{
    int array1[ASTRUCT_NROWS][ASTRUCT_NCOLS];
    int (*array2)[ASTRUCT_NCOLS];       // a pointer to a 1d array of length NCOLS
} struct_2d_t;

/*------------------------------------------- STATIC VARIABLES -------------------------------------------------------*/
/*------------------------------------------- GLOBAL VARIABLES -------------------------------------------------------*/
/*------------------------------------------- STATIC FUNCTION PROTOTYPES ---------------------------------------------*/

static void print_2d_array(int nRows, int nCols, int arr[nRows][nCols]);

/*------------------------------------------- STATIC FUNCTIONS -------------------------------------------------------*/

static void print_2d_array(int nRows, int nCols, int arr[nRows][nCols])
{
    int i, j;

    for (i = 0; i < nRows; i++)
    {
        for (j = 0; j < nCols; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

/*------------------------------------------- GLOBAL FUNCTIONS -------------------------------------------------------*/

/**
 * @brief 	2D Array to Structure
 * 
 * Assigns values to 2D arrays in a structure
 */
void arrays_2d_structs_assign_data(void)
{
    int i, j;
    struct_2d_t str;

    // allocate memory for each row
    str.array2 = (int(*)[])malloc(ASTRUCT_NROWS*sizeof(int));

    // assign data
    for (i = 0; i < ASTRUCT_NROWS; i++)
    {
        for (j = 0; j < ASTRUCT_NCOLS; j++)
        {
            str.array1[i][j] = (i*ASTRUCT_NCOLS) + j + 1;
            str.array2[i][j] = (i*ASTRUCT_NCOLS) + j + 1;
        }
    }

    printf("arrays_2d_structs_assign_data\n\n");

    printf("array 1\n");
    print_2d_array(ASTRUCT_NROWS, ASTRUCT_NCOLS, str.array1);

    printf("array 2\n");
    print_2d_array(ASTRUCT_NROWS, ASTRUCT_NCOLS, str.array2);
}

/**
 * @brief   2D Array to Pointer Structure
 *
 * Assigns values to 2D arrays in a pointer structure
 */
void arrays_2d_structs_assign_data_point_struct(void)
{
    int i, j;
    struct_2d_t str;
    struct_2d_t *pStr = &str;

    // allocate memory for each row
    pStr->array2 = (int(*)[])malloc(ASTRUCT_NROWS*sizeof(int));

    // assign data
    for (i = 0; i < ASTRUCT_NROWS; i++)
    {
        for (j = 0; j < ASTRUCT_NCOLS; j++)
        {
            pStr->array1[i][j] = (i*ASTRUCT_NCOLS) + j + 1;
            pStr->array2[i][j] = (i*ASTRUCT_NCOLS) + j + 1;
        }
    }

    printf("arrays_2d_structs_assign_data_point_struct\n\n");

    printf("array 1\n");
    print_2d_array(ASTRUCT_NROWS, ASTRUCT_NCOLS, pStr->array1);

    printf("array 2\n");
    print_2d_array(ASTRUCT_NROWS, ASTRUCT_NCOLS, pStr->array2);
}
