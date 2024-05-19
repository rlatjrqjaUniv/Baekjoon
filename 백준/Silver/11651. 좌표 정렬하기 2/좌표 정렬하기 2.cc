#include <iostream>
#include <vector>
using namespace std;

void MergeSort(int head, int tail, bool isX);
void Merge(int head, int mid, int tail, bool isX);

struct Dot {
public:
    int x;
    int y;

    Dot(int x, int y) {
        this->x = x;
        this->y = y;
    }
};

vector<Dot*> COORD;

int main() {
    int N = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        COORD.push_back(new Dot(x, y));
    }

    MergeSort(0, COORD.size() - 1, false);

    int start = 0;

    while (start < N) {
        int end = start;
        while (end < N && COORD[end]->y == COORD[start]->y) {
            end++;
        }
        if (end - start > 1) {
            MergeSort(start, end - 1, true);
        }
        start = end;
    }

    for (int i = 0; i < N; i++) {
        cout << COORD[i]->x << " " << COORD[i]->y << "\n";
    }

    for (int i = 0; i < N; i++) {
        delete COORD[i];
    }

    return 0;
}

void MergeSort(int head, int tail, bool isX) {
    if (head >= tail) return;
    int mid = (head + tail) / 2;
    MergeSort(head, mid, isX);
    MergeSort(mid + 1, tail, isX);
    Merge(head, mid, tail, isX);
}

void Merge(int head, int mid, int tail, bool isX) {
    vector<Dot*> sorted;
    int i = head;
    int j = mid + 1;

    while (i <= mid && j <= tail) {
        if (isX) {
            if (COORD[i]->x < COORD[j]->x)
                sorted.push_back(COORD[i++]);
            else
                sorted.push_back(COORD[j++]);
        }
        else {
            if (COORD[i]->y < COORD[j]->y)
                sorted.push_back(COORD[i++]);
            else
                sorted.push_back(COORD[j++]);
        }
    }

    while (i <= mid) {
        sorted.push_back(COORD[i++]);
    }
    while (j <= tail) {
        sorted.push_back(COORD[j++]);
    }

    for (int k = 0; k < sorted.size(); k++) {
        COORD[head + k] = sorted[k];
    }
}
