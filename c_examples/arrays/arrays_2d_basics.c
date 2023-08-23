/***********************************************************************************************************************
 * @file    2d_arrays_basics.c
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

/*------------------------------------------- EXTERN VARIABLES -------------------------------------------------------*/
/*------------------------------------------- PRIVATE MACROS AND DEFINES ---------------------------------------------*/

#define ABASICS_NROWS               3
#define ABASICS_NCOLS               3

/*------------------------------------------- PRIVATE TYPEDEFS -------------------------------------------------------*/
/*------------------------------------------- STATIC VARIABLES -------------------------------------------------------*/
/*------------------------------------------- GLOBAL VARIABLES -------------------------------------------------------*/
/*------------------------------------------- STATIC FUNCTION PROTOTYPES ---------------------------------------------*/

static void print_array(int nRows, int nCols, int arr[nRows][nCols]);

/*------------------------------------------- STATIC FUNCTIONS -------------------------------------------------------*/

static void print_array(int nRows, int nCols, int arr[nRows][nCols])
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
 * @brief 	Basic Creation - Zero Initialisation
 * 
 * Initialise the array to zero, then writes the data, print before and array to compare results.
 */
void arrays_2d_init_with_zeros(void)
{
    int i, j;

    // create 2d array and assign all zeros
    int array[ABASICS_NROWS][ABASICS_NCOLS] = {0};

    printf("arrays_2d_init_with_zeros\n\n");

    printf("arrays before\n");
    print_array(ABASICS_NROWS, ABASICS_NCOLS, array);

    // add data to array
    for (i = 0; i < ABASICS_NROWS; i++)
    {
        for (j = 0; j < ABASICS_NCOLS; j++)
        {
            array[i][j] = i*ABASICS_NCOLS + j + 1;
        }
    }

    printf("array after\n");
    print_array(ABASICS_NROWS, ABASICS_NCOLS, array);
}

/**
 * @brief   Basic Creation - Data Initialisation
 *
 * Initialise the array with data
 */
void arrays_2d_init_with_data(void)
{
    // create 2d array and assign all zeros
    int array[ABASICS_NROWS][ABASICS_NCOLS] = {{1,2,3},
                                {1,2,3},
                                {1,2,3}};

    printf("arrays_2d_init_with_data\n");
    print_array(ABASICS_NROWS, ABASICS_NCOLS, array);
}
