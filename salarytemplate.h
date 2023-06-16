#include <iostream>
#include <string>

using std::string;
using namespace std;
class Salary
{

public:

	const static int employee = 10;

	Salary(string, const int[]);

	void setCompanyName(string);

	string getCompanyName();

	void displayMessage();

	void processSalary();

	int getmaximum();

	int getMinimum();

	double getAverage();

	void outputBarChart();

	void outputSalary();
private:

	string companyName;

	int salaries[employee];


};
