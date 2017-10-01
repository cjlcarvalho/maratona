#include <bits/stdc++.h>

using namespace std;

struct Node {
    int value;
    Node* next;
    
    Node(int value){
        this->value = value;
        this->next = NULL;
    };
    
    ~Node(){
        if(this->next)
            delete this->next;
    }
};

struct Hash {
    Node* list;
    
    ~Hash(){
        delete this->list;
    }
    
    void add(int value){
        Node* new_node = new Node(value);
        Node* current = this->list;
        if(current){
            while(current->next)
                current = current->next;
            current->next = new_node;
        }
        else
            this->list = new_node;
    };
    
    void print(){
        for(Node* i = this->list; i; i = i->next)
            cout << i->value << " -> ";
        cout << "\\" << endl;
    };
};

int main(){
    int n;
    cin >> n;
    while(n--){
        int m, c, d;
        cin >> m >> c;
        Hash* array = new Hash[m];
        while(c--){
            cin >> d;
            array[d % m].add(d);
        }
        for(int i = 0; i<m; i++){
            cout << i << " -> ";
            array[i].print();
        }
        if(n)
            cout << endl;
        delete[] array;
    }
    return 0;
}
