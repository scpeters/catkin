#include "foo/foo.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

void foo(string &msg) {
    cout << "Foo: " << msg << endl;
}

