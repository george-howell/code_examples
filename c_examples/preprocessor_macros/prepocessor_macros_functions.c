/***********************************************************************************************************************
 * @file    prepocessor_macros_functions.c
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

#define PI                              3.14

#define AREA_CIRCLE(x)                  (PI*(x)*(x))

#define DEBUG(...)                      printf(__VA_ARGS__)

#define SWAP(a,b)                       ({a ^= b; b ^= a; a ^= b;}) // use xor operation

#define FNC_DEF(x)                      fnc(x)

#define TEST_DEF(x, y, args...)         test_fnc(x, y, ##args)

/*------------------------------------------- PRIVATE TYPEDEFS -------------------------------------------------------*/
/*------------------------------------------- STATIC VARIABLES -------------------------------------------------------*/
/*------------------------------------------- GLOBAL VARIABLES -------------------------------------------------------*/
/*------------------------------------------- STATIC FUNCTION PROTOTYPES ---------------------------------------------*/
/*------------------------------------------- STATIC FUNCTIONS -------------------------------------------------------*/

void test_fnc(int a, int b, int c)
{
    printf("%d\t%d\t%d\n",a,b,c);
}


void fnc(int x)
{
    printf("%d\n",x);
}

/*------------------------------------------- GLOBAL FUNCTIONS -------------------------------------------------------*/

/**
 * @brief 	brief description
 * 
 * detailed description
 */
void preproc_function_defs(void)
{
    printf("preproc_function_defs\n");

    DEBUG("The area of a circle is %.4f\n", AREA_CIRCLE(1));

    int a, b;
    a = 1;
    b = 2;
    SWAP(a,b);
    printf("Swapped value, a = %d and b = %d\n", a, b);

    FNC_DEF(4);
    TEST_DEF(6,7,8);
}
