// Task 1 code
#include <iostream>
using namespace std;
class Student
{
  private:
    string name;
    int id;

  public:
    Student(string name, int id)
    {
        this->name = name;
        this->id = id;
    }
    void setName(string nm)
    {
        name = nm;
    }
    void setID(int id)
    {
        id = id;
    }
    int getID()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
};
int main()
{
    Student std1("jacob", 1121), std2("Sam", 11232);
    std1.setName("Jacob");
    cout << std1.getName() << "," << std1.getID() << endl;
} 