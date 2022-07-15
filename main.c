#include <stdio.h>
#include <stdbool.h>

int main() {
  float hours, rate, salary, overtime, overtimePay;


  while (true) {
        printf("\tPAY PROGRAM: \n\n");
        printf("Enter the number of hours worked (ranging from 1): ");
        scanf("%f", &hours);
        if (hours == 0){
            return 0;
        }


        printf( "Enter hourly rate of the worker (ksh 00.00): ");
        scanf( "%f", &rate );

        salary = hours * rate;
        if ( hours <= 40 )  {
          printf( "salary is %.2f\n", salary );
        }

        if ( hours > 40 ) {
          overtime = hours - 40;
          overtimePay = overtime * rate / 2;
          salary = salary + overtimePay;
          printf( "Salary  is %.2f\n", salary );
        }
        break;
  }

        double income, tax;
        char quit = ' ';

        //Loop for multiple operations
        while(quit != 'q' && quit != 'Q') {

            //Getting input from the user
            printf("\n\n\nInput your annual income:\t");
            scanf("%1f", &income);


            if (income <= 204000) {
                tax = (income - 250000) * 30 / 100;
            }

            else if (income >= 204000) {
                tax = (income - 650000) * 50 / 100;
            }

        }


     return 0;
    }

