#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float num1, num2, result;
    int choice;
     cout << "\t\t\t<==================================================================>" << endl;
    cout << "\t\t\t|                      SIMPLE CALCULATOR                            |" << endl;
    cout << "\t\t\t<==================================================================>" << endl;
    do
    {
        cout<<" \t\t\t\t\t\t 1. Addition\n";
        cout<<"\t\t\t\t\t\t 2. Subtraction\n";
        cout<<"\t\t\t\t\t\t 3. Multiplication\n";
        cout<<"\t\t\t\t\t\t 4. Division\n";
        cout<<"\t\t\t\t\t\t 5. Exit\n\n";
        cout<< "\t\t\t\t\t\t Enter Your Choice(1-5): ";
        cin>>choice;
        if(choice>=1 && choice<=4)
        {
            cout<<"\nEnter any two Numbers: ";
            cin>>num1>>num2;
        }
        switch(choice)
        {
            case 1:
                result = num1+num2;
                cout<<"\nResult = "<<result;
                break;
            case 2:
                result = num1-num2;
                cout<<"\nResult = "<<result;
                break;
            case 3:
                result = num1*num2;
                cout<<"\nResult = "<<result;
                break;
            case 4:
                result = num1/num2;
                cout<<"\nResult = "<<result;
                break;
            case 5:
                return 0;
            default:
                cout<<"\nWrong Choice!";
                break;
        }
        cout<<"\n------------------------\n";
    }while(choice!=5);
    cout<<endl;
    getch();
}
