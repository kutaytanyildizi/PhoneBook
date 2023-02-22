#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>

using namespace std;

class PhoneBook
{
    public:
    virtual string getPhoneNumber(const string &name) = 0;
    virtual void addContact(string name, string phone) = 0;
};

class MapPhoneBook : public PhoneBook
{
    private:
    map <string, string> contacts_map;

    public:
    string getPhoneNumber(const string &name);
    void addContact(string name, string phone);
};

class UmapPhoneBook : public PhoneBook
{
    private:
    unordered_map <string, string> contacts_umap;

    public:
    string getPhoneNumber(const string &name);
    void addContact(string name, string phone);
};

class VecPhoneBook : public PhoneBook
{
    private:
    vector<pair<string,string> > contacts_vec;

    public:
    string getPhoneNumber(const string &name);
    void addContact(string name, string phone);
};  