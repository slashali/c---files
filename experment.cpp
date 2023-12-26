

#include <iostream>
#include <string>

using namespace std;

void sayhello(string msg, string name, int age) {
    cout << msg << ", " << name << " is " << age << " years old.\n";
}

void SLash(string name, string rank, int sitting_number, int num_projects, int Salary) {
    cout << name << " your Rank Is : " << rank << endl;
    cout << sitting_number << endl;
    cout << num_projects << "\n" << " your Salary Is ===> " << Salary << endl;
}

void sLash_4(string menu, string from_Types, string descrptoin, int cost) {
    cout << "welcome to sLash_4 " << endl;
    cout << " we open at 9:00 to 11:00" << "//===> we hope visit ours to taste and drink fresh foods or juices" << endl;
    cout << "the menu has : " << menu << endl;
    cout << "Foods===> chicken, rice , fish , meat || juices===> orange , apple , mango , tea|| smokes===> cegaretes ___ " << endl;
    cout << "\n";
    cout << "please , choose what you want " << endl;
    cout << from_Types << endl;
    {
        if (from_Types == "chicken") {
            cout << "that cost : " << cost << endl;
        }

        else if (from_Types == "apple") {
            cout << "that cost : " << cost << endl;
        }

        else if (from_Types == "cegaretes") {
            cout << "that cost : " << cost << endl;
        }
    }
}

int main() {
    cout << "\n============================================\n" << endl;
    sayhello("hello", "ali", 19);
    sayhello("hello", "omnia", 19);
    sayhello("hello", " SLash", 25);
    cout << "\n============================================\n" << endl;

    SLash("ali", "senoir ", 2005, 5, 5000);
    SLash("Ahmed", "mid_senoir ", 2002, 10, 5000);
    SLash("omnia", "junior ", 2006, 4, 2000);

    // Don't repeat the first four lines of "cout" from the void SLash.4
    cout << "============================================\n" << endl;
    cout << "please choose your meal : \n";
    sLash_4("[food_name1, food_name2, food_name3]","chicken" , "[food_description]", 200 );
    sLash_4("[food_name1, food_name2, food_name3]","apple" , "[food_description]", 200 );

    return 0;
}






















