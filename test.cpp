#include<iostream>
using namespace std;
//set�����ĸ�ֵ�͹���
//set�������ص㣺1.����Ԫ���ڲ���ʱ�Զ������� 2.���ܲ����ظ�����ֵ
#include<set>
//void printset(set<int>&s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	set<int>s;
//	s.insert(10);//ע�⣺set���͵���push_back()
//	s.insert(30);
//	s.insert(20);
//	s.insert(10);
//	printset(s);//10 20 30
//	//��������
//	set<int>s1(s);
//	printset(s1);//10 20 30
//	//�ȺŸ�ֵ
//	set<int>s2;
//	s2 = s;
//	printset(s2);
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//set�����Ĵ�С�ͽ���
//#include<set>
//void printset(set<int>&s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	cout << "����ǰ" << endl;
//	set<int>s;
//	s.insert(10);
//	s.insert(20);
//	s.insert(30);
//	s.insert(40);
//	printset(s);
//	set<int>s1;
//	s1.insert(100);
//	s1.insert(200);
//	s1.insert(300);
//	s1.insert(400);
//	s1.insert(400);
//	printset(s1);
//	cout << "������" << endl;
//	s.swap(s1);
//	printset(s);//�����ɹ���
//	printset(s1);
//	cout << s.size() << endl;//4
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//set������Ԫ�ص�ɾ��
//#include<set>
//void printset(set<int>&s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	set<int>s;
//	s.insert(10);
//	s.insert(20);
//	s.insert(30);
//	set<int>::iterator it = s.begin();
//	s.erase(it);
//	printset(s);//20 30
//	s.erase(s.begin(), s.end());
//	printset(s);//��
//	s.insert(10);
//	s.insert(20);
//	s.insert(30);
//	s.erase(30);//ֱ��ָ������
//	printset(s);//10 20
//}
//int main()
//{
//	test();
//	return 0;
//}
//set��multiset������set�в����Դ�����ͬ��Ԫ�أ�multiset�п��Դ�����ͬ��Ԫ�أ�
//#include<set>
//void test()
//{
	//ʹ��set
	//set<int>s;
	//pair < set<int>::iterator, bool>ret = s.insert(10);
	//if (ret.second)
	//{
	//	cout << "��һ�β���10�ɹ���" << endl;//��һ�β���10�ɹ�
	//}
	//else
	//{
	//	cout << "��һ�β���10ʧ�ܣ�" << endl;
	//}
	//ret = s.insert(10);
	//if (ret.second)
	//{
	//	cout << "�ڶ��β���10�ɹ���" << endl;
	//}
	//else
	//{
	//	cout << "�ڶ��β���10ʧ�ܣ�" << endl;//�ڶ��β���10ʧ�ܣ�
	//}
	//ʹ��multiset
