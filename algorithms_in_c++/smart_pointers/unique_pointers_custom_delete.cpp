#include <iostream>
#include <memory>

using namespace std;

// code for c network connection api
struct destination {/*  */};
struct connection {/*  */};

// function to open a connection
connection connect(destination pDest) {
    cout << "Connection opened\n";
    connection conn;
    return conn;
}

// function to close a connection
void disconnect(connection conn) {
    cout << "Connection closed\n";
}

// custom deleter function
auto end_connect = [](connection* pConn) {
    disconnect(*pConn);
};


// end of code from c networking api    

void get_data(const destination& des) {
    connection conn = connect(des);
    std::unique_ptr<connection, decltype(end_connect)> ptr(&conn, end_connect);
    throw std::runtime_error("Simulated error during data retrieval");
    std::cout << "Getting data...\n";
}

int main() {
    destination des;
    try {
        get_data(des);
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    // get_data(des);
    return 0;
}
