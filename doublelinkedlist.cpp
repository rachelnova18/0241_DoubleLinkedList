#include <iostream>
using namespace std;

// membuat struktur untuk object double linkedlist
struct Node
{
    // deklarasi noMhs dan name untuk menampung data
    int noMhs;
    string name;
    // deklarasi pointer next dan prev untuk petunjuk ke data sebelum dan sesudahnya
    Node *next;
    Node *prev;
};

