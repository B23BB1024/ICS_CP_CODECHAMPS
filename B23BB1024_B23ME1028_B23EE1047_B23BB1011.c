#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function prototypes
float SquareArea (float side);
float CircleArea (float radius);
float TriangleArea (float base, float height);
float RectangleArea (float length, float width);
float TrapeziumArea (float base1, float base2, float height);
float EllipseArea (float majorAxis, float minorAxis);
float ParallelogramArea (float base, float height);
float RhombusArea (float d1, float d2);
float PolygonArea (float side, int number);
float squareMetersToSquareFeet (float squareMeters);
int
main ()
{
  int choice;

  printf
    ("\n\n\t\t\t\t\t\t   \033[1;4;31m  Hii  \033[0m \n\n \t\t\t\t\t \033[1;4;34m We 'THE CODE CHAMPS' presents :  \033[0m\n\n \t\t\t\t\t\t\033[1;4;34m AREA CLACULATOR \033[0m");

  printf
    ("\n\n\033[1;33mSo, Are you intersted to go further ? \033[0m\n\n\t \033[1;33mwrite 'y' for yes and 'n' for no : \033[0m");
  char welcome;
  scanf ("%c", &welcome);
  // printf("%c",welcome);

  if (welcome == 'n')
    {
      printf
	("\n\n\n\t\t\t\t\t \033[1;31m      you have requested to end program \033 \n\t\t\t\t\t\t PROGRAM ENDED !!!! GOOD BYE !!!!! \n\n\t\t\t\t\t\t     HAVE A NICE DAY!!!! ");

      exit (1);
    }
  else if (welcome == 'y')
    {

      do
	{
	  printf
	    ("\n\n\n\033[1;36m These are options available : \n\n \033[0m");
	  // Display menu
	  printf
	    ("\033[1;31m 1.Rectangle                             \033[0m");
	  printf
	    ("\033[1;31m    2.Square                                \033[0m");
	  printf ("\033[1;31m    3.Circle\033[0m\n\n");
	  printf
	    ("\033[1;32m  * * * * * * *                             * * * * *                                   * * * * \033[0m\n");
	  printf
	    ("\033[1;32m  *           *                             *       *                                  *        *\033[0m\n");
	  printf
	    ("\033[1;32m  *           *                             *       *                                |*          *|\033[0m\n");
	  printf
	    ("\033[1;32m  * * * * * * *                             * * * * *                                  *         *\033[0m\n");
	  printf
	    ("\033[1;32m                                                                                         * * * *\033[0m\n\n");
	  printf
	    ("\033[1;31m 4.Triangle                              \033[0m");
	  printf
	    ("\033[1;31m   5.Trapezoid                             \033[0m");
	  printf ("\033[1;31m    6.Ellipse\033[0m\n\n");
	  printf
	    ("\033[1;32m      * *                                    * * * * *                                   * * * * * *\033[0m\n");
	  printf
	    ("\033[1;32m    *     *                                 *         *                                *             *\033[0m\n");
	  printf
	    ("\033[1;32m  *         *                              *           *                              *               *\033[0m\n");
	  printf
	    ("\033[1;32m * * * * * * *                            * * * * * * * *                              *             *\033[0m\n");
	  printf
	    ("\033[1;32m                                                                                         * * * * * *\033[0m\n");
	  printf
	    ("\033[1;31m  7.Parallelogramm                           8.Rhombus                                  9.Polygon\033[0m\n\n");
	  printf
	    ("\033[1;32m      * * *  *  * *                             *  *  * * *                       * * * *   * * * *     *      *    *\033[0m\n");
	  printf
	    ("\033[1;32m    *           *                             *         *                         *     *   *     *     *       *  *\033[0m\n");
	  printf
	    ("\033[1;32m   *          *                             *         *                           * * * *   *     *     *         *\033[0m\n");
	  printf
	    ("\033[1;32m * * * * * * *                             *  *  * * *                            *         *     *     *         *\033[0m  \n");
	  printf
	    ("\033[1;32m                                                                                  *         * * * *     * * * *   *\033[0m\n");
	  printf
	    (" \033[1;31m10.convert square METERS to square FEET\033[0m\n");
	  printf (" \033[1;32m \tMETERS ==>> FEET\033[0m\n");
	  // Get user choice
	  printf ("\n\n\033[1;36mEnter your choice (1-10): \033[0m");
	  scanf ("%d", &choice);

	  switch (choice)
	    {
	    case 1:		// For Rectangle
	      {
		float length, width;
		printf
		  ("\n\n\t\t\t\t  \033[1;33m you have choosen RECTANGLE \033[0m\n\nEnter length: ");
		scanf ("%f", &length);
		printf ("Enter width: ");
		scanf ("%f", &width);
		printf
		  ("\n\033[1mArea of Rectangle is : \033[0m\033[1;46m%.2f\033[0m",
		   RectangleArea (length, width));
		printf
		  ("\n\n\t\t\t\t\033[1;33m enter '0' if you wanted to exit otherwise '1' or any other key  : \033[0m");
		scanf ("%d", &choice);
		if (choice == 0)
		  {
		    printf
		      ("\n\n\t\t\t\t\t\033[1;33m you have requested to end program .\n\n\t\t\t\t\tPRGRAM ENDED !!!! \n\t\t\t\t\tI HOPE YOU ENJOYED OUR PROJECT .\n\n\t\t\t\t\tGOOD BYE !!!!! \n\n\t\t\t\t\t HAVE A NICE DAY!!!! ");
		  }
		break;
	      }
	    case 2:		// For Square
	      {
		float side;
		printf
		  ("\n\n\t\t\t\t  \033[1;33m you have choosen SQUARE \033[0m\n\n");
		printf ("Enter side length: ");
		scanf ("%f", &side);
		printf
		  ("\n\033[1mArea of Square is : \033[0m\033[1;46m%.2f\033[0m\n",
		   SquareArea (side));
		printf
		  ("\n\n\t\t\t\033[1;33m enter '0' if you wanted to exit otherwise '1' or any other key  : \033[0m");
		scanf ("%d", &choice);
		if (choice == 0)
		  {
		    printf
		      ("\n\n\t\t\t\t\t\033[1;33m you have requested to end program .\n\n\t\t\t\t\tPRGRAM ENDED !!!! \n\t\t\t\t\tI HOPE YOU ENJOYED OUR PROJECT .\n\n\t\t\t\t\tGOOD BYE !!!!! \n\n\t\t\t\t\t HAVE A NICE DAY!!!! ");
		  }

		break;
	      }
	    case 3:		// For Circle
	      {
		float radius;
		printf
		  ("\n\n\t\t\t\t  \033[1;33m you have choosen CIRCLE \033[0m\n\n");
		printf ("Enter radius: ");
		scanf ("%f", &radius);
		printf
		  ("\n\033[1mArea of Circle is : \033[0m\033[1;46m%.2f\033[0m\n",
		   CircleArea (radius));
		printf
		  ("\n\n\t\t\t\033[1;33m enter '0' if you wanted to exit otherwise '1' or any other key  : \033[0m");
		scanf ("%d", &choice);
		if (choice == 0)
		  {
		    printf
		      ("\n\n\t\t\t\t\t\033[1;33m you have requested to end program .\n\n\t\t\t\t\tPRGRAM ENDED !!!! \n\t\t\t\t\tI HOPE YOU ENJOYED OUR PROJECT .\n\n\t\t\t\t\tGOOD BYE !!!!! \n\n\t\t\t\t\t HAVE A NICE DAY!!!! ");
		  }
		break;
	      }
	    case 4:		// For Triangle
	      {
		float base, height;
		printf
		  ("\n\n\t\t\t\t  \033[1;33m you have choosen TRIANGLE \033[0m\n\n");
		printf ("Enter base : ");
		scanf ("%f", &base);
		printf ("Enter height : ");
		scanf ("%f", &height);
		printf
		  ("\n\033[1mArea of Triangle: \033[0m\033[1;46m%.2f\033[0m\n",
		   TriangleArea (base, height));
		printf
		  ("\n\n\t\t\t\033[1;33m enter '0' if you wanted to exit otherwise '1' or any other key  : \033[0m");
		scanf ("%d", &choice);
		if (choice == 0)
		  {
		    printf
		      ("\n\n\t\t\t\t\t\033[1;33m you have requested to end program .\n\n\t\t\t\t\tPRGRAM ENDED !!!! \n\t\t\t\t\tI HOPE YOU ENJOYED OUR PROJECT .\n\n\t\t\t\t\tGOOD BYE !!!!! \n\n\t\t\t\t\t HAVE A NICE DAY!!!! ");
		  }
		break;
	      }
	    case 5:		// For Trapezium
	      {
		float base1, base2, Height;
		printf
		  ("\n\n\t\t\t\t  \033[1;33m you have choosen TRAPEZIUM \033[0m\n\n");
		printf ("Enter length of base-1: ");
		scanf ("%f", &base1);
		printf ("Enter length of base-2: ");
		scanf ("%f", &base2);
		printf ("Enter height: ");
		scanf ("%f", &Height);
		printf
		  ("\n\033[1mArea of Trapezium: \033[0m\033[1;46m%.2f\033[0m\n",
		   TrapeziumArea (base1, base2, Height));
		printf
		  ("\n\n\t\t\t\033[1;33m enter '0' if you wanted to exit otherwise '1' or any other key  : \033[0m");
		scanf ("%d", &choice);
		if (choice == 0)
		  {
		    printf
		      ("\n\n\t\t\t\t\t\033[1;33m you have requested to end program .\n\n\t\t\t\t\tPRGRAM ENDED !!!! \n\t\t\t\t\tI HOPE YOU ENJOYED OUR PROJECT .\n\n\t\t\t\t\tGOOD BYE !!!!! \n\n\t\t\t\t\t HAVE A NICE DAY!!!! ");
		  }
		break;
	      }
	    case 6:		// For Ellipse
	      {
		float majorAxis, minorAxis;
		printf
		  ("\n\n\t\t\t\t  \033[1;33m you have choosen ELLIPSE \033[0m\n\n");
		printf ("Enter length of major axis: ");
		scanf ("%f", &majorAxis);
		printf ("Enter length of minor axis: ");
		scanf ("%f", &minorAxis);
		printf
		  ("\n\033[1mArea of Ellipse: \033[0m\033[1;46m%.2f\033[0m\n",
		   EllipseArea (majorAxis, minorAxis));
		printf
		  ("\n\n\t\t\t\033[1;33m enter '0' if you wanted to exit otherwise '1' or any other key  : \033[0m");
		scanf ("%d", &choice);
		if (choice == 0)
		  {
		    printf
		      ("\n\n\t\t\t\t\t\033[1;33m you have requested to end program .\n\n\t\t\t\t\tPRGRAM ENDED !!!! \n\t\t\t\t\tI HOPE YOU ENJOYED OUR PROJECT .\n\n\t\t\t\t\tGOOD BYE !!!!! \n\n\t\t\t\t\t HAVE A NICE DAY!!!! ");
		  }
		break;
	      }
	    case 7:		// For Parallelogram
	      {
		float base, parallelogramHeight;
		printf
		  ("\n\n\t\t\t\t  \033[1;33m you have choosen PARALLELOGRAM \033[0m\n\n");
		printf ("Enter length of base: ");
		scanf ("%f", &base);
		printf ("Enter height: ");
		scanf ("%f", &parallelogramHeight);
		printf
		  ("\n\033[1mArea of Parallelogram: \033[0m\033[1;46m%.2f\033[0m\n",
		   ParallelogramArea (base, parallelogramHeight));
		printf
		  ("\n\n\t\t\t\033[1;33m enter '0' if you wanted to exit otherwise '1' or any other key  : \033[0m");
		scanf ("%d", &choice);
		if (choice == 0)
		  {
		    printf
		      ("\n\n\t\t\t\t\t\033[1;33m you have requested to end program .\n\n\t\t\t\t\tPRGRAM ENDED !!!! \n\t\t\t\t\tI HOPE YOU ENJOYED OUR PROJECT .\n\n\t\t\t\t\tGOOD BYE !!!!! \n\n\t\t\t\t\t HAVE A NICE DAY!!!! ");
		  }
		break;
	      }
	    case 8:
	      // Rhombus
	      {
		float diagonal_1, diagonal_2;
		printf
		  ("\n\n\t\t\t\t  \033[1;33m you have choosen RHOMBUS \033[0m\n\n");
		printf ("Enter the length of diagonal 1 : ");
		scanf ("%f", &diagonal_1);
		printf ("Enter the length of diagonal 2 : ");
		scanf ("%f", &diagonal_2);
		printf
		  ("\n\033[1mArea of rhombus : \033[0m\033[1;46m%.2f\033[0m\n",
		   RhombusArea (diagonal_1, diagonal_2));
		printf
		  ("\n\n\t\t\t\033[1;33m enter '0' if you wanted to exit otherwise '1' or any other key  : \033[0m");
		scanf ("%d", &choice);
		if (choice == 0)
		  {
		    printf
		      ("\n\n\t\t\t\t\t\033[1;33m you have requested to end program .\n\n\t\t\t\t\tPRGRAM ENDED !!!! \n\t\t\t\t\tI HOPE YOU ENJOYED OUR PROJECT .\n\n\t\t\t\t\tGOOD BYE !!!!! \n\n\t\t\t\t\t HAVE A NICE DAY!!!! ");
		  }
		break;
	      }
	    case 9:
	      // Regular Polygon
	      {
		float side;
		int number;
		printf
		  ("\n\n\t\t\t\t  \033[1;33m you have choosen REGULAR-POLYGON \033[0m\n\n");
		printf ("Enter the length of each side : ");
		scanf ("%f", &side);
		printf ("Enter the number of sides : ");
		scanf ("%d", &number);
		printf ("\033[1mArea: \033[0m\033[1;46m%.2f\033[0m\n",
			PolygonArea (side, number));
		printf
		  ("\n\n\t\t\t\033[1;33m enter '0' if you wanted to exit otherwise '1' or any other key  : \033[0m");
		scanf ("%d", &choice);
		if (choice == 0)
		  {
		    printf
		      ("\n\n\t\t\t\t\t\033[1;33m you have requested to end program .\n\n\t\t\t\t\tPRGRAM ENDED !!!! \n\t\t\t\t\tI HOPE YOU ENJOYED OUR PROJECT .\n\n\t\t\t\t\tGOOD BYE !!!!! \n\n\t\t\t\t\t HAVE A NICE DAY!!!! ");
		  }
		break;
	      }
	      // Inside your main function

	    case 10:		// Convert square meters to square feet
	      {
		float squareMeters;
		printf ("\nEnter area in square meters: ");
		scanf ("%f", &squareMeters);
		printf ("\nArea in square feet: %.2f\n",
			squareMetersToSquareFeet (squareMeters));
		printf
		  ("\n\n\t\t\t\033[1;33m enter '0' if you wanted to exit otherwise '1' or any other key  : \033[0m");
		scanf ("%d", &choice);
		if (choice == 0)
		  {
		    printf
		      ("\n\n\t\t\t\t\t\033[1;33m you have requested to end program .\n\n\t\t\t\t\tPRGRAM ENDED !!!! \n\t\t\t\t\tI HOPE YOU ENJOYED OUR PROJECT .\n\n\t\t\t\t\tGOOD BYE !!!!! \n\n\t\t\t\t\t HAVE A NICE DAY!!!! ");
		  }
		break;
	      }


	    default:
	      printf
		("Choice is wrong . Please enter a number between 1 and 9.\n");
	    }
	}
      while (choice != 0);
    }
  else
    {
      printf
	("\n\n You entered wrong input .. \n\n \t\tSO,\n\n \t\t\t\t !!!!! PROGRAM   ENDED !!!!! \n\n");
    }

  return 0;
}

float
RectangleArea (float length, float width)
{
  return length * width;
}

float
SquareArea (float side)
{
  return side * side;
}

float
CircleArea (float radius)
{
  return 3.14 * radius * radius;
}

float
TriangleArea (float base, float height)
{
  return 0.5 * base * height;
}

float
TrapeziumArea (float base1, float base2, float height)
{
  return 0.5 * (base1 + base2) * height;
}


float
EllipseArea (float majorAxis, float minorAxis)
{
  return 3.14 * majorAxis * minorAxis;
}

float
ParallelogramArea (float base, float height)
{
  return base * height;
}

float
RhombusArea (float d1, float d2)
{
  return 0.5 * d1 * d2;
}

float
PolygonArea (float side, int number)
{
  return 0.25 * number * side * side / tan (3.14159265358979323846 / number);

}

// Function to convert square meters to square feet
float
squareMetersToSquareFeet (float squareMeters)
{
  return squareMeters * 10.764;
}
