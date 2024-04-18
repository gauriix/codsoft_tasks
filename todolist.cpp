#include <iostream>
#include <string>
using namespace std;

void viewtask(string task[], int max_task)
{
    cout << "Tasks  to do in your list : " << endl;
    for (int i = 0; i < max_task; i++)
    {
        cout << "Task no " << i + 1 << ". " << task[i] << endl;
    }
}

int main()
{
    string task[15];
    int max_task = 0;
    int task_option = -1;

    while (task_option != 5)
    {
        cout << "\n--*--*--TODO LIST--*--*--\n" << endl;
        cout << "1. ADD THE TASK\t";
        cout << "\t2. VIEW THE TASK";
        cout << "\t 3. MARK AS COMPLETED";
        cout << "\t4. REMOVE THE TASK";
        cout << "\t5. EXIT THE TODO LIST" << endl;

        cin >> task_option;

        switch (task_option)
        {
        case 1:
        {
            if (max_task < 15)
            {
                cout << "Enter a new task: " << endl;
                cin.ignore();
                getline(cin, task[max_task]);
                max_task++;
            }
            else
            {
                cout << "Task list is full!" << endl;
            }
            break;
        }
        case 2:
        {
            viewtask(task, max_task);
            break;
        }
        case 3:
        {
            int taskcom = 0;
            cout << "Enter the task number to mark as completed: ";
            cin >> taskcom;

            if (taskcom > 0 && taskcom <= max_task)
            {
                cout << "Task : " << task[taskcom - 1] << "  is Completed" << endl;

                for (int i = taskcom-1; i < max_task - 1; i++)
                {
                    task[i] = task[i + 1];
                }
                max_task--;
            }
            else
            {
                cout << "Invalid task number! Please choose again." << endl;
            }
            break;
        }

        case 4:
        {
            int removetask = 0;
            cout << "enter task no to remove  " << endl;
            cin >> removetask;
            if (removetask > 0 && removetask <= 15)
            {
                for (int i = removetask-1; i < max_task-1; i++)
                {
                    task[i] = task[i + 1];
                }
                max_task--;
                cout<<"Task removed"<<endl;
            }
            else
            {
                cout << "invalid task no !! choose again" << endl;
            }
            break;
        }
        case 5:
        {
            cout << "\t\t EXITING THE TODO LIST ";
            break;
            exit(0);
        }
        default:
        {
            cout << "Invalid option! Please choose again." << endl;
            break;
        }
        }
    }

    return 0;
}
