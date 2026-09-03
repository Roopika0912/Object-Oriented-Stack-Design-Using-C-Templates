#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

#define max_size 5

template<class T>
class stack
{
    int TOP;
    T stk[max_size];

public:

    stack()
    {
        TOP = -1;
    }

    void reset()
    {
        TOP = -1;
    }

    void push()
    {
        if(TOP >= max_size-1)
        {
            cout << "Stack is overflow" << endl;
            return;
        }

        cin >> stk[++TOP];
    }

    void pop()
    {
        if(TOP <= -1)
        {
            cout << "Stack is underflow" << endl;
            return;
        }

        cout << "Deleted: " << stk[TOP--] << endl;
    }

    void display()
    {
        if(TOP <= -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }

        int i;

        for(i=0; i<=TOP; i++)
            cout << stk[i] << " ";

        cout << endl;
    }
};

int main()
{
    int op, op1, op2 = 1;
    int wrong_option = 0;
    int i = 0, c = 0, f = 0, d = 0, s = 0;

    stack<int> i1, i2;
    stack<char> c1, c2;
    stack<float> f1, f2;
    stack<double> d1, d2;
    stack<string> s1, s2;

    while(1)
    {
        cout << "\nEnter the option" << endl;
        cout << "1. int  2. char  3. float  4. double  5. string  6. exit"
             << endl;
        cin >> op;

        /* Invalid option handling */
        if(op < 1 || op > 6)
        {
            wrong_option++;

            if(wrong_option == 1)
                cout << "Please read options carefully" << endl;
            else if(wrong_option == 2)
                cout << "Last chance, please take care" << endl;
            else if(wrong_option == 3)
            {
                cout << "Thanks for using our application."
                     << endl;
                cout << "Please read the manual and come back properly."
                     << endl;
                return 0;
            }

            continue;
        }

        /* Exit */
        if(op == 6)
        {
            cout << "Thanks for using our application" << endl;
            return 0;
        }

        wrong_option = 0;

        /* Count datatype selection */
        if(op == 1)
            i++;
        else if(op == 2)
            c++;
        else if(op == 3)
            f++;
        else if(op == 4)
            d++;
        else if(op == 5)
            s++;

        /* If datatype is selected again */
        if(i > 1 || c > 1 || f > 1 || d > 1 || s > 1)
        {
            cout << "\nSelect your choice:" << endl;
            cout << "1. Continue old stack" << endl;
            cout << "2. New stack" << endl;
            cin >> op2;
        }
        else
        {
            op2 = 1;
        }

        /* Continue old stack */
        if(op2 == 1)
        {
            switch(op)
            {
                case 1:
                    cout << "\nInt stack application ready to use"
                         << endl;

                    while(1)
                    {
                        cout << "\n1. Push  2. Pop  3. Display stack  4. Main menu"
                             << endl;
                        cin >> op1;

                        switch(op1)
                        {
                            case 1:
                                cout << "Enter int number: ";
                                i1.push();
                                break;

                            case 2:
                                i1.pop();
                                break;

                            case 3:
                                i1.display();
                                break;

                            case 4:
                                goto main_menu;

                            default:
                                cout << "Invalid option" << endl;
                        }
                    }

                case 2:
                    cout << "\nChar stack application ready to use"
                         << endl;

                    while(1)
                    {
                        cout << "\n1. Push  2. Pop  3. Display stack  4. Main menu"
                             << endl;
                        cin >> op1;

                        switch(op1)
                        {
                            case 1:
                                cout << "Enter char: ";
                                c1.push();
                                break;

                            case 2:
                                c1.pop();
                                break;

                            case 3:
                                c1.display();
                                break;

                            case 4:
                                goto main_menu;

                            default:
                                cout << "Invalid option" << endl;
                        }
                    }

                case 3:
                    cout << "\nFloat stack application ready to use"
                         << endl;

                    while(1)
                    {
                        cout << "\n1. Push  2. Pop  3. Display stack  4. Main menu"
                             << endl;
                        cin >> op1;

                        switch(op1)
                        {
                            case 1:
                                cout << "Enter float number: ";
                                f1.push();
                                break;

                            case 2:
                                f1.pop();
                                break;

                            case 3:
                                f1.display();
                                break;

                            case 4:
                                goto main_menu;

                            default:
                                cout << "Invalid option" << endl;
                        }
                    }

                case 4:
                    cout << "\nDouble stack application ready to use"
                         << endl;

                    while(1)
                    {
                        cout << "\n1. Push  2. Pop  3. Display stack  4. Main menu"
                             << endl;
                        cin >> op1;

                        switch(op1)
                        {
                            case 1:
                                cout << "Enter double number: ";
                                d1.push();
                                break;

                            case 2:
                                d1.pop();
                                break;

                            case 3:
                                d1.display();
                                break;

                            case 4:
                                goto main_menu;

                            default:
                                cout << "Invalid option" << endl;
                        }
                    }

                case 5:
                    cout << "\nString stack application ready to use"
                         << endl;

                    while(1)
                    {
                        cout << "\n1. Push  2. Pop  3. Display stack  4. Main menu"
                             << endl;
                        cin >> op1;

                        switch(op1)
                        {
                            case 1:
                                cout << "Enter string: ";
                                s1.push();
                                break;

                            case 2:
                                s1.pop();
                                break;

                            case 3:
                                s1.display();
                                break;

                            case 4:
                                goto main_menu;

                            default:
                                cout << "Invalid option" << endl;
                        }
                    }
            }
        }

        /* Create new stack */
        else if(op2 == 2)
        {
            switch(op)
            {
                case 1:
                    i2.reset();
                    cout << "\nNew int stack created" << endl;

                    while(1)
                    {
                        cout << "\n1. Push  2. Pop  3. Display stack  4. Main menu"
                             << endl;
                        cin >> op1;

                        switch(op1)
                        {
                            case 1:
                                cout << "Enter int number: ";
                                i2.push();
                                break;

                            case 2:
                                i2.pop();
                                break;

                            case 3:
                                i2.display();
                                break;

                            case 4:
                                i1 = i2;
                                goto main_menu;

                            default:
                                cout << "Invalid option" << endl;
                        }
                    }

                case 2:
                    c2.reset();
                    cout << "\nNew char stack created" << endl;

                    while(1)
                    {
                        cout << "\n1. Push  2. Pop  3. Display stack  4. Main menu"
                             << endl;
                        cin >> op1;

                        switch(op1)
                        {
                            case 1:
                                cout << "Enter char: ";
                                c2.push();
                                break;

                            case 2:
                                c2.pop();
                                break;

                            case 3:
                                c2.display();
                                break;

                            case 4:
                                c1 = c2;
                                goto main_menu;

                            default:
                                cout << "Invalid option" << endl;
                        }
                    }

                case 3:
                    f2.reset();
                    cout << "\nNew float stack created" << endl;

                    while(1)
                    {
                        cout << "\n1. Push  2. Pop  3. Display stack  4. Main menu"
                             << endl;
                        cin >> op1;

                        switch(op1)
                        {
                            case 1:
                                cout << "Enter float number: ";
                                f2.push();
                                break;

                            case 2:
                                f2.pop();
                                break;

                            case 3:
                                f2.display();
                                break;

                            case 4:
                                f1 = f2;
                                goto main_menu;

                            default:
                                cout << "Invalid option" << endl;
                        }
                    }

                case 4:
                    d2.reset();
                    cout << "\nNew double stack created" << endl;

                    while(1)
                    {
                        cout << "\n1. Push  2. Pop  3. Display stack  4. Main menu"
                             << endl;
                        cin >> op1;

                        switch(op1)
                        {
                            case 1:
                                cout << "Enter double number: ";
                                d2.push();
                                break;

                            case 2:
                                d2.pop();
                                break;

                            case 3:
                                d2.display();
                                break;

                            case 4:
                                d1 = d2;
                                goto main_menu;

                            default:
                                cout << "Invalid option" << endl;
                        }
                    }

                case 5:
                    s2.reset();
                    cout << "\nNew string stack created" << endl;

                    while(1)
                    {
                        cout << "\n1. Push  2. Pop  3. Display stack  4. Main menu"
                             << endl;
                        cin >> op1;

                        switch(op1)
                        {
                            case 1:
                                cout << "Enter string: ";
                                s2.push();
                                break;

                            case 2:
                                s2.pop();
                                break;

                            case 3:
                                s2.display();
                                break;

                            case 4:
                                s1 = s2;
                                goto main_menu;

                            default:
                                cout << "Invalid option" << endl;
                        }
                    }
            }
        }
        else
        {
            cout << "Invalid choice. Please select 1 or 2." << endl;
        }

main_menu:
        continue;
    }

    return 0;
}
