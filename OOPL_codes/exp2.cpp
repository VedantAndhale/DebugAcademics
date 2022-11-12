#include <iostream>
#include <stdio.h>
using namespace std;
class publication 
{
public:
   string title;
   float cost;
   void add()
   {
      cout << "\nEnter the Publication information : " << endl;
      cout << "Enter Title of the Publication : ";
      cin.ignore();
      getline(cin, title);
      cout << "Enter cost of Publication : ";
      cin >> cost;
   }
   void display()
   {
      cout << "\n-----------------------------------------------";
      cout << "\nTitle of Publication : " << title;
      cout << "\nPublication cost : " << cost;
   }
};
class book : public publication 
{
public:
   int total_pages;
   void add_book()
   {

      add();
      cout << "Enter Page Count of Book : ";
      cin >> total_pages;
   }
   void display_book()
   {
      display();
      cout << "\nPage Count : " << total_pages;
      cout << "\n---------------------------------------------\n";
   }
};
class tape : public publication 
{

public:
   float total_length;
   void add_tape()
   {
      add();
      cout << "Enter Play Duration of the Tape : ";
      cin >> total_length;
   }
   void display_tape()
   {
      display();
      cout << "\nPlay Time : " << total_length << " min";
      cout << "\n--------------------------------------------------\n";
   }
};
int main()
{
   book b1[10]; 
   tape t1[10]; 
   int ch, b_count = 0, t_count = 0;
   do
   {
      cout << "\n* * * * * PUBLICATION MANAGEMENT SYSTEM * * * * *";
      cout << "\n--------------------MENU-----------------------";
      cout << "\n1. Add Information to Books";
      cout << "\n2. Add Information to Tapes";
      cout << "\n3. Display Books Information";
      cout << "\n4. Display Tapes Information";
      cout << "\n5. Exit";
      cout << "\n\nEnter your choice : ";
      cin >> ch;
      switch (ch)
      {
      case 1:
         b1[b_count].add_book();
         b_count++;
         break;
      case 2:
         t1[t_count].add_tape();
         t_count++;
         break;
      case 3:
         cout << "\n* * * * BOOK PUBLICATION MANAGEMENT SYSTEM * * * *";
         for (int j = 0; j < b_count; j++)
         {
            b1[j].display_book();
         }
         break;
      case 4:
         cout << "\n* * * * TAPE PUBLICATION MANAGEMENT SYSTEM * * * *";
         for (int j = 0; j < t_count; j++)
         {
            t1[j].display_tape();
         }
         break;
      case 5:
         exit(0);
      }
   } while (ch != 5);
   return 0;
}