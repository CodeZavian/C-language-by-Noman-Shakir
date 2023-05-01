#include <stdio.h>

int main() {
  int paycode;
  double salary, hourly_wage, hours_worked, overtime_hours, overtime_pay, gross_sales, commission, piece_rate, pieces_produced, pay;

  printf("Enter paycode (1 for manager, 2 for hourly worker, 3 for commission worker, 4 for pieceworker): ");
  scanf("%d", &paycode);

  switch (paycode) {
    case 1:  // Manager
      printf("Enter weekly salary: ");
      scanf("%lf", &salary);
      pay = salary;
      break;
    case 2:  // Hourly worker
      printf("Enter hourly wage: ");
      scanf("%lf", &hourly_wage);
      printf("Enter number of hours worked: ");
      scanf("%lf", &hours_worked);
      if (hours_worked > 40) {
        overtime_hours = hours_worked - 40;
        overtime_pay = overtime_hours * hourly_wage * 1.5;
        pay = 40 * hourly_wage + overtime_pay;
      } else {
        pay = hours_worked * hourly_wage;
      }
      break;
    case 3:  // Commission worker
      printf("Enter gross sales: ");
      scanf("%lf", &gross_sales);
      commission = 250 + 0.057 * gross_sales;
      pay = commission;
      break;
    case 4:  // Pieceworker
      printf("Enter piece rate: ");
      scanf("%lf", &piece_rate);
      printf("Enter number of pieces produced: ");
      scanf("%lf", &pieces_produced);
      pay = piece_rate * pieces_produced;
      break;
    default:
      printf("Invalid paycode.\n");
      return 1;
  }

  printf("Weekly pay: $%.2lf\n", pay);

  return 0;
}
