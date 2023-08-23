/***********************************************************************************************************************
 * @file    arrays_2d_and_pointers.c
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

#define APTRS_NROWS                 3
#define APTRS_NCOLS                 4
#define APTRS_N                     (APTRS_NROWS * APTRS_NCOLS)

/*------------------------------------------- PRIVATE TYPEDEFS -------------------------------------------------------*/
/*------------------------------------------- STATIC VARIABLES -------------------------------------------------------*/
/*------------------------------------------- GLOBAL VARIABLES -------------------------------------------------------*/
/*------------------------------------------- STATIC FUNCTION PROTOTYPES ---------------------------------------------*/

static void print_1d_array(int len, int arr[len]);
static void print_2d_array(int nRows, int nCols, int arr[nRows][nCols]);

/*------------------------------------------- STATIC FUNCTIONS -------------------------------------------------------*/

static void print_1d_array(int len, int arr[len])
{
    int i;

    for (i = 0; i < len; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n\n");
}

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
 * @brief   Basic Creation - Data Initialisation
 *
 * Initialise array and write data to it in a linear fashion (i.e. a single for loop), by first associating it to a
 * pointer and iterating the pointer.
 */
void arrays_2d_assign_to_pointer(void)
{
    int i;

    // create 2d array and assign all zeros
    int array[APTRS_NROWS][APTRS_NCOLS] = {0};

    // assign array to pointer
    int *pArray = &array[0][0];

    // add data to array
    for (i = 0; i < APTRS_N; i++)
    {
        *(pArray+i) = i+1;
    }

    printf("arrays_2d_assign_to_pointer\n");
    print_2d_array(APTRS_NROWS, APTRS_NCOLS, array);
}

/**
 * @brief   Interleave data
 *
 * Create a interleaved array of data from a 2d array
 */
void arrays_2d_interleave_data(void)
{
    // create 2d array
    int array[APTRS_NROWS][APTRS_NCOLS] = {{1,2,3,4},{1,2,3,4},{1,2,3,4}};

    printf("arrays_2d_interleave_data\n\n");

    printf("2d array\n");
    print_2d_array(APTRS_NROWS, APTRS_NCOLS, array);

    int *pArray = &array[0][0];

    printf("interleaved data\n");
    print_1d_array(APTRS_N, pArray);
}

/**
 * @brief   Deinterleave data
 *
 * Take interleaved data and convert to a 2d array
 */
void arrays_2d_deinterleave_data(void)
{
    int i, j;
    int array[APTRS_N] = {0};

    // create interleaved data stream
    for (i = 0; i < APTRS_N; i += APTRS_NCOLS)
    {
        for (j = 0; j < APTRS_NCOLS; j++)
        {
            array[i+j] = j+1;
        }
    }

    printf("arrays_2d_deinterleave_data\n\n");

    printf("interleaved data\n");
    print_1d_array(APTRS_N, array);

    // create 2d array and assign all zeros
    int (*pArray)[APTRS_NROWS];

    pArray = (int(*)[APTRS_NROWS])array;

    printf("deinterleaved array\n");
    print_2d_array(APTRS_NROWS, APTRS_NCOLS, pArray);
}
