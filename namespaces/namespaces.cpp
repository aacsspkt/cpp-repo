#include <iostream>

/*
Namespaces provides a solution for preventing name conflicts in large projects.
Each entity needs a unique name. A namespace allows for identically named entities
as long as the namespaces are different.
*/

namespace first {
    int x = 1;
}

namespace second {
    int x = 1;
}

int main() {
    return 0;
}