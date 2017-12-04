#ifndef _STRINGSTACK_
#define _STRINGSTACK_

#include <string>
#include <vector>

#include "TrueStack.h"

class StringStack : public TrueStack
{
public:
  virtual std::string pop();
  virtual void push(std::string);
  virtual bool isEmpty();
private:
  std::vector<std::string> stack = std::vector<std::string>();
};

#endif
