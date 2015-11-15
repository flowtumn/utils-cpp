#include <cassert>
#include "utils-cpp/dummy.h"

int main() {
    assert(300 == add(100,200));
    assert(500 == add(499, 1));
    assert(500 == add(501, -1));
}
