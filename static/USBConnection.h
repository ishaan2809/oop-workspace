#ifndef USBCONNECTION_H
#define USBCONNECTION_H
#include <stack>

class USBConnection{
    private:
        int ID;
        USBConnection();
        
    public:
        static std::stack<int> ids;
        static USBConnection* createConnection(){
            return ids.empty() ? nullptr : new USBConnection;
        }
        int get_ID();
        ~USBConnection();


};
#endif