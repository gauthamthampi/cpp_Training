#include <iostream>
#include <map>
#include <vector>
using namespace std;

struct Values {
    string name;
    char gender;
    int phone;
};

class Emp
{
private:
    int id;
    vector<Values> val;
public:
    Emp(int id, string name, char gender, int phone) : id(id), val{ {name, gender, phone} } {}

    void disp() const {
        if (!val.empty()) {
            cout << "ID: " << id << "\tName: " << val[0].name << "\tGender: " << val[0].gender << 
                "\t Phone: " << val[0].phone << endl;
        }
    }
};

int main()
{
    Emp e1(101, "abc1", 'm', 124);
    Emp e2(102, "abc2", 'f', 144);
    Emp e3(103, "abc3", 'm', 150);
    map<int, vector<Emp>> mapEmp;


    vector<Emp> v;
    v.push_back(e1);
    v.push_back(e2);
    v.push_back(e3);
 

    for (int i = 1;i < v.size();i++) {
        mapEmp[i] = vector<Emp>{v[i]};
    }

    for (const auto& pair : mapEmp) {
        cout << "Key: " << pair.first << " --> ";
        for (const auto& emp : pair.second) {
            emp.disp();
        }
    }

    return 0;
}
