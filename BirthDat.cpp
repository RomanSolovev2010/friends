
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class BirthDate
{
  private:
  string day;
  string month;
  string year;
  
  public:
  BirthDate() {} 
  
  BirthDate(string InputDay, string InputMonth, string InputYear)
  {
      
          day = InputDay;
          month = InputMonth;
          year = InputYear;
     
  }
  
  string GetDay()
  {
      return this->day;
  }
  
  string GetMonth()
  {
      return this->month;
  }
  
  string GetYear()
  {
      return this->year;
  }
  
  string GetInfo()
  {
      return "(" + this->day + "." + this->month + "." + this->year + ")"; 
  }
};

int main()
{
    BirthDate myBirth("21", "01", "2008");
    
    cout << myBirth.GetInfo();
}
