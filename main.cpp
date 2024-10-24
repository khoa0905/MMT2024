#include "GmailClient.h"
#include "json/json.h"
#include <fstream>
#include <sstream>

int main() {
    GmailClient client("credential.json");
    // client.renewAccessToken();
    client.listUnreadEmail();
    client.writeAccessToken("credential.json");
    return 0;
}