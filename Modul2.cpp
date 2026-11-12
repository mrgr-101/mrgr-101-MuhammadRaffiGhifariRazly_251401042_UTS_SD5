#include <iostream>
using namespace std;

struct Node {
    string username;
    int bintang;
    Node* next;
};

Node* head = NULL;

void insertTail(string username, int bintang) {
    Node* newNode = new Node;
    newNode->username = username;
    newNode->bintang = bintang;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void deleteHead() {
    if (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void deleteTail() {
    if (head != NULL) {
        if (head->next == NULL) {
            delete head;
            head = NULL;
        } else {
            Node* temp = head;
            while (temp->next->next != NULL) {
                temp = temp->next;
            }
            delete temp->next;
            temp->next = NULL;
        }
    }
}

void tampilImo() {
    cout << "List Player Imo hebat:\n";
    Node* temp = head;
    int no = 1;
    while (temp != NULL) {
        if (temp->bintang >= 100) {
            cout << no << " | " << temp->username << " (Imo " << temp->bintang << ")\n";
            no++;
        }
        temp = temp->next;
    }
}

int main() {
    system("cls");
    int pilihan;
    string username;
    int bintang;

    do {
        cout << "Pilih menu (1 - 4)\n";
        cout << "1. Insert tail\n";
        cout << "2. Delete head\n";
        cout << "3. Delete tail\n";
        cout << "4. Tampilkan Player Imo\n";
        cout << "Masukan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan Username: "; cin >> username;
                cout << "Masukkan Bintang: "; cin >> bintang;
                insertTail(username, bintang);
                break;
            case 2:
                deleteHead();
                break;
            case 3:
                deleteTail();
                break;
            case 4:
                tampilImo();
                break;
            default:
                break;
        }
    } while (pilihan != 4);
}