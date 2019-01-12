#include "Client.h"

Client::Client()
{
    
}

int Client::execute()
{
    V20 *v20 = new V20();
    this->ox->accept(v20);
    return 0;
}

int main() 
{
    Client client;
    client.execute();
    return 0;
}