#include "iostream"

using namespace std;

class People {
   protected:
    char* name = new char[100];
    typedef struct {
        int day;
        int month;
        int year;
    } Date_t;
    int idCode;

   public:
    People() {
        countMembers++;
    }
    virtual void printPeopleInfo() {
        Date_t dob;
        cout << "People is " << name << ", he/she was born in " << dob.day << "/" << dob.month << "/" << dob.month << endl;
        cout << "ID code : " << idCode << endl;
    }

    void setInfoPeople() {
        cout << "============ Insert infomation of people! ============" << endl;
        cout << "Enter name: ";
        cin >> name;
        Date_t dob;
        cout << "Enter day: ";
        cin >> dob.day;
        cout << "Enter month: ";
        cin >> dob.month;
        cout << "Enter year: ";
        cin >> dob.year;
        cout << "Enter ID code: ";
        cin >> idCode;

        delete name;
    }
    static int countMembers;
};

int People::countMembers = 0;
class Staff : public People {
   protected:
    int departmentID;
    typedef struct {
        int day;
        int month;
        int year;
    } joinDate_t;
    int level;

   public:
    virtual void infoStaff() {
        joinDate_t joinDate;
        printPeopleInfo();
        cout << "He/she works at " << departmentID << " department"
             << ", he/she joined company from " << joinDate.day << "/" << joinDate.month << "/" << joinDate.month << endl;
        cout << "Now, he stand at " << level << " level" << endl;
    }

    void setInfoStaff() {
        cout << "============ Insert infomation of staff! ============" << endl;
        ;
        cout << "Enter department ID: ";
        cin >> name;
        joinDate_t joinDate;
        cout << "Enter day: ";
        cin >> joinDate.day;
        cout << "Enter month: ";
        cin >> joinDate.month;
        cout << "Enter year: ";
        cin >> joinDate.year;
        cout << "Enter level: ";
        cin >> level;

        delete name;
    }
};

class Student : public People {
   private:
    int grade;
    int numsProject;  // max 30
    float* scoreProject = new float[numsProject];

    int averageSroce(int sumScore, int numsProject) {
        return sumScore / numsProject;
    }

   public:
    virtual void infoStudent() {
        int sumScore = 0;
        printPeopleInfo();
        cout << "He/she study at " << grade << " grade"
             << ", he/she has " << numsProject << " projects" << endl;
        cout << "Score of each project: " << endl;
        for (int i = 0; i < numsProject; i++) {
            sumScore += scoreProject[i];
            cout << "Score of project[" << i << "]";
            cout << scoreProject[i];
        }
        int getAverage = averageSroce(sumScore, numsProject);
        cout << "Average score of this student is " << getAverage << " score" << endl;
    }

    void setInfoStudent() {
        cout << "============ Insert infomation of Student! ============" << endl;
        cout << "Enter grade: ";
        cin >> name;
        cout << "Enter numbers of projects: ";
        cin >> numsProject;
        for (int i = 0; i < numsProject; i++) {
            cout << "Enter score of project[" << i << "]";
            cout << scoreProject[i];
        }
        delete name;
    }
};

class Teacher : public Staff {
   private:
    int classTeach;
    typedef enum {
        MATHS,
        PHYS,
        ENGLISH
    } subject_1st_t,
        subject_2nd_t;
    subject_1st_t sub1;
    subject_2nd_t sub2;

   public:
    void infoTeacher() {
        sub1 = MATHS;
        sub2 = ENGLISH;
        People::printPeopleInfo();
        Staff::infoStaff();
        cout << "He/she teach class " << classTeach << ", with first subject is " << sub1 << " and second subject is " << sub2 << endl;
    }

    void setInfoTeacher() {
        cout << "============ Insert infomation of Teacher! ============" << endl;
        cout << "Enter class: ";
        cin >> classTeach;
    }
};

class Node {
   public:
    People* data;
    Node* next;

    static void addElement(Node*& head, People* newData) {
        Node* newNode = new Node();
        newNode->data = newData;
        newNode->next = head;
        head = newNode;
    }
};

int main() {
    Node* head = nullptr;
    // for (int i = 0; i < 5; i++) {
    //     Staff* newStaff = new Staff();
    //     Teacher* newTeacher = new Teacher();
    //     Student* newStudent = new Student();
    //     Node::addElement(head, newStaff);
    //     Node::addElement(head, newStudent);
    //     Node::addElement(head, newTeacher);
    // }
    // cout << "Number of members: " << People::countMembers << " members" << endl;

    Staff* newStaff = new Staff();
    Node::addElement(head, newStaff);
    newStaff->setInfoStaff();
    newStaff->infoStaff();
    int a = 0;
    int b = 0;
    if (a != b) {
    }
}