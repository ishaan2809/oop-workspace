    #include "USBConnection.h"
    #include <stack>
    std::stack<int> USBConnection::ids;

    USBConnection::USBConnection() {
        // Assign the top element of the ids stack to the ID member variable
        ID = ids.top();
        // Remove the top element from the ids stack
        ids.pop();
        }
        USBConnection::~USBConnection() {
            ids.push(ID);
        }

        int USBConnection::get_ID() {
            return ID;
        }
        


