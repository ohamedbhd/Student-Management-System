#include <iostream>
#include <fstream>
using namespace std;

bool teacher_Login()
{
 string User_Teacher="Mohamed";
 string Password_Teacher="1234";
 
 string userTeacher , passwordTeacher;
 
 cout<<"enter name the teacher: ";
 cin >> userTeacher;
 cout<<"enter password the teacher: ";
 cin >>passwordTeacher;
 
 while (true)
 {
   if (User_Teacher == userTeacher && Password_Teacher == passwordTeacher )
   {
     cout <<"Signed in successfully\n";
     cout <<"\nHello teacher "<< User_Teacher<<endl;
     return true;
   }
   else
   {
     return false;
   }
 }
}

bool students_login()
{
  string user_studeant , ID_studeant;
  string file_user_studeant , file_ID_studeant ;
  
  cout <<"enter your username: ";
  cin >>user_studeant;
  
  cout <<"enter your ID: ";
  cin >>ID_studeant;
  
  ifstream file("Data_Studeant.txt");
  while (file >> file_user_studeant >> file_ID_studeant)
  {
    if(user_studeant == file_user_studeant && ID_studeant== file_ID_studeant)
    {
     file.close();
     return true;
    }
  }
  file.close();
  return false;
}

void students_Register()
{
  string userstudeant,IDstudeant;
  
  cout <<"enter your username: ";
  cin >>userstudeant;
  
  cout <<"enter your ID: ";
  cin >>IDstudeant;
  
  ofstream file("Data_Studeant.txt" , ios::app);
  
  file << userstudeant << " " << IDstudeant << endl;
  
  file.close();
  cout << "Account created successfully\n";
}

bool list()
{
  int choice;
  cout <<"\n     ■■■■■■■■■■■■■■■■ welcome ■■■■■■■■■■■■■■■■\n\n";
  cout << "1- Login\n";
  cout << "2- Register\n";
  cout << "3- Exit\n";
  
  cout << "enter your choice: ";
  cin >> choice;
  
  if(choice == 1 )
  {
    if(students_login() == 1)
    {
      cout<<"\nLogin successfully\n";
      return true;
    }
    else 
    {
      cout<<"\nPlease check the student's name or ID\n";
      return false;
    }
  }
  else if (choice == 2)
  {
    students_Register();
    return list();
  }
  else
  {
    return false;
  }
}

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

string name[100];
int age[100];
int ids[100];
int countStudent = 0;

void addStudent()
{
  cout <<"enter your name: ";
  cin >>name[countStudent];
  
  cout <<"enter your age: ";
  cin >>age[countStudent];
  
  cout <<"enter your ID: ";
  cin >>ids[countStudent];
  
  ofstream file ("studeants.txt" , ios::app);
  file << name[countStudent] << " " << age[countStudent] << " " <<  ids[countStudent] << endl;
  file.close();
  countStudent++;
}

void Students_read()
{
  countStudent = 0;
  ifstream file ("studeants.txt");
  while (file >> name[countStudent] >> age[countStudent] >> ids[countStudent])
  {
    countStudent++;
  }
  file.close();
}

void showStudent ()
{
  for (int i=0; i < countStudent; i++)
  {
    cout << "nam: " << name[i];
    cout << "  age: " << age[i];
    cout << "  ID: " << ids[i] << endl;
  }
}

void searchStudent()
{
  int id;
  bool found = false;
  
  cout <<"enter my student ID: ";
  cin >> id;
  
  for (int i = 0; i < countStudent; i++)
  {
    if (ids[i] == id)
    {
      cout << "Found: " << name[i] << endl;
      found = true;
      break;
    }
  }
  if (!found)
  {
    cout << "Not Found\n";
  }
}

void teacher_Choice_List()
{
  int che;
  do 
  {
    cout <<"\n     ■■■■■■■■■■■■ View menu ■■■■■■■■■■■■\n\n";
    cout <<"1- Add students\n";
    cout <<"2- Show students\n";
    cout <<"3- Searching students\n";
    cout <<"4- Exit\n";
    
    cout <<"enter your choice: " ;
    cin >>che;
    switch (che)
    {
      case 1:
      addStudent();
      break;
      case 2:
      Students_read();
      showStudent();
      break;
      case 3:
      Students_read();
      searchStudent(); 
      break;
    }
  } while (che !=4);
}

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

