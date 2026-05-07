#include <iostream>
using namespace std;
int main()
{
    string name[100];
    int age[100];
    int ids[100];
    int countStudent = 0;

    int che;
    do
    {
        cout <<"◆◇◇◇◇◇◇◇◇◇◇ Student management ◇◇◇◇◇◇◇◇◇◇◆\n";
        cout <<"1- add\n";
        cout <<"2- Show\n";
        cout <<"3- Search\n";
        cout <<"4- Back\n";

        cout <<"enter your choice: ";
           
        cin >>che;

        switch (che)
        {
        case 1:
            cout <<"enter your name: ";
            cin >>name[countStudent];

            cout <<"enter your age: ";
            cin >>age[countStudent];

            cout <<"enter your ID: ";
            cin >>ids[countStudent];

            countStudent++;
            break;

        case 2:
            for (int i=0; i < countStudent; i++)
            {
                cout << "name: " << name[i];
                cout << "  age: " << age[i];
                cout << "  ID: " << ids[i] << endl;
            }
            break;
        case 3:
            int id;
            bool found = false;

            cout <<"enter my student ID: ";
            cin >>id;

            for (int i=0; i < countStudent; i++)
            {
                if (ids[i] == id)
                {
                    cout << "Found: " << name[i] <<endl;
                    found = true;
                    break;
                }
            }
            if(!found)
            {
                cout <<"Student not found\n";
            }
            break;
        }
    } while (che !=4);
    return 0;
}