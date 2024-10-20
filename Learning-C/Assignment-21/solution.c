#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
  char last_name[25];
  char first_name[25];
  int employee_id_num[25];
  int lst_ssn[25];
  char title[50];
} Employee;

typedef struct {
  Employee *member_one;
  Employee *member_two;
} Employees;

int main(){

  Employee *employee_one;
  Employee *employee_two;

  Employees companies = {
    employee_one,
    employee_two
  };

  //first employee

  printf("Enter the employee's first name: ");
  scanf("s", &employee_one->first_name);

  printf("Enter the employee's last name: ");
  scanf("s", &employee_one->last_name);

  printf("Enter the employee's ID number: ");
  scanf("s", &employee_one->employee_id_num);

  printf("Enter the last four digits of the employee's SSN: ");
  scanf("s", &employee_one->lst_ssn);

  printf("Enter the employee's job title (do not include the word 'Engineer'): ");
  scanf("s", &employee_one->title);

  //second employee

  printf("Enter the employee's first name: ");
  scanf("%s", employee_two->first_name);

  printf("Enter the employee's last name: ");
  scanf("%s", employee_two->last_name);

  printf("Enter the employee's ID number: ");
  scanf("%s", employee_two->employee_id_num);

  printf("Enter the last four digits of the employee's SSN: ");
  scanf("%s", employee_two->lst_ssn);

  printf("Enter the employee's job title (do not include the word 'Engineer'): ");
  scanf("%s", employee_two->title);

  

  return 0;
}