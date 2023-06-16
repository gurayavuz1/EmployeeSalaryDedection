#include "salarytemplate.h"

int main()
{

	int gradeArray[Salary::employee] = { 8700,16800,9400,10000,18300,17800,8500,9100,7600,8700 };

	Salary myGradeBook("Salary Dedection API\n ", gradeArray);

	myGradeBook.displayMessage();

	myGradeBook.processSalary();

	return 0;
}