//	multiset<int>s;
//	s.insert(10);
//	s.insert(10);
//	s.insert(10);
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";//10 10 10
//	}
//	cout << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//pair����Ĵ�������
//#include<set>
//#include<string>
//void test()
//{
//	pair<string, int>p("tom", 20);
//	cout << " ������" << p.first << " ���䣺" << p.second << endl;//��һ
//	pair<string, int>p1=make_pair("jerry", 30);
//	cout << " ������" << p1.first << " ���䣺" << p1.second << endl;//����
//
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//set����������
//#include<set>
//class Conclude
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//void test()
//{
//	set<int>s;
//	s.insert(10);
//	s.insert(30);
//	s.insert(20);
//	s.insert(50);
//	s.insert(40);
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";//10 20 30 40 50 Ĭ�ϴ�С����
//	}
//	cout << endl;
//	set<int , Conclude>s1;
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(50);
//	s1.insert(40);
//	for (set<int, Conclude>::iterator it = s1.begin(); it != s1.end(); it++)//50 40 30 20 10 �ɹ���Ϊ�˴Ӵ�С
//	{
//		cout << *it << " ";//10 20 30 40 50 Ĭ�ϴ�С����
//	}
//	cout << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//set����������
//#include<set>
//#include<string>
//class person
//{
//public:
//	person(string name, int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	string m_name;
//	int m_age;
//}; 
//class conclude
//{
//public:
//	bool operator()(person p1, person p2)
//	{
//		return p1.m_age > p2.m_age;
//	}
//};
//void test()
//{
//	person p1("�ŷ�", 26);
//	person p2("����", 24);
//	person p3("����", 28);
//	person p4("����", 23);
//	person p5("����", 60);
//	set<person,conclude>s;
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//	s.insert(p5);
//	for (set<person, conclude>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << " ������" << it->m_name << " ���䣺" << it->m_age << endl;
//	}
//	cout << endl;//���ź��򣺻��� ���� �ŷ� ���� ����
//}
//int main()
//{
//	test();
//	return 0;
//}
//������������������������������������������������������������������������
//map����
//map�Ĺ���͸�ֵ
//#include<map>
//void printMap(map<int, int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//}
//void test()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));//�����keyֵ�Զ�����
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//	m.insert(pair<int, int>(5, 50));
//	printMap(m);
//	map<int, int>m1(m);//��������
//	printMap(m1);
//	//��ֵ
//	map<int, int>m2;
//	m2 = m;
//	printMap(m2);
//}
//int main()
//{
//	test();
//	return 0;
//}
//map�����Ĵ�С�ͽ���
//#include<map>
//void printMap(map<int, int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//void test()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//	m.insert(pair<int, int>(5, 50));
//	map<int, int>m1;
//	m1.insert(pair<int, int>(6, 60));
//	m1.insert(pair<int, int>(7, 70));
//	m1.insert(pair<int, int>(8, 80));
//	m1.insert(pair<int, int>(9, 90));
//	m1.insert(pair<int, int>(10, 100));
//	if (m.empty())
//	{
//		cout << "mΪ��" << endl;
//	}
//	else
//	{
//		cout << "m��Ϊ��" << endl;
//		cout << m.size() << endl;//5
//	}
//	cout << "����ǰ" << endl;
//	printMap(m);
//	printMap(m1);
//	cout << "������" << endl;
//	m1.swap(m);
//	printMap(m);
//	printMap(m1);//�����ɹ���
//}
//int main()
//{
//	test();
//	return 0;
//}
//map�����Ĳ����ɾ��
//#include<map>
//void printMap(map<int, int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//void test()
//{
//	map<int, int>m;
//	//��һ�ֲ��뷽��
//	m.insert(pair<int, int>(1, 10));
//	//�ڶ��ֲ��뷽��
//	m.insert(make_pair(2, 20));
//	//�����ֲ��뷽��
//	m.insert(map<int, int>::value_type(3, 30));
//	//�����ֲ��뷽��
//	m[4] = 40;//���Ƽ�  �ᴴ��Ĭ��valueֵ
//	printMap(m);
//	//cout << m[5] << endl;//����û��key����5��valueֵ ����m[]������ʽ����������Ѱ�ض�keyֵ�µ�valueֵ ���Ƽ���������keyֵ�µ�value
//	//ɾ��
//	m.erase(m.begin());
//	printMap(m);
//	m.erase(3);//����keyֵɾ��
//	printMap(m);
//	m.erase(m.begin(), m.end());
//	printMap(m);
//		
//}
//int main()
//{
//	test();
//	return 0;
//}
//map�����Ĳ��Һ�ͳ��
//#include<map>
//void test()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1,10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//	m.insert(pair<int, int>(5, 50));
//	map<int, int>::iterator it = m.find(3);
//	cout << " key = " << it->first << " value = " << it->second << endl;
//	int num = m.count(3);//ͳ�� ����map�����в��������keyֵ��ͬ��Ԫ�� ����numҪôΪ0 ҪôΪ1 multimap�е�count���ܴ���һ
//	cout << num << endl;
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//map����������
//#include<map>
//void printMap(map<int,int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << " key = " << it->first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//class Conclution
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//void test()
//{
//	map<int, int>m;
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(5, 50));
//	m.insert(make_pair(3, 30));
//	m.insert(make_pair(4, 40));//�����Զ����� Ĭ�ϴ�С����
//	printMap(m);
//	//���Ҫ�Ӵ�С 
//	map<int, int,Conclution>m1;
//	m1.insert(make_pair(1, 10));
//	m1.insert(make_pair(2, 20));
//	m1.insert(make_pair(5, 50));
//	m1.insert(make_pair(3, 30));
//	m1.insert(make_pair(4, 40));
//	for (map<int, int, Conclution>::iterator it = m1.begin(); it != m1.end(); it++)
//	{
//		cout << " key = " << it->first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
























