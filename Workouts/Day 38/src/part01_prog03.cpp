#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main() {
    forward_list<string> chat = { "Hi", "Hello", "DELETED: Spam", "How are you?", "DELETED: Abuse" };

    chat.remove_if([](const string& msg) {
        return msg.find("DELETED:") == 0;
        });

    for (const auto& msg : chat) {
        cout << msg << endl;
    }

    return 0;
}
