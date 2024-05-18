#include <iostream>

class Node {
public:
  Node(int value) : m_value(value), m_next(nullptr) {}
  void set_next(Node* next) {
    m_next = next;
  }
  Node* get_next() const {
    return m_next;
  }
  int get_value() const {
    return m_value;
  }
private:
  Node* m_next;
  int m_value;
};

void PrintList(Node* head) {
  while (head) {
    std::cout << head->get_value() << ' ';
    head = head->get_next();
  }
  std::cout << std::endl;
}
// 1 -> 2 -> 3
// 1 <- 2 <- 3

// run through the list with 3 pointers
// first, we have current and previous
// then, we have a temporary value

Node* ReverseListOfFour(Node* head) {
  // it is guaranteed that there are strictly three nodes
  Node* first = head;
  Node* second = head->get_next();
  Node* third = second->get_next();
  Node* fourth = third->get_next();
  first->set_next(nullptr);
  second->set_next(first);
  third->set_next(second);
  fourth->set_next(third);
  return fourth; // new head
}

Node* ReverseList(Node* head) {
  Node* previous = nullptr;
  Node* current = head;
  while(current) {
    Node* temp = current->get_next();
    current->set_next(previous);
    previous = current;
    current = temp;
  }
  return previous;
}

int main() {
  Node* list_head = new Node(0);
  Node* second = new Node(1);
  list_head->set_next(second);
  Node* third = new Node(2);
  second->set_next(third);
  Node* fourth = new Node(3);
  third->set_next(fourth);
 
  PrintList(list_head);
  Node* new_head = ReverseList(list_head);
  PrintList(new_head);
  return 0;
}
