#include <iostream>
#include <string>
using namespace std;

class Student {
	friend class Teacher;
private:
	int grade = 0;
	int step = 0;
public:
	string name = "default";
	static int population;
	Student() {
		population++;
	}

	void print() {
		cout << "name = " << name << endl;
		cout << "grade = " << grade << endl;
		cout << "step = " << step << endl;
	};

	void set_name() {
		name = "Ivan";
	};
};

int Student::population = 0;

class Teacher {
public:
	void set_grade(Student& s) {
		s.grade = 4;
	}

	void set_step(Student& g) {
		g.step = 1;
	}
};

int main() {
	Student Ivan;
	Ivan.set_name();
	Teacher NataliaServgeevna;
	NataliaServgeevna.set_grade(Ivan);
	NataliaServgeevna.set_step(Ivan);
	Ivan.print();
	cout << "Kolichestvo studentov = " << Student::population << endl;
	return 0;
}

