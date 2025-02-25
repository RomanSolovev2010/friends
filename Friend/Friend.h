#ifndef FRIENDS_FRIEND_H
#define FRIENDS_FRIEND_H

#include "string"
#include "vector"
#include "../FullName/FullName.h"
#include "../Contacts/Contacts.h"
#include "../Hobbies/Hobbies.h"

using namespace std;

class Friend {
private:
    FullName fullName;
    string birthDate;

    Contacts contacts;
    vector<Hobbies> hobbies;

public:
    Friend(FullName fullName, string birthDate, Contacts contacts, vector<Hobbies> hobbies);
};

#endif //FRIENDS_FRIEND_H
