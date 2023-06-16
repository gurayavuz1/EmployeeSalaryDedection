#include <iostream>

#include <iomanip>

#include "salarytemplate.h"

Salary::Salary(string name, const int gradesArray[])
{
	setCompanyName(name);

	for (int grade = 0; grade < employee; grade++)
		salaries[grade] = gradesArray[grade];

}

void Salary::setCompanyName(string name)
{
	companyName = name;
}


string Salary::getCompanyName()
{
	return companyName;
}

void Salary::displayMessage()
{
	cout << "Welcome to " << getCompanyName();
}

void Salary::processSalary() {

	outputSalary();

	cout << "\nSalary Average is " << setprecision(3) << fixed << getAverage() << " TL" << endl;

	cout << "\nLowest Salary is " << getMinimum() << " TL\nHighest Salary is " << getmaximum() << " TL" << endl;

	outputBarChart();
}

int Salary::getMinimum()
{
	int lowGrade = 18300;

	for (int grade = 0; grade < employee; grade++)
	{
		if (salaries[grade] < lowGrade)

			lowGrade = salaries[grade];
	}
	return lowGrade;
}

int Salary::getmaximum()
{
	int maxGrade = 0;
	for (int grade = 0; grade < employee; grade++)
	{
		if (salaries[grade] > maxGrade)
			maxGrade = salaries[grade];
	}
	return maxGrade;
}

double Salary::getAverage()
{
	int total = 0;
	for (int grade = 0; grade < employee; grade++)
		total += salaries[grade];

	return static_cast<double>(total) / employee;

}

void Salary::outputBarChart() {

	cout << "\nSalary distribution: " << endl;

	const int frequencySize = 30;

	int frequency[frequencySize] = { 0 };

	for (int grade = 0; grade < employee; grade++)

		frequency[salaries[grade] / 1000]++;

	for (int count = 7; count < frequencySize; count++)
	{
			cout << count * 1000 << "-" << (count * 1000) + 999 << ": ";

		for (int stars = 0; stars < frequency[count]; stars++)
			cout << "*";
		cout << endl;
	}
}

void Salary::outputSalary() {
	cout << "\nSalaries are: \n\n";

	for (int emp = 0; emp < employee; emp++)
		cout << "Employee" << setw(3) << emp + 1 << ": " << setw(3) << salaries[emp] << endl;
}

