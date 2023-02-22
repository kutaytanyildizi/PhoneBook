#include "base.h"

using namespace std;

string MapPhoneBook::getPhoneNumber(const string &name)
{
    auto it = contacts_map.find(name);
    if(it != contacts_map.end())
    {
        return it->second;
    }
    else
    {
        return string();
    } 
}

string UmapPhoneBook::getPhoneNumber(const string &name)
{
    auto it = contacts_umap.find(name);
    if(it != contacts_umap.end())
    {
        return it->second;
    }
    else
    {
        return string();
    }
}

string VecPhoneBook::getPhoneNumber(const string &name)
{
    for(const pair<string, string> &iter : contacts_vec)
    {
        if(iter.first == name)
        {
            return iter.second;
        }
    }
    return string();
}

void MapPhoneBook::addContact(string name, string phone)
{
    contacts_map.insert(make_pair(name,phone));
}

void UmapPhoneBook::addContact(string name, string phone)
{
    contacts_umap.insert(make_pair(name,phone));
}

void VecPhoneBook::addContact(string name, string phone)
{
    contacts_vec.push_back(make_pair(name, phone));
}