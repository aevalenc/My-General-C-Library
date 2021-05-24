// Author: Alejandro Valencia
// Project: My Library
// Update: 29 November, 2020

#ifndef _Mygclib_H_
#define _Mygclib_H_


    /************************************************************************
    * Linspace Function 													*
    ************************************************************************/
    /*
    !    This function creates an evenly spaced array
    !
    !    The inputs are as follows
    !
    !        A:  Array to be evenly spaced
    !        x0: Start value
    !        xf: Final value
    !        nx: Number of spaces
    !
    */

    int linspace(double A[],double x0, double xf, int nx);


    /************************************************************************
    * Display Array Function 												*
    ************************************************************************/
    /*
    !   This function displays an array horizontally in the command window
    !   or terminal. This function does NOT print matrices!
    !
    !    the inputs are as follows
    !
    !        A:  Array to be displayed
    !        nx: Size of array
    !
    */

    int dispArray(double A[], int nx);



    /************************************************************************
    * Display Column Vector Function 				    					*
    ************************************************************************/
    /*
    !   This function displays an array horizontally in the command window
    !   or terminal. This function does NOT print matrices!
    !
    !    the inputs are as follows
    !
    !        A:  Array to be displayed
    !        nx: Size of array
    !
    */

    int dispColumn(double A[], int nx);



    /************************************************************************
    * Data File To Plot Function 											*
    ************************************************************************/
    /*
    !    This function creates a .dat file with two columns, one x, one y to
    !    be plotted by 3rd party program. CANNOT plot 3-D
    !
    !    The inputs are as follows
    !
    !        name: A string that will be the name of the .dat file (name.dat)
    !        x:    Array, independent variable
    !        y:    Array, dependent variable
    !        nx:   Size of both arrays
    !
    */

    int plot2D(char name[], double x[], double y[],int nx);


    /************************************************************************
    * Data File to Plot Contour Function                                    *
    ************************************************************************/
    /*
    !   This function creates a .dat file with three columns, one x, one y,
    !   and one z to be plotted in 3-D or 2-D contours. CANNOT plot 2D
    !
    !   The inputs are as follows:
    !
    !        name: A string that will be the name of the .dat file (name.dat)
    !        x:    Matrix, 1st independent variable
    !        y:    Matrix, 2nd independent variable
    !        z:    Matrix, dependent variable
    !        nx:   Size of all arrays
    !
    */

    int plot3D(char name[], double x[], double y[], double z[], int ny);


    /************************************************************************
    * Display Matrix Function 					     				        *
    ************************************************************************/
    /*
    !    This function displays a matrix in the command window/terminal
    !
    !    The inputs are as follows
    !
    !        A: Matrix to be displayed
    !        m: Number of rows
    !        n: Number of columns
    !
    */

    int dispMatrix(double *A, int m, int n);



    /************************************************************************
    * Create Array of Zeros (Works for 2-D Matricies)                       *
    ************************************************************************/
    /*
     !    This function takes an array and fills its values with zeros
     !
     !    The inputs are as follows
     !
     !        x: Array to be converted into zeros
     !        n: Size of desired array (for a 2-D matrix simply multiply rows
     !            and columns)
     !
    */

    int zeros(double x[], int n);



    /************************************************************************
    * Create Array of Ones (Works for 2-D Matricies)                       *
    ************************************************************************/
    /*
     !    This function takes an array and fills its values with ones
     !
     !    The inputs are as follows
     !
     !        x: Array to be converted into zeros
     !        n: Size of desired array (for a 2-D matrix simply multiply rows
     !            and columns)
     !
    */

    int ones(double x[], int n);



    /************************************************************************
    * Create Identity Matrix                                                *
    ************************************************************************/
    /*
     !    This function creates the identity matrix. Recall the identity matrix
     !    is a square matrix with 1s in the principle diagonal
     !
     !    The inputs are as follows
     !
     !        x: Matrix that will become the identity matrix
     !        n: The number of columns/rows
     !
    */

    int eye(double x[], int n);


    /************************************************************************
    * Function To Turn Matrix Into Upper Triangular                         *
    ************************************************************************/
    /*
     !    This function performs an algorithm that turns a SQUARE matrix into
     !    an upper triangular one
     !
     !    This function requires the following as inputs
     !
     !        A: The matrix that will be trurned into an upper triangular one
     !        b: The right hand side of the matrix equation
     !        n: Number of columns
     !
    */

    int UpperTri(double A[],double b[], int n);



    /************************************************************************
    * Backwards Substitution                                                *
    ************************************************************************/
    /*
     !    This function performs a backwards substitution algorithm to solve
     !    the matrix equation Ax = b, where A is an UPPER triangular matrix.
     !
     !    This function requires the following inputs
     !
     !        A: The upper triangular matrix (square n x n)
     !        x: The array where the results will be placed (column n x 1)
     !        b: The right hand side of the matrix equation (column n x 1)
     !        n: The number of columns/rows of A
     !
    */

    int backsub(double A[], double x[], double b[],int n);



    /************************************************************************
    * Forward Substitution                                                  *
    ************************************************************************/
    /*
     !    This function performs a forward substitution algorithm to solve
     !    the matrix equation Ax = b, where A is an LOWER triangular matrix.
     !
     !    NOTE:This function works for a dominant LOWER triangular matrix
     !       where elements in diagonal (a_ii) is not 0
     !
     !    This function requires the following inputs
     !
     !        A: The lower triangular matrix (square n x n)
     !        x: The array where the results will be placed (column n x 1)
     !        b: The right hand side of the matrix equation (column n x 1)
     !        n: The number of columns/rows of A
     !
    */

    int forwardsub(double A[], double x[], double b[], int n);



    /************************************************************************
    * Doolittle LU Decomposition                                            *
    ************************************************************************/
    /*
     !   This function performs an LU Decomposition on a matrix A based on the
     !   Doolittle algorithm.
     !
     !   NOTE: L MUST be initialized as the identity matrix. Doolittle's
     !       algorithm is based on the lower triangular matrix having the
     !       values in the principle diagonal equal to 1.
     !
     !   The inputs are as follows
     !
     !       A: Square matrix to be decomposed
     !       L: Lower diagonal matrix
     !       U: Upper diagonal matrix
     !       n: Number of rows/columns
     !
    */

    int Doolittle(double A[], double L[], double U[], int n);



    /************************************************************************
    * Square Wave Function                                                  *
    ************************************************************************/
    /*
     !   This function outputs a square wave. This is based on underlining
     !   fact that the square function can be thought of as the sign of the
     !   sine funciton; i.e. The square function is 1 when the sine function
     !   is positive and -1 when the sine function is -1
     !
     !   The folowing are inputs
     !
     !       x: value
     !
    */

    int square(double x);



    /************************************************************************
    * Triangular Wave Function                                              *
    ************************************************************************/
    /*
     !   This function returns the triangle wave
    */
    double triangle(double x);



    /************************************************************************
    * Max of Array Function                                                 *
    ************************************************************************/
    /*
     ! This function find the max value of a number array
     !
     !   The inputs are as follows
     !
     !       x:  Number Array
     !       n:  Size of Array
     !
    */

    double max(double x[],int n);


    /************************************************************************
    * Build FDM Laplace Matrix Function                                     *
    ************************************************************************/
    /*
        ! This function creates the A matrix based on a Finite Difference 
        !   approach for the Laplace operator in 1D
        !
        !   NOTE: This function assumes that the boundary conditions will be
        !         applied to the RHS. Thus, this A matrix is positive 
        !         definite and symmetric
        !
        !   The inputs are as follows
        !
        !       A:  nxn matrix
        !       n:  No. of degrees of freedom
        !
    */
    int fdmLaplace1D(double *A, int n);


#endif
