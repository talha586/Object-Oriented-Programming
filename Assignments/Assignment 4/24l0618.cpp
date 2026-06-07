#include <iostream>
#include <cstring>
using namespace std;

class Contact 
{
    string name;
    int contactNumbers[4];
    string email;
    string postalAddress;

public:

    Contact(string n = "", int nums[] = nullptr, string e = "", string addr = "") 
    {
        name = n;
        for (int i = 0; i < 4; i++) 
        {
            contactNumbers[i] = (nums != nullptr) ? nums[i] : -1;
        }
        email = e;
        postalAddress = addr;
    }

    bool numberfound(int n) 
    {
        for (int i = 0; i < 4; i++) 
        {
            if (contactNumbers[i] == n)
            {
                return true;
            }
        }
        return false;
    }

    bool namefound(const string& temp) 
    {
        size_t pos = temp.find('*');

        if (pos == string::npos)
        {
            return name == temp;
        }
        string prefix = temp.substr(0, pos);
        string suffix = temp.substr(pos + 1);
        return name.substr(0, prefix.size()) == prefix && name.substr(name.size() - suffix.size()) == suffix;
    }

    bool delnumber(int n) 
    {
        for (int i = 0; i < 4; i++) 
        {
            if (contactNumbers[i] == n) 
            {
                contactNumbers[i] = -1;
                return true;
            }
        }
        return false;
    }

    bool isempty()  
    {
        for (int i = 0; i < 4; i++) 
        {
            if (contactNumbers[i] != -1)
            {
                return false;
            }
        }
        return true;
    }

    void display() 
    {
        cout << "name: " << name << endl;
        cout << "numbers: ";
        for (int i = 0; i < 4; i++) 
        {
            if (contactNumbers[i] != -1)
            {
                cout << contactNumbers[i] << " ";
            }
        }
        cout << endl;
        if (!email.empty())
        {
            cout << "email: " << email << endl;
        }
        if (!postalAddress.empty())
        {
            cout << "address: " << postalAddress << endl;
        }
    }
    friend class ContactList;
};

class ContactList 
{
    Contact* contacts;
    int size;
    int count;
public:

    ContactList() 
    {
        size = 10;
        count = 0;
        contacts = new Contact[size];
    }

    // Copy Constructor
    ContactList(const ContactList& temp) 
    {
        size = temp.size;
        count = temp.count;
        contacts = new Contact[size];
        for (int i = 0; i < count; i++) {
            contacts[i] = temp.contacts[i];
        }
    }

    // Assignment Operator
    ContactList& operator=(const ContactList& temp) 
    {
        if (this != &temp) {
            delete[] contacts;
            size = temp.size;
            count = temp.count;
            contacts = new Contact[size];
            for (int i = 0; i < count; i++) {
                contacts[i] = temp.contacts[i];
            }
        }
        return *this;
    }

    // Destructor
    ~ContactList() 
    {
        delete[] contacts;
    }

    void resize(int newSize)
    {
        Contact* newContacts = new Contact[newSize];
        for (int i = 0; i < count; i++) {
            newContacts[i] = contacts[i];
        }
        delete[] contacts;
        contacts = newContacts;
        size = newSize;
    }

    // Operator+ to add a contact
    ContactList& operator+(const Contact& c) 
    {
        if (count == size) resize(size * 2);
        contacts[count++] = c;
        return *this;
    }

    // Operator- to remove a contact by name
    ContactList& operator-(const Contact& c) 
    {
        for (int i = 0; i < count; ) 
        {
            if (contacts[i].name == c.name) 
            {
                for (int j = i; j < count - 1; j++)
                {
                    contacts[j] = contacts[j + 1];
                }
                count--;
            }
            else 
            {
                i++;
            }
        }
        if (count < size / 2 && size > 10) 
        {
            resize(size / 2);
        }
        return *this;
    }

    // Operator- to remove a contact number
    ContactList& operator-(int number) 
    {
        for (int i = 0; i < count; ) 
        {
            if (contacts[i].numberfound(number)) 
            {
                contacts[i].delnumber(number);
                if (contacts[i].isempty()) 
                {
                    for (int j = i; j < count - 1; j++)
                    {
                        contacts[j] = contacts[j + 1];
                    }
                    count--;
                }
                else {
                    i++;
                }
            }
            else {
                i++;
            }
        }
        if (count < size / 2 && size > 10)
        {
            resize(size / 2);
        }
        return *this;
    }

    // Search by name with wildcards
    void searchbyname(const string& pattern) 
    {
        for (int i = 0; i < count; i++) 
        {
            if (contacts[i].namefound(pattern)) 
            {
                contacts[i].display();
            }
        }
    }

    // Search by number
    void searchbynumber(int number) 
    {
        for (int i = 0; i < count; i++) 
        {
            if (contacts[i].numberfound(number)) 
            {
                contacts[i].display();
            }
        }
    }

    // Display contacts
    void displaydata()
    {
        cout << "All Contacts:\n";
        for (int i = 0; i < count; i++) 
        {
            contacts[i].display();
        }
    }

};

// Friend function for commutative purpose
ContactList& operator-(const Contact& c, ContactList& cl) 
{
    return cl - c;
}

int main() 
{
    ContactList cl;
    int nums1[4] = { 1234, 5678, -1, -1 };
    int nums2[4] = { 1111, 2222, -1, -1 };
    int nums3[4] = { 3333, -1, -1, -1 };
    Contact c1("Rahim", nums1, "rahim@gmail.com", "johar town");
    Contact c2("Reham", nums2, "reham@gmail.com", "wapda town");
    Contact c3("Talha", nums3);
    cl=cl + c1;
    cl=cl + c2;
    cl=cl + c3;
    cout << endl;
    cl.displaydata();
    cout << endl;
    cout << "search by name"<<endl;
    cl.searchbyname("R*am");
    cout << endl; 
    cout << "search by number" << endl;
    cl.searchbynumber(2222);
    cout << endl;
    cout << "remove contact by name"<<endl;
    Contact temp("Talha");
    cl - temp;
    cl.displaydata();
    cout << endl;
    cout << "remove contact by number"<<endl;
    cl - 5678;
    cl.displaydata();
}
