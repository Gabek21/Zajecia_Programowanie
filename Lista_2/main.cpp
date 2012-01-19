#include <iostream>

using namespace std;

struct Node
{
    double data;
    Node* next;
};

struct List
{
    Node* glowa;
    int lenght;
};

List* create_list()
{
    List* list = new List;
    list -> glowa = NULL;
    list -> lenght = 0;
}

void append_to_list(List* l, double data)
{
    Node* n = new Node;
    n-> data = data;
    n-> next = NULL;
    if(l -> glowa == NULL)
    {
        l-> glowa = n;
    }   else
    {
        Node* el = l ->glowa;
        while(el -> next != NULL)
        {
            el = el->next;
        }
    }
    l -> lenght += 1;
  //  cout << n -> data;
}

void prepend_to_list(List* l, double data)
{
    Node* nowy = new Node;
    nowy -> data = data;
    nowy -> next = NULL;
    if(l -> glowa == NULL)
    {
        l -> glowa = nowy;
    } else
    {
            nowy -> next = l-> glowa;
            l -> glowa = nowy;
    }
    l -> lenght += 1;
}

void print_elements(List* l)
{
    if(l -> glowa == NULL){
        return;
    } else
    {
        Node* el = l-> glowa;
        cout << el-> data << endl;
        while (el -> next != NULL)
        {
            el = el -> next;
            cout << el -> data << endl;
        }
    }
}

double get_element(List* l, int position, bool* err)
{

}

int main()
{
    List* l = create_list();

    append_to_list(l, 1.1);

    print_elements(l);

    return 0;
}
