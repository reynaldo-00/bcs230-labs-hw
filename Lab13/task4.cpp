#include <iostream>
using namespace std;
//Task 4
class Student
{
  private:
    int *stdId;

  public:
    Student(int stdId)
    {
        this->stdId = new int;
        *this->stdId = stdId;
    }
    Student(const Student &student)
    {
        this->stdId = new int;
        // cout << "Student id before Copy: " << *student.stdId << endl; 
        *this->stdId = *student.stdId *2;
        // cout << "Student id After Copy: " << *this->stdId << endl; 
        cout << "called the copy constructor "<<endl;
    }

    int getID() {
        return *this->stdId;
    }
    ~Student() { delete stdId; }
};
int main()
{
    Student std1(121), std2(std1); 
    // use the copy constructor
    cout << "Student 1 ID before copy: " << std1.getID() <<endl;
    // std2(std1);
    cout << "Student 2 ID after copy: " << std2.getID() <<endl;

}



/*

*/