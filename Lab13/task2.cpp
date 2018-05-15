// Task 2 code
#include <iostream>
using namespace std;
class Student
{
  private:
    static string name;
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

//static variable definition
string Student:: name = "";

int main()
{
    Student std1("jacob", 1121), std2("Sam", 11232);

    std1.setName("Jacob");
    std2.setName("James");

    cout << std1.getName() << "," << std1.getID() << endl;
    cout << std2.getName() << "," << std2.getID() << endl;
    /*
    Names are both james because static variables 
    are shared with all objects of that class
    */ 
}