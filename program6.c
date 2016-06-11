/*Program Description: Print the calendar for a full year, given the starting day of the week from the user. Use user input to handle leap years.
 *Programmer Name: Tara Eicher
 *WSU ID: z847x563
 *Date Completed: 17 October 2012
*/

#include <stdio.h>

// This is the function which manages the printing of the calendar

void print_calendar(int day_code, int leap_year_code);

// This function fills out the body of the calendar by printing the numbers from 1 up through the input parameter value for the number of days in the month.

int fill_out_month(int day_code, int days_in_month);

int main(void)
{
   int start=0,leap=0;

   //Prompt for starting day of the week as long as a proper starting day is not entered.

   do
   {
      printf("Enter starting day of the week (0=Sun, 6=Sat): ");
      scanf("%d",&start);
   }
   while(start<0||start>6);

   //Prompt for leap year code as long as a proper leap year code is not entered.

   do
   {
      printf("Is it a leap year (y=1, n=0)? ");
      scanf("%d",&leap);
   }
   while(leap!=0&&leap!=1);

   //Call function to print calendar.

   print_calendar(start,leap);

   //Exit the program.
   
   return(0);
}

// This is the function which manages the printing of the calendar

void print_calendar(int day_code, int leap_year_code)
{
   //Hold changing day code.

   int day=day_code;

   //Print January.

   printf("January\n");
   printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
   day=fill_out_month(day,31);
   
   //Print February.

   printf("February\n");
   printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
   if(leap_year_code)
      day=fill_out_month(day,29);
   else
      day=fill_out_month(day,28);

   //Print March.

   printf("March\n");
   printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
   day=fill_out_month(day,31);

   //Print April.

   printf("April\n");
   printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
   day=fill_out_month(day,30);

   //Print May.

   printf("May\n");
   printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
   day=fill_out_month(day,31);

   //Print June.

   printf("June\n");
   printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
   day=fill_out_month(day,30);

   //Print July.

   printf("July\n");
   printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
   day=fill_out_month(day,31);

   //Print August.

   printf("August\n");
   printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
   day=fill_out_month(day,31);

   //Print September.

   printf("September\n");
   printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
   day=fill_out_month(day,30);

   //Print October.

   printf("October\n");
   printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
   day=fill_out_month(day,31);

   //Print November.

   printf("November\n");
   printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
   day=fill_out_month(day,30);

   //Print December.

   printf("December\n");
   printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
   day=fill_out_month(day,30);
}

//This function fills out the body of the calendar by printing the numbers from 1 up through the input parameter value for the number of days in the month.

int fill_out_month(int day_code, int days_in_month)
{
   //Print the tabs at the beginning of the month.

   int i;
   for(i=1;i<=day_code;++i)
      printf("\t");

   //Print the dates. Start a new line at the end of each week.

   int j;
   for(j=1;j<=days_in_month;++j)
   {
      printf("%d\t",j);
      if((day_code+j)%7==0)
         printf("\n");
   }
   printf("\n\n");

   //Return the day code for the next month.

   return((day_code+days_in_month)%7);
}
