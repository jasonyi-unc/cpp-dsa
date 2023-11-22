#include <bits/stdc++.h>
#include <iostream>
using namespace std;

namespace assn07 {
    template <typename K, typename V>
    class Account {
    private:
        K _website;
        V _password;
        Account* _next;

    public:
        Account(K website, V password) : _website(website), _password(password), _next(nullptr) {}

        K getWebsite() {
            return _website;
        }

        void setWebsite(K website) {
            _website = website;
        }

        V getPassword() {
            return _password;
        }

        void setPassword(V password) {
            _password = password;
        }

        Account* getNext() {
            return _next;
        }

        void setNext(Account* next) {
            _next = next;
        }
    };

}

int main() {
    assn07::Account<std::string, std::string> myAccount("example.com", "mypassword");

    std::cout << "Website: " << myAccount.getWebsite() << std::endl;
    std::cout << "Password: " << myAccount.getPassword() << std::endl;

    return 0;
}