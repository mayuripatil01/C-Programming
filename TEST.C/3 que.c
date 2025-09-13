// create a program to a manage to do list implement a structure  task deatils( task ID, descriptin, task details and status

#include <stdio.h>
#include <string.h>

#define MAX_TASKS 100

// Structure for a task
struct Task {
    int task_id;
    char description[100];
    char details[200];
    char status[20];   // e.g., "Pending", "In Progress", "Completed"
};

// Function declarations
void addTask(struct Task tasks[], int *count);
void displayTasks(struct Task tasks[], int count);
void updateStatus(struct Task tasks[], int count);
void deleteTask(struct Task tasks[], int *count);

int main() {
    struct Task tasks[MAX_TASKS];
    int count = 0;   // number of tasks
    int choice;

    do {
        printf("\n===== TO-DO LIST MANAGER =====\n");
        printf("1. Add Task\n");
        printf("2. Display All Tasks\n");
        printf("3. Update Task Status\n");
        printf("4. Delete Task\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear newline

        switch(choice) {
            case 1: addTask(tasks, &count); break;
            case 2: displayTasks(tasks, count); break;
            case 3: updateStatus(tasks, count); break;
            case 4: deleteTask(tasks, &count); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while(choice != 5);

    return 0;
}

// Add new task
void addTask(struct Task tasks[], int *count) {
    if (*count >= MAX_TASKS) {
        printf("Task list is full!\n");
        return;
    }
    struct Task t;
    t.task_id = *count + 1;
    
    printf("Enter task description: ");
    fgets(t.description, sizeof(t.description), stdin);
    t.description[strcspn(t.description, "\n")] = '\0'; // remove newline
    
    printf("Enter task details: ");
    fgets(t.details, sizeof(t.details), stdin);
    t.details[strcspn(t.details, "\n")] = '\0';
    
    strcpy(t.status, "Pending"); // default status
    
    tasks[*count] = t;
    (*count)++;
    
    printf("Task added successfully!\n");
}

// Display all tasks
void displayTasks(struct Task tasks[], int count) {
    if (count == 0) {
        printf("No tasks available.\n");
        return;
    }
    printf("\n===== TASK LIST =====\n");
    for (int i = 0; i < count; i++) {
        printf("Task ID: %d\n", tasks[i].task_id);
        printf("Description: %s\n", tasks[i].description);
        printf("Details: %s\n", tasks[i].details);
        printf("Status: %s\n", tasks[i].status);
        printf("---------------------------\n");
    }
}

// Update task status
void updateStatus(struct Task tasks[], int count) {
    int id;
    printf("Enter task ID to update: ");
    scanf("%d", &id);
    getchar();
    
    if (id <= 0 || id > count) {
        printf("Invalid task ID!\n");
        return;
    }
    printf("Enter new status (Pending/In Progress/Completed): ");
    fgets(tasks[id-1].status, sizeof(tasks[id-1].status), stdin);
    tasks[id-1].status[strcspn(tasks[id-1].status, "\n")] = '\0';
    
    printf("Status updated successfully!\n");
}

// Delete a task
void deleteTask(struct Task tasks[], int *count) {
    int id;
    printf("Enter task ID to delete: ");
    scanf("%d", &id);
    
    if (id <= 0 || id > *count) {
        printf("Invalid task ID!\n");
        return;
    }
    
    for (int i = id - 1; i < *count - 1; i++) {
        tasks[i] = tasks[i + 1];
        tasks[i].task_id = i + 1; // reassign IDs
    }
    (*count)--;
    
    printf("Task deleted successfully!\n");
}