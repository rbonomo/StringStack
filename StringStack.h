#ifndef _STRINGSTACK_
#define _STRINGSTACK_

#include <string>
#include <vector>

#include "TrueStack.h"

class StringStack : public TrueStack
{
public:
  std::string pop();
  void push(std::string);
  bool isEmpty();
private:
  std::vector<std::string> stack = std::vector<std::string>();
};

#endif
