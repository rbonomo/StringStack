#include "StringStack.h"

std::string StringStack::pop() {
  const std::string element = this->stack[this->stack.size() - 1];
  this->stack.pop_back();
  return element;
}

void StringStack::push(std::string string) {
  this->stack.push_back(string);
}

bool StringStack::isEmpty() {
  return this->stack.size();
}
