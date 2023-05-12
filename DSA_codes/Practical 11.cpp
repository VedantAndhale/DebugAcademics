#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class tel
{
public:
    int rollNo, roll1;
    char name[10];
    char div;
    char address[20];

    void accept()
    {
        cout << "\n\tEnter Roll Number : ";
        cin >> rollNo;
        cout << "\n\tEnter the Name : ";
        cin >> name;
        cout << "\n\tEnter the Division : ";
        cin >> div;
        cout << "\n\tEnter the Address : ";
        cin >> address;
    }

    void accept2()
    {
        cout << "\n\tEnter the Roll No. to modify : ";
        cin >> rollNo;
    }

    void accept3()
    {
        cout << "\n\tEnter the name to modify : ";
        cin >> name;
    }

    int getRollNo()
    {
        return rollNo;
    }

    void show()
    {
        cout << "\n\t" << rollNo << "\t\t" << name << "\t\t" << div << "\t\t" << address;
    }
};

int main()
{
    int i, n, ch, ch1, rec, start, count, add, n1, add2, start2, n2, y, a, b, on,
        oname, add3, start3, n3, y1, add4, start4, n4;

    char name[20], name2[20];
    tel t1;

    count = 0;

    fstream g, f;

    do
    {
        cout << "\n\t------MENU-------";
        cout << "\n1.Insert and overwrite\n2.Show\n3.Search & Edit(number)\n4.Delete a Student Record\n 5.Exit\n\tEnter the Choice\t:";
        cin >> ch;

        switch (ch)
        {
        case 1:
            f.open("StuRecord.txt", ios::out);

        x:
            t1.accept();
            f.write((char *)&t1, (sizeof(t1)));
            cout << "\nDo you want to enter more records?\n1.Yes\n2.No\n";
            cin >> ch1;

            if (ch1 == 1)
                goto x;
            else
            {
                f.close();
                break;
            }

        case 2:
            f.open("StuRecord.txt", ios::in);

            while (f.read((char *)&t1, (sizeof(t1))))
            {
                t1.show();
            }

            f.close();
            break;

        case 3:
            cout << "\nEnter the roll number you want to find : ";
            cin >> rec;
            f.open("StuRecord.txt", ios::in | ios::out);
            f.read((char *)&t1, (sizeof(t1)));

            while (f.read((char *)&t1, (sizeof(t1))))
            {
                if (rec == t1.rollNo)
                {
                    cout << "\nRecord found";
                    add = f.tellg();
                    f.seekg(0, ios::beg);
                    start = f.tellg();
                    n1 = (add - start) / (sizeof(tel));
                    f.seekp((n1 - 1) * sizeof(tel), ios::beg);
                    t1.accept();
                    f.write((char *)&t1, (sizeof(tel)));
                    f.close();
                    count++;
                    break;
                }
            }

            if (count == 0)
                cout << "\nRecord not found";

            f.close();

            break;
        case 4:
            int roll;
            cout << "Please Enter the Roll No. of Student Whose Info You Want to Delete: ";
            cin >> roll;
            f.open("StuRecord.txt", ios::in);
            g.open("temp.txt", ios::out);
            f.read((char *)&t1, sizeof(tel));

            while (!f.eof())
            {
                if (t1.getRollNo() != roll)
                    g.write((char *)&t1, sizeof(tel));
                else
                    cout << "The record with the roll no. " << roll << " has been deleted." << endl;

                f.read((char *)&t1, sizeof(tel));
            }

            f.close();
            g.close();

            remove("StuRecord.txt");
            rename("temp.txt", "StuRecord.txt");

            break;

        case 5:
            cout << "\n\tThank you";
            break;
        }
    } while (ch != 5);

    return 0;
}