void Computer_Science()
{
  int choice;
  do 
  {
    cout <<"\n     ■■■■■■■■■■■ List of chapters study ■■■■■■■■■■■\n\n";
    cout <<"1- first payment\n";
    cout <<"2- second batch\n";
    cout <<"3- third batch\n";
    cout <<"4- Fourth batch\n";
    cout <<"5- Fifth batch\n";
    cout <<"6- Exit\n";
    
    cout <<"Choose your current study payment: ";
    cin >>choice;
    
    switch(choice)
    {
      case 1:
      cout <<"________________________________\n\n";
      cout <<"Study subjects your first batch:\n";
      cout <<"________________________________\n\n";
      cout <<"▪︎ Math 1\n";
      cout <<"▪︎ English 1\n";
      cout <<"▪︎ computer basics\n";
      cout <<"▪︎ programming basics c++\n";
      cout <<"▪︎ Basics of algorithms\n";
      cout <<"▪︎ Logical thinking\n";
      cout <<"▪︎ aProblem Solving\n";
      break;
      case 2:
      cout <<"________________________________\n\n";
      cout <<"Your second batch study materials:\n";
      cout <<"________________________________\n\n";
      cout <<"▪︎ Math 2\n";
      cout <<"▪︎ English 1\n";
      cout <<"▪︎ computer maintenance\n";
      cout <<"▪︎ advanced programming c++\n";
      cout <<"▪︎ Advanced algorithms\n";
      cout <<"▪︎ programming\n";
      cout <<"▪︎ Problem Solving\n";
      break;
      case 3:
      cout <<"________________________________\n\n";
      cout <<"Your third batch study materials:\n";
      cout <<"________________________________\n\n";
      cout <<"▪︎ Math \n";
      cout <<"▪︎ English 2\n";
      cout <<"▪︎ computer maintenance\n";
      cout <<"▪︎ advanced programming c++\n";
      cout <<"▪︎ Advanced algorithms\n";
      cout <<"▪︎ programming\n";
      cout <<"▪︎ Problem Solving\n";
      break;
      case 4:
      cout <<"________________________________\n\n";
      cout <<"Your fourth batch study materials:\n";
      cout <<"________________________________\n\n";
      cout <<"▪︎ Math 2\n";
      cout <<"▪︎ Englch 1\n";
      cout <<"▪︎ computer maintenance\n";
      cout <<"▪︎ advanced programming c++\n";
      cout <<"▪︎ Advanced algorithms\n";
      cout <<"▪︎ programming\n";
      cout <<"▪︎ Problem Solving\n";
      break;
      case 5:
      cout <<"________________________________\n\n";
      cout <<"Your Fifth Batch Study Materials:\n";
      cout <<"________________________________\n\n";
      cout <<"▪︎ Math 2\n";
      cout <<"▪︎ English 1\n";
      cout <<"▪︎ computer maintenance\n";
      cout <<"▪︎ advanced programming c++\n";
      cout <<"▪︎ Advanced algorithms\n";
      cout <<"▪︎ programming\n";
      cout <<"▪︎ Problem Solving\n";
      break;
      case 6:
      return;
      default:
      cout <<"\nPlease choose a correct number\n";
    }
  }while(choice != 6);
}

void Specializations()
{
  int choice;
  do
  {
    cout <<"\n     ■■■■■■■■■■■ List of specialties ■■■■■■■■■■■\n\n";
    cout <<"1- Cyber Security\n";
    cout <<"2- Information Security\n";
    cout <<"3- Computer Science\n";
    cout <<"4- networks\n";
    cout <<"5- AI\n";
    cout <<"6- data science\n";
    cout <<"7- Exit\n";
    
    cout <<"Choose your major: ";
    cin >>choice;
    
    switch(choice)
    {
      case 1:
      cout <<"\nSpecialization materials are uploaded Cyber Security\n";
      break;
      case 2:
      cout <<"\nSpecialization materials are uploaded Information Security\n";
      break;
      case 3:
      Computer_Science();
      break;
      case 4:
      cout <<"\nSpecialization materials are uploaded networks\n";
      break;
      case 5:
      cout <<"\nSpecialization materials are uploaded AI\n";
      break;
      case 6:
      cout <<"\nSpecialization materials are uploaded data science\n";
      break;
      case 7:
      return;
      default:
      cout <<"\nPlease choose a correct number\n";
    }
    
  }while(choice != 7);
}

void Student_Choice_List()
{
  int choice;
  do
  {
    cout <<"\n     ■■■■■■■■■■■■ Specializations ■■■■■■■■■■■■\n\n";
    cout <<"1- Specializations\n";
    cout <<"2- Exit\n";
    
    cout <<"enter your choice: ";
    cin >>choice;
  
    switch(choice)
    {
      case 1 :
      Specializations();
      break;
      case 2 :
      return;
      default:
      cout <<"\nPlease choose a correct number\n";
    }
  }while (choice != 2);
}

void User_Select_List()
{
  int choice;
  do
  {
    cout <<"\n     ■■■■■■■■■■■■■■■■ welcome ■■■■■■■■■■■■■■■■\n\n";
    cout <<"1- teacher\n";
    cout <<"2- Student\n";
    cout <<"3- Exit\n";
    
    cout <<"enter your choice: ";
    cin >>choice;
    
    switch(choice)
    {
      case 1 :
      if(teacher_Login()==1)
      {
        teacher_Choice_List();
        break;
      }
      else
      {
        cout<<"\nPlease check you teacher's name or password\n";
        break;
      }
      break;
      case 2 :
      if (list()==1)
      {
        Student_Choice_List();
        break;
      }
      else
      {
        break;
      }
      break;
      case 3 :
      return;
      default:
      cout <<"\nPlease choose a correct number\n";
    }
  }while (choice != 3);
}

int main ()
{
  User_Select_List();
  return 0;
}