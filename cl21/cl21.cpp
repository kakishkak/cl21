#include <iostream>

using namespace std;

class Vector {
	int x, y;
public:
	Vector() {
		x = 1;
		y = 1;
	}
	Vector(int x, int y) {
		this->x = x;
		this->y = y;
	}

	void PrintInfo() {
		cout << "X: " << this->x << "  Y: " << this->y << endl;
	}

	Vector operator+(const Vector& other) {
		return Vector(this->x + other.x, this->y + other.y);
	}

	Vector operator-(const Vector& other) {
		return Vector(this->x - other.x, this->y - other.y);
	}

	Vector operator++() {
		++this->x;
		++this->y;
		return *this;
	}

	Vector operator++(int) {
		Vector temp = *this;
		++this->x;
		++this->y;
		return temp;
	}

	Vector operator--() {
		--this->x;
		--this->y;
		return *this;
	}

	Vector operator--(int) {
		Vector temp = *this;
		--this->x;
		--this->y;
		return temp;
	}

	bool  operator>(Vector& other) {
		if (this->x > other.x && this->y > other.y) {
			return true;
		}
		return false;
	}

	bool  operator>=(Vector& other) {
		if (this->x >= other.x && this->y >= other.y) {
			return true;
		}
		return false;
	}

	bool  operator<(Vector& other) {
		if (this->x < other.x && this->y < other.y) {
			return true;
		}
		return false;
	}

	bool  operator<=(Vector& other) {
		if (this->x <= other.x && this->y <= other.y) {
			return true;
		}
		return false;
	}

	bool  operator==(Vector& other) {
		if (this->x == other.x && this->y == other.y) {
			return true;
		}
		return false;
	}


	Vector operator=(const Vector& other) {
		return *this;
	}


	friend ostream& operator<<(ostream& os, const Vector& book);
};

ostream& operator<<(ostream& os, const Vector& other) {
	os << "X: " << other.x << "  Y: " << other.y << endl;;
	return os;
}

int main()
{
	Vector obj;
	Vector obj2 = Vector(6, 9);
	Vector obj3;
	Vector obj4;
	obj3 = obj + obj2;
	obj3.PrintInfo();
	obj4 = obj3 - obj3;
	obj4.PrintInfo();
	obj = obj++;
	obj.PrintInfo();
	obj = ++obj;
	obj.PrintInfo();
	obj = obj--;
	obj.PrintInfo();
	obj = --obj;
	obj.PrintInfo();
	if (obj > obj2) {
		cout << "Its work" << endl;
	}
	else {
		cout << "Its dont work" << endl;
	}
	if (obj3 >= obj4) {
		cout << "Its work" << endl;
	}
	else {
		cout << "Its dont work" << endl;
	}
	if (obj3 < obj4) {
		cout << "Its work" << endl;
	}
	else {
		cout << "Its dont work" << endl;
	}
	if (obj <= obj2) {
		cout << "Its work" << endl;
	}
	else {
		cout << "NIts dont work" << endl;
	}
	if (obj == obj) {
		cout << "Its work" << endl;
	}
	else {
		cout << "Its dont work" << endl;
	}
	obj = obj4;
	obj.PrintInfo();
	cout << obj;
}





//#define _CTR_SECURE_NO_WATNINGS
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class Human {
//    char* name;
//public:
//    Human(const char* name) {
//        this->name = new char[strlen(name) + 1];
//        strcpy(this->name, name);
//    }
//
//    Human operator=(const Human& other) {
//        if (this == &other) {
//            return *this;
//        }
//        delete[] this->name;
//    }
//};

//class Point {
//    int x;
//    int y;
//public:
//    Point() {
//        x = 1;
//        y = 2;
//    }
//    Point(int x, int y){
//        this->x = x;
//        this->y = y;
//        }
//    void printer() {
//        cout << "X: " << this->x << " Y: " << this->y << endl;
//    }
//
//    Point operator+(const Point& other) {
//        return Point(this->x + other.x, this->y + other.y);
//    }
//
//    Point operator-() {
//        return Point(-this->x, - this->y);
//    }
//
//    friend Point operator-(const Point& current, const Point& other);
//
//    Point operator++() {
//        ++this->y;
//        return *this;
//    }
//
//    Point operator++(int) {
//        Point temp = *this;
//        ++this->y;
//        return temp;
//    }
//
//    //Point operator++() {
//    //    ++this->x;
//    //    return *this;
//    //}
//};

//Point operator-(const Point& current, const Point& other) {
//    return Point(current.x - other.x, current.y - other.y);
//}

//int main()
//{
//    //Point obj = Point(1, 2);
//    //Point obj2 = Point(11, 21);
//    //
//    //Point obj3 = obj + obj2;
//    //Point obj4 = obj - obj2;
//    //
//    //obj.printer();
//    //obj2.printer();
//    //obj3.printer();
//    //obj4.printer();
//    //Point obj;
//    //++obj;
//    //obj.printer();
//    //obj++;
//    //obj.printer();
//
//
//
//}
