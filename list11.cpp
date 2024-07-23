#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Task 
{
    string description;
    bool completed;
};
vector<Task> tasks;
void addTask()
{
    string description;
    cout << "Enter task description: ";
    cin.ignore(); 
    getline(cin, description);
    
    Task newTask = { description, false };
    tasks.push_back(newTask);
    cout << "Task added successfully.\n";
}
void viewTasks() 
{
    if (tasks.empty()) 
    {
        cout << "No tasks available.\n";
        return;
    }

    cout << "Tasks:\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". " << tasks[i].description
             << (tasks[i].completed ? " [Completed]" : " [Pending]") << endl;
    }
}
void markTaskCompleted()
{
    viewTasks();
    if (tasks.empty()) return;

    int taskNumber;
    cout << "Enter task number to mark as completed: ";
    cin >> taskNumber;

    if (taskNumber < 1 || taskNumber > tasks.size()) {
        cout << "Invalid task number.\n";
        return;
    }

    tasks[taskNumber - 1].completed = true;
    cout << "Task marked as completed.\n";
}
void removeTask() 
{
    viewTasks();
    if (tasks.empty()) return;

    int taskNumber;
    cout << "Enter task number to remove: ";
    cin >> taskNumber;

    if (taskNumber < 1 || taskNumber > tasks.size()) {
        cout << "Invalid task number.\n";
        return;
    }

    tasks.erase(tasks.begin() + taskNumber - 1);
    cout << "Task removed successfully.\n";
}
int main() 
{
    int choice;
    do {
        cout << "\nTo-Do List Manager\n";
        cout << "1.ADD TASK\n";
        cout << "2.VIEW TASK \n";
        cout << "3.MARK TASK AS COMPLETE\n";
        cout << "4.REMOVE TASK\n";
        cout << "5.EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                markTaskCompleted();
                break;
            case 4:
                removeTask();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 5);

    return 0;
}