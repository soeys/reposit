#include <iostream>
using namespace std;



struct culture {
    int s;
    char ch;
};

struct TList {
    culture info;
    TList* next;
};

TList* head = NULL;
TList* tail = NULL;

void create(culture tt) {
    TList* temp = new TList;
    temp->next = NULL;
    temp->info.s = tt.s;
    temp->info.ch = tt.ch;

}

void print_list() {
    TList* temp;
    temp = head;

    while (temp != NULL) {
        cout << temp->info.s << temp->info.ch << endl;
        temp = temp->next;
    }
}

int main()
{

}
