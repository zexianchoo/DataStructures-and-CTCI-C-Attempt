#include "hash_table_sll.hpp"

// Informal Tests for the HashTable class
int main() {
    HashMap<int, int> *test = new HashMap<int, int>();
    test->InsertNode(1,1);
    test->InsertNode(2,2);
    test->InsertNode(2,3);
    test->InsertNode(3,6);
    test->InsertNode(1,1);
    test->InsertNode(2,2);
    test->InsertNode(2,3);
    test->InsertNode(3,6);
    test->Display();
    printf(std::to_string(test->Size()).c_str());
    printf(std::to_string(test->DeleteNode(2)).c_str());
    printf(std::to_string(test->IsEmpty()).c_str());
    printf(std::to_string(test->GetValue(2)).c_str());
    HashMap<int, int> *test1 = new HashMap<int, int>();
    test1 = test;
    test1->Display();
    delete test; 
    delete test1;
    return 0;
}
