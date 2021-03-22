#include <iostream>

using namespace std;

inline void sep(bool b = true)
{
	if (b) cout << endl;
	cout << " - - - - - - - - - - - - - - - \n\n";
}

inline void sep_title(const char* title, bool b = true)
{
	if (b) cout << endl;
	cout << " - - - - - - - - - - - - - - - \n" << " << " << title << " >>\n\n";
}

inline void new_line(int n = 1)
{
	for (int i = 0; i < n; i++) cout << endl;
}



#include "Matrix.h"

using namespace OOP;

int Matrix::counter = 0;

// ������ ���������������� �������,
// ������� ��������� ������ �������� '0', � �������� - '1'
double init_01(size_t i)
{
	return i % 2;
}



int main()
{
	/*double data[] = { 0, 1, 2, 3, 4, 5, 6, 7 };

	Vector
		v0,             // ����� ������������ ��� ����������, ����������� Vector(0, nullptr)
		v1(8),          // ����������� Vector(8, nullptr)
		v2(8, data),    // ����������� Vector(8, data)
		v3(8, init_01); // ����������� Vector(8, init_func)

	// ��� ���� ���� ������� ���������� ������ ���������� nullptr,
	// �� ��������� ��������, �.�. ����:
	//
	// Vector(size_t, double*)
	// Vector(size_t, init_func)
	//
	// ��� ���� ������������ ��������� ������ ���������� ���������...
	//
	// ��������������, ��� ������������ �� ����� ������������� ������
	// ������ ��� �������� ������� �������, � �������������� ��������
	// ��� ��� v0 �� ��� ���� ������ Vector(0);

	sep();

	Vector::setStreamWidth(4);

	cout << v0 << v1 << v2 << v3;

	sep(false);*/

    double *ptr = new double[4];
    for(int i=0; i<4; i++)
        ptr[i] = 2;

	Matrix
	    m1,
	    m2(2, 2, ptr),
	    m3(2, 2);

	std::cout << "aaaa" << std::endl;
	std::cout << m3.isOK(m2) << std::endl;
	m3 *= m2;
    std::cout << "aaaa" << std::endl;
	m3 += m2;
	m3.show();
	m2.show();
	m1.show();
	std::cout << m2[1][1] << std::endl;
}
