#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& description) {
        tasks.push_back({description, false});
        cout << "Task added successfully." << endl;
    }

    void viewTasks() {
        cout << "\nTasks:" << endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i].description << " - " << (tasks[i].completed ? "Completed" : "Pending") << endl;
        }
    }

    void markTaskCompleted(size_t index) {
        if (index >= tasks.size()) {
            cout << "Invalid task index." << endl;
            return;
        }
        tasks[index].completed = true;
        cout << "Task marked as completed." << endl;
    }

    void removeTask(size_t index) {
        if (index >= tasks.size()) {
            cout << "Invalid task index." << endl;
            return;
        }
        tasks.erase(tasks.begin() + index);
        cout << "Task removed." << endl;
    }
};

int main() {
    ToDoList todoList;

    while (true) {
        cout << "\nTo-Do List Manager" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string taskDescription;
                cout << "Enter the task description: ";
                cin.ignore(); // Ignore previous newline character
                getline(cin, taskDescription);
                todoList.addTask(taskDescription);
                break;
            }
            case 2:
                todoList.viewTasks();
                break;
            case 3: {
                size_t index;
                cout << "Enter the index of the task to mark as completed: ";
                cin >> index;
                todoList.markTaskCompleted(index - 1); // Adjust index to zero-based
                break;
            }
            case 4: {
                size_t index;
                cout << "Enter the index of the task to remove: ";
                cin >> index;
                todoList.removeTask(index - 1); // Adjust index to zero-based
                break;
            }
            case 5:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
