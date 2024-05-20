#include <iostream>
#include <vector>
using namespace std;

void MergeSort(int head, int tail);
void Merge(int head, int mid, int tail);

struct Member {
public:
    int age;
    string name;

    Member(int a, string n) {
        age = a;
        name = n;
    }
};

vector<Member*> member;
int main() {
    int N = 0;
    cin >> N;
    for (int i = 0;i < N;i++)
    {
        int a;
        cin >> a;
        string n;
        cin >> n;
        Member* m = new Member(a, n);
        member.push_back(m);
    }
    MergeSort(0, member.size() - 1);
    for (int i = 0;i < N;i++)
    {
        cout << member[i]->age;
        cout << " " << member[i]->name << '\n';
    }

    return 0;
}

void MergeSort(int head, int tail) {
    if (head >= tail) return;
    int mid = (head + tail) / 2;
    MergeSort(head, mid);
    MergeSort(mid + 1, tail);
    Merge(head, mid, tail);
}

void Merge(int head, int mid, int tail) {
    vector<Member*> sorted;
    int i = head;
    int j = mid + 1;

    while (i <= mid && j <= tail) {
        if (member[i]->age <= member[j]->age)
            sorted.push_back(member[i++]);
        else
            sorted.push_back(member[j++]);
    }

    while (i <= mid) {
        sorted.push_back(member[i++]);
    }
    while (j <= tail) {
        sorted.push_back(member[j++]);
    }

    for (int k = 0; k < sorted.size(); k++) {
        member[head + k] = sorted[k];
    }
}
