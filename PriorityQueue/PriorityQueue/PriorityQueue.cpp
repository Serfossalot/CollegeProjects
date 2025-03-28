#include <iostream>
#include <vector>
using namespace std;

struct Job {
    string name;
    int priority;

    // Higher priority means higher number
    Job(string n, int p) : name(n), priority(p) {}
};

class PriorityQueue {
private:
    vector<Job> queue;

public:
    void insert(const string& name, int priority) {
        Job newJob(name, priority);
        queue.push_back(newJob);

        // Sort queue based on priority (highest first)
        for (int i = queue.size() - 1; i > 0; --i) {
            if (queue[i].priority > queue[i - 1].priority)
                swap(queue[i], queue[i - 1]);
        }
    }

    void remove() {
        if (queue.empty())
            cout << "Queue is empty.\n";
        else {
            cout << "Removing job: " << queue[0].name << " with priority " << queue[0].priority << endl;
            queue.erase(queue.begin());
        }
    }

    void display() {
        cout << "Priority Queue:\n";
        for (const Job& job : queue) {
            cout << job.name << " (priority " << job.priority << ")\n";
        }
    }

    bool isEmpty() const {
        return queue.empty();
    }
};

int main() {
    PriorityQueue pq;
    pq.insert("Backup process", 2);
    pq.insert("User request", 5);
    pq.insert("System update", 3);

    pq.display();
    pq.remove();
    pq.display();

    return 0;
}
