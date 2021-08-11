#include<iostream>
using namespace std;
//set容器的赋值和构造
//set容器的特点：1.所有元素在插入时自动被排序 2.不能插入重复的数值
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
//	s.insert(10);//注意：set类型的无push_back()
//	s.insert(30);
//	s.insert(20);
//	s.insert(10);
//	printset(s);//10 20 30
//	//拷贝构造
//	set<int>s1(s);
//	printset(s1);//10 20 30
//	//等号赋值
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
//set容器的大小和交换
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
//	cout << "交换前" << endl;
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
//	cout << "交换后" << endl;
//	s.swap(s1);
//	printset(s);//交换成功！
//	printset(s1);
//	cout << s.size() << endl;//4
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//set容器中元素的删除
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
//	printset(s);//空
//	s.insert(10);
//	s.insert(20);
//	s.insert(30);
//	s.erase(30);//直接指定数字
//	printset(s);//10 20
//}
//int main()
//{
//	test();
//	return 0;
//}
//set和multiset的区别（set中不可以存在相同的元素，multiset中可以存在相同的元素）
//#include<set>
//void test()
//{
	//使用set
	//set<int>s;
	//pair < set<int>::iterator, bool>ret = s.insert(10);
	//if (ret.second)
	//{
	//	cout << "第一次插入10成功！" << endl;//第一次插入10成功
	//}
	//else
	//{
	//	cout << "第一次插入10失败！" << endl;
	//}
	//ret = s.insert(10);
	//if (ret.second)
	//{
	//	cout << "第二次插入10成功！" << endl;
	//}
	//else
	//{
	//	cout << "第二次插入10失败！" << endl;//第二次插入10失败！
	//}
	//使用multiset
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
//pair对组的创建方法
//#include<set>
//#include<string>
//void test()
//{
//	pair<string, int>p("tom", 20);
//	cout << " 姓名：" << p.first << " 年龄：" << p.second << endl;//法一
//	pair<string, int>p1=make_pair("jerry", 30);
//	cout << " 姓名：" << p1.first << " 年龄：" << p1.second << endl;//法二
//
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//set容器的排序
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
//		cout << *it << " ";//10 20 30 40 50 默认从小到大
//	}
//	cout << endl;
//	set<int , Conclude>s1;
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(50);
//	s1.insert(40);
//	for (set<int, Conclude>::iterator it = s1.begin(); it != s1.end(); it++)//50 40 30 20 10 成功改为了从大到小
//	{
//		cout << *it << " ";//10 20 30 40 50 默认从小到大
//	}
//	cout << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//set容器的排序
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
//	person p1("张飞", 26);
//	person p2("刘备", 24);
//	person p3("关羽", 28);
//	person p4("赵云", 23);
//	person p5("黄忠", 60);
//	set<person,conclude>s;
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//	s.insert(p5);
//	for (set<person, conclude>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << " 姓名：" << it->m_name << " 年龄：" << it->m_age << endl;
//	}
//	cout << endl;//已排好序：黄忠 关羽 张飞 刘备 赵云
//}
//int main()
//{
//	test();
//	return 0;
//}
//————————————————————————————————————
//map容器
//map的构造和赋值
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
//	m.insert(pair<int, int>(1, 10));//会根据key值自动排序
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//	m.insert(pair<int, int>(5, 50));
//	printMap(m);
//	map<int, int>m1(m);//拷贝构造
//	printMap(m1);
//	//赋值
//	map<int, int>m2;
//	m2 = m;
//	printMap(m2);
//}
//int main()
//{
//	test();
//	return 0;
//}
//map容器的大小和交换
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
//		cout << "m为空" << endl;
//	}
//	else
//	{
//		cout << "m不为空" << endl;
//		cout << m.size() << endl;//5
//	}
//	cout << "交换前" << endl;
//	printMap(m);
//	printMap(m1);
//	cout << "交换后" << endl;
//	m1.swap(m);
//	printMap(m);
//	printMap(m1);//交换成功！
//}
//int main()
//{
//	test();
//	return 0;
//}
//map容器的插入和删除
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
//	//第一种插入方法
//	m.insert(pair<int, int>(1, 10));
//	//第二种插入方法
//	m.insert(make_pair(2, 20));
//	//第三种插入方法
//	m.insert(map<int, int>::value_type(3, 30));
//	//第四种插入方法
//	m[4] = 40;//不推荐  会创建默认value值
//	printMap(m);
//	//cout << m[5] << endl;//明明没有key等于5的value值 所以m[]这种形式可以用来找寻特定key值下的value值 不推荐用来创建key值下的value
//	//删除
//	m.erase(m.begin());
//	printMap(m);
//	m.erase(3);//按照key值删除
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
//map容器的查找和统计
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
//	int num = m.count(3);//统计 由于map容器中不允许插入key值相同的元素 所以num要么为0 要么为1 multimap中的count可能大于一
//	cout << num << endl;
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//map容器的排序
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
//	m.insert(make_pair(4, 40));//会有自动排序 默认从小到大
//	printMap(m);
//	//如果要从大到小 
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
























