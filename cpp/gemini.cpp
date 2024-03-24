#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int num, targetPosition, targetPriority;
        cin >> num >> targetPosition;
        vector<int> queue(num);

        for (int j = 0; j < num; j++) {
            cin >> queue[j];
            if (j == targetPosition) {
                targetPriority = queue[j];
            }
        }

        // Count jobs with higher priority and same priority (before and after)
        int higherPriorityCount = count_if(queue.begin(), queue.end(),
                                         [targetPriority](int p) { return p > targetPriority; });
        int samePriorityCount = count_if(queue.begin(), queue.end(),
                                         [targetPriority](int p) { return p == targetPriority; });

        // Exclude own priority from same-priority count
        if (queue[targetPosition] == targetPriority) {
            samePriorityCount--;
        }

        // Waiting time is sum of higher priority and same-priority jobs
        int waitingTime = higherPriorityCount + samePriorityCount;

        cout << waitingTime << endl;
    }

    return 0;
}