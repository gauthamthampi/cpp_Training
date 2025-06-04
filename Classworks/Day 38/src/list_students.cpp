#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

class Students {
	int studId;
	string name;

public:
	Students(int id, string name) : studId(id), name(name) {};
	void setId(int id) {
		this->studId = id;
	}
	void setName(string name) {
		this->name = name;
	}
	int getId() {
		return studId;
	}
	string getName() {
		return name;
	}
	void display() {
		cout << "Student Id: " << studId << endl;
		cout << "Student Name: " << name << endl;
	}
	bool operator==(const Students& other) const {
		return name == other.name;
	}

};

void sortByName(list<Students>& studs) {
	bool swapped;
	auto end = studs.end();

	do {
		swapped = false;
		auto it1 = studs.begin();
		auto it2 = next(it1);

		while (it2 != end) {
			if (it1->getName() > it2->getName()) {
				iter_swap(it1, it2);
				swapped = true;
			}
			++it1;
			++it2;
		}
		--end; 
	} while (swapped);
}

int main() {
	list<Students>studs;
	Students s1(1, "Gouri");
	Students s2(2, "Ebi");
	Students s3(3, "Abhijith");
	Students s4(4, "Sreelekshmi");
	Students s5(5, "Nisha");
	Students s6(6, "Vaishnavi");

	studs.push_back(s1);
	studs.push_back(s2);
	studs.push_back(s3);

	for (auto i : studs) {
		i.display();
	}
	
	/*studs.reverse();
	cout << "=========" << endl;
	for (auto i : studs) {
		i.display();
	}*/

	sortByName(studs);
	cout << "=========" << endl;
	for (auto i : studs) {
		i.display();
	}


}