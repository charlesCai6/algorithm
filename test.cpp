/*
 * test.cpp
 *
 *  Created on: 2016年10月17日
 *      Author: c16442
 */

#include "test.h"
#include <iostream>
#include <map>
#include <time.h>
#include <string.h>
#include <math.h>
#include <fstream>
#include <unistd.h>

using namespace std;

test::test() {
	// TODO Auto-generated constructor stub

}

test::~test() {
	// TODO Auto-generated destructor stub
}


//class A
//{
//private:
//	int x;
//	int y;
//public:
//	void sety()
//	{
//		y=5;
//	}
//	void print()
//	{
//		cout<<"x="<<x<<endl<<"y="<<y<<endl;
//	}
//};

//class A
//{
//public:
//	void test(int a){cout << "test( int a = "<<a <<")" << endl;}
//	virtual void test2(int a){cout << "test2( int a = "<<a <<")" << endl;}
//	virtual void test3(int a){cout << "test2( int a = "<<a <<")" << endl;}
//};
//
//class B:public A
//{
//public:
//	//基类无论有无virtual函数，当函数名相同，参数不同，基类成员函数被隐藏。
//	void test(){cout << "test()" << endl;}
//	void test2(){}
//	//基类有virtual函数，当函数名相同，参数相同，基类成员函数被覆盖。
//	void test3(int a){}
//
//	//同一个类中，virtual可有可无，函数名相同，参数不同，成员函数被重载。
//	void test4(){}
//	void test4(int a){}
//	void test4(int a, int b){}
//};

///*002*/
//class A
//{
//public:
//	A(){cout<<"A()" << endl;}
//	~A(){cout<<"~A()" << endl;}
//};
//
//class B: public A
//{
//public:
//	B(){cout<<"B()" << endl;}
//	~B(){cout<<"~B()" << endl;}
//};
//
//class A1
//{
//public:
//	A1(){cout<<"A1()" << endl;}
//	virtual ~A1(){cout<<"~A1()" << endl;}
//};
//
//class B1: public A1
//{
//public:
//	B1(){cout<<"B1()" << endl;}
//	~B1(){cout<<"~B1()" << endl;}
//};

///*003*/
//class A
//{
//public:
//	virtual void test(int a){cout<<"A::test( int a = " << a << ")" <<endl;}
//};
//
//class B:public A
//{
//public:
//	void test(int a){cout<<"B::test( int a = " << a << ")" <<endl;}
//};
//
//typedef void (* pFunc)(int);

/*004*/
//template <typename T, int num>
//class A
//{
//public:
//	A(T a):aa(a){cout<<"a = " << aa <<endl;}
//	T getInputValue();
//	T getInputValue2()
//	{
//		return aa;
//	}
//
//	T aa;
//};
//
//template <typename T, int num>
//T A<T,num>::getInputValue()
//{
//	return aa;
//}

/*005*/
//class A
//{
//	friend class B;
//public:
//	void test()
//	{
//		cout << arg << endl;
//	}
//
//private:
//	int arg;
//};
//
//class B
//{
//public:
//	void test()
//	{
//		a.arg = 10;
//		cout << a.arg << endl;
//	}
//
//private:
//	A a;
//};

/*007*/
//class Endl
//{
//
//};
//
//class Cout
//{
//public:
//	Cout & operator << (string str)
//	{
//		std::cout << str;
//		return *this;
//	}
//
//	Cout & operator << (Endl & endl)
//	{
//		std::cout << std::endl;
//		return *this;
//	}
//};
/*008*/
//class A
//{
//	int a_;
//public:
////	A(int a):a_(a){}
//};
//#include<iostream>
//using namespace std;
//class Foo
//{
//public:
//  Foo(); //去掉默认构造函数会报错
//  Foo( int );
//private:
//  int val;
//};
//Foo::Foo()
//{
//  cout << "Call Foo::Foo() Constructor !"<< endl;
//  val = 0;
//}
//Foo::Foo(int i)
//{
//  cout << "Call Foo::Foo(int i) Constructor !"<< endl;
//  val = i;
//}
//class Bar
//{
//public:
//	Bar():foo(1){}
//	Foo foo;
//	char *str;
//};

//小结：1、有virtual才可能发生多态现象
// 2、不发生多态（无virtual）调用就按原类型调用
//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	virtual void f(float x)
//	{
//		cout<<"Base::f(float)"<< x <<endl;
//	}
//	void g(float x)
//	{
//		cout<<"Base::g(float)"<< x <<endl;
//	}
//	void h(float x)
//	{
//		cout<<"Base::h(float)"<< x <<endl;
//	}
//};
//class Derived : public Base
//{
//public:
//	virtual void f(float x)
//	{
//		cout<<"Derived::f(float)"<< x <<endl;   //多态、覆盖
//	}
////	void g(int x)
////	{
////		cout<<"Derived::g(int)"<< x <<endl;     //隐藏
////	}
//	void g(void)
//	{
//		cout<<"Derived::g(void)"<< x <<endl;     //隐藏
//	}
//	void h(float x)
//	{
//		cout<<"Derived::h(float)"<< x <<endl;   //隐藏
//	}
//};
//class A
//{
//public:
//	A(){cout << "A()" << endl;}
//	~A(){cout << "~A()" << endl;}
//	void func(){cout<<"void func()"<<endl;}
//	void func2()
//	{
//		cout<<"void func2()"<<endl;
//		a=1;
//	}
//	static void static_func(){cout<<"void static_func()"<<endl;}
//	virtual void virtual_func(){cout<<"void virtual_func()"<<endl;}
//	static int static_a;
//	int a;
//};
//
//int A::static_a = 1;

//class B
//{
//public:
//    B()
//    {
//        cout<<" default constructor"<<endl;
//    }
//    ~B()
//    {
//        cout<<"destructed "<< data << endl;
//        data = 0;
//    }
//    B(int i):data(i)
//    {
//        cout<<"constructed by parameter" << data <<endl;
//    }
//
//
//    B(int i,int j):data(i),data2(j)
//    {
//        cout<<"constructed by parameter" << data <<endl;
//    }
//
//
//    B& operator = (int i)
//    {
//    cout << "operator = "<< endl;
//    data = i;
//    return *this;
//    }
//
//
//    B& operator = (B& b)
//    {
//    cout << "operator = (B& b)" << endl;
//    }
//private:
//    int data;
//    int data2;
//};

//B Play( B b)
//{
//    return b ;
//}


class A
{
public:
    A(int i):a(1),b(8){cout<< "A()"<<endl;}
    int a;
    int b;
};
class A1
{
public:
    A1(int i):a(1),b(8){cout<< "A1()"<<endl;}
    int a;
    int b;
};
//class B
//{
//public:
////    B():m_a(a.a),m_b(a.b)//构造函数初始化列表
////    {
////    cout << "m_b = " << m_b << ",m_a = " << m_a << endl;
////    }
//
//	B():a(1),a1(1){cout<<"B()"<<endl;}
//private:
//    //下列为：声明顺序
////    int m_a;
//    A a;
////    int m_b;
//    //A a;
//    A1 a1;
//};

//class B
//{
//public:
////	//m_b = 2,m_a = 1
////	B():m_a(1),m_b(m_a+1)
////	{
////		cout << "m_b = " << m_b << ",m_a = " << m_a << endl;
////	}
//
//	//m_b = 2,m_a = 1
//	B():m_b(m_a+1),m_a(1)
//	{
//		cout << "m_b = " << m_b << ",m_a = " << m_a << endl;
//	}
//
//
////	//m_b = 1,m_a = -1218015231
////	B():m_b(1),m_a(m_b+1)
////	{
////		cout << "m_b = " << m_b << ",m_a = " << m_a << endl;
////	}
//private:
//	int m_a;
//	int m_b;
//};
//
//class C: public B
//{};

//class Parent {
//public:
//    int iparent;
//    Parent ():iparent (10) {}
//    virtual void f() { cout << " Parent::f()" << endl; }
//    virtual void g() { cout << " Parent::g()" << endl; }
//    virtual void h() { cout << " Parent::h()" << endl; }
//
//};
//
//class Child : public Parent {
//public:
//    int ichild;
//    Child():ichild(100) {}
//    virtual void f() { cout << "Child::f()" << endl; }
//    virtual void g_child() { cout << "Child::g_child()" << endl; }
//    virtual void h_child() { cout << "Child::h_child()" << endl; }
//};
//
//class GrandChild : public Child{
//public:
//    int igrandchild;
//    GrandChild():igrandchild(1000) {}
//    virtual void f() { cout << "GrandChild::f()" << endl; }
//    virtual void g_child() { cout << "GrandChild::g_child()" << endl; }
//    virtual void h_grandchild() { cout << "GrandChild::h_grandchild()" << endl; }
//};


//class String
//{
//public:
//	String(){cout<<"String()"<<endl;}
//	String(int a=1,int b=1){cout<<"String(int a=1,int b=1)"<<endl;}
//	String(string a="aaa",int b=1){cout<<"String(string a=aaa,int b=1)"<<endl;}
//	String(bool a=false){cout<<"String(string a=aaa,int b=1)"<<endl;}
//
//	int test(){cout<<"int test()"<<endl;}
////	void test(){cout<<"void test()"<<endl;}
//private:
//	string s;
//	int a;
//};

//class AAA
//{
//public:
//	AAA(int a):a_(a){cout<< "a_ = " << a<<endl;}
//	void change(int a){a_ = a; cout<< "a_ = " << a<<endl;}
//private:
//	int & a_;
//};

void display(int * p, int len)
{
	for (int i=0;i<len;i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
}

void display2(int * p, int len)
{
	for (int i=0;i<10;i++)
	{
		cout << p[i] << " ";
	}
	cout << " ... ";
	for (int i=len-10;i<len;i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
}

void displayChars(char * p, int len)
{
	for (int i=0;i<10;i++)
	{
		cout << p[i] << " ";
	}
	cout << " ... ";
	for (int i=len-10;i<len;i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
}


class Clock
{
public:
	Clock(){start_ = clock();}
	void ok()
	{
		finish_ = clock();
		duration_ = (double)(finish_ - start_) / CLOCKS_PER_SEC;
		printf("%.4f seconds.\n", duration_) ;
	}
private:
    clock_t start_, finish_;
    double duration_;
};

//void test_sort()
//{
//	int dataLen = 1024*1024*100;
//	int * data = new int[dataLen];
//
//	srand((unsigned)time(NULL));
//	for(int i = 0; i < dataLen;i++ )
//		data[i] = rand();
//
//	display2(data,dataLen);
////	int data[] = {10,2,1,4,7,5,8};
////	int dataLen = sizeof(data)/sizeof(int);
//#if 0
////	if(false)
//	{
//		int * array = NULL;
//		int len = 1024;
//
//		for (int i=0; i < 3; ++i)
//		{
//			array = new int[len];
//			memcpy(array, data, len);
//
//			cout << "------------------ " << len/1024 << "K --------------------" << endl << flush;
//			Clock c;
//			bubble_sort(array, len);
//			c.ok();
//			len = len*10;
//			delete []array;
//		}
//		cout << "------------------end--------------------" << endl << flush;
//	}
//
////	if(false)
//	{
//		int * array = NULL;
//		int len = 1024;
//
//		for (int i=0; i < 3; ++i)
//		{
//			array = new int[len];
//			memcpy(array, data, len);
//
//			cout << "------------------ " << len/1024 << "K --------------------" << endl << flush;
//			Clock c;
//			selection_sort(array, len);
//			c.ok();
//			len = len*10;
//			delete []array;
//		}
//		cout << "------------------end--------------------" << endl << flush;
//	}
//
////	if(false)
//	{
//		int * array = NULL;
//		int len = 1024;
//
//		for (int i=0; i < 3; ++i)
//		{
//			array = new int[len];
//			memcpy(array, data, len);
//
//			cout << "------------------ " << len/1024 << "K --------------------" << endl << flush;
//			Clock c;
//			insertion_sort(array, len);
//			c.ok();
//			//display2(array,len);
//			len = len*10;
//			delete []array;
//		}
//		cout << "------------------end--------------------" << endl << flush;
//	}
//#endif
//#if 0
////	if(false)
//	{
//		int * array = NULL;
//		int len = 10;
//
////		for (int i=0; i < 6; ++i)
//		{
//			array = new int[len];
//			memcpy(array, data, len*sizeof(int));
//			cout << "------------------ " << len/1024 << "K --------------------" << endl << flush;
//			Clock c;
//			MergeSort(array, 0, len-1);
//			c.ok();
//			display(array,len);
//			len = len*10;
//			delete []array;
//		}
//		cout << "------------------end--------------------" << endl << flush;
//	}
//#else
//	{
//		int * array = NULL;
//		int len = 1024;
//
//		for (int i=0; i < 6; ++i)
//		{
//			array = new int[len];
//			memcpy(array, data, len*sizeof(int));
//			cout << "------------------ " << len/1024 << "K --------------------" << endl << flush;
//			Clock c;
//			quickSort(array, 0, len-1);
//			c.ok();
//			//display(array,len);
//			len = len*10;
//			delete []array;
//		}
//		cout << "------------------end--------------------" << endl << flush;
//	}
//#endif
//
//
//	{
//		int * array = NULL;
//		int len = 1024;
//
//		for (int i=0; i < 6; ++i)
//		{
//			array = new int[len];
//			memcpy(array, data, len*sizeof(int));
//			cout << "------------------ " << len/1024 << "K --------------------" << endl << flush;
//			Clock c;
//			heap_sort_asc(array, len);
//			c.ok();
//			//display2(array,len);
//			len = len*10;
//			delete []array;
//		}
//		cout << "------------------end--------------------" << endl << flush;
//	}
//}

#if 0
int ViolentMatch(char* s, int sLen, char* p, int pLen)
{
    int i = 0;
    int j = 0;
    while (i < sLen && j < pLen)
    {
        if (s[i] == p[j])
        {
            //①如果当前字符匹配成功（即S[i] == P[j]），则i++，j++
            i++;
            j++;
        }
        else
        {
            //②如果失配（即S[i]! = P[j]），令i = i - (j - 1)，j = 0
            i = i - j + 1;
            j = 0;
        }
    }
    //匹配成功，返回模式串p在文本串s中的位置，否则返回-1
    if (j == pLen)
        return i - j;
    else
        return -1;
}

void GetNext(char* p,int next[])
{
    int pLen = strlen(p);
    next[0] = -1;
    int k = -1;
    int j = 0;
    while (j < pLen - 1)
    {
        //p[k]表示前缀，p[j]表示后缀
        if (k == -1 || p[j] == p[k])
        {
            ++k;
            ++j;
            next[j] = k;
        }
        else
        {
            k = next[k];
        }
    }
}

//优化过后的next 数组求法
void GetNextval(char* p, int * next)
{
    int pLen = strlen(p);
    next[0] = -1;
    int k = -1;
    int j = 0;
    while (j < pLen - 1)
    {
        //p[k]表示前缀，p[j]表示后缀
        if (k == -1 || p[j] == p[k])
        {
            ++j;
            ++k;
            //较之前next数组求法，改动在下面4行
            if (p[j] != p[k])
                next[j] = k;   //之前只有这一行
            else
                //因为不能出现p[j] = p[ next[j ]]，所以当出现时需要继续递归，k = next[k] = next[next[k]]
                next[j] = next[k];
        }
        else
        {
            k = next[k];
        }
    }
}

int KmpSearch(char* s, int sLen, char* p, int pLen, int * next)
{
    int i = 0;
    int j = 0;

    while (i < sLen && j < pLen)
    {
        //①如果j = -1，或者当前字符匹配成功（即S[i] == P[j]），都令i++，j++
        if (j == -1 || s[i] == p[j])
        {
            i++;
            j++;
        }
        else
        {
            //②如果j != -1，且当前字符匹配失败（即S[i] != P[j]），则令 i 不变，j = next[j]
            //next[j]即为j所对应的next值
            j = next[j];
        }
    }
    if (j == pLen)
        return i - j;
    else
        return -1;
}

int KMPSearch(char* s, int sLen, char* p, int pLen)
{
	int * next = new int[pLen];
	int ret = -1;

	for(int i=0;i<pLen; i++)
	{
		cout << p[i]<< "\t";
	}
	cout << endl;

	GetNext(p, next);
	for(int i=0;i<pLen; i++)
	{
		cout << next[i] << "\t";
	}
	cout << endl;

	GetNextval(p, next);
	for(int i=0;i<pLen; i++)
	{
		cout << next[i] << "\t";
	}
	cout << endl;

	ret = KmpSearch(s, sLen, p, pLen, next);
	delete [] next;

	return ret;
}

#endif

extern "C" void reomve(const char * path);
void reomve(const char * path)
{
    char filename[] = "rm -rf ./tmp/*";
    cout << "The file to delete:" << filename << endl;
    cout << system(filename);
}

int main()
{
	reomve("ddd");

#if 0
	char * S = "BBC ABCDAB ABCDABCDABDE***A****";
//	char * P = "***A****";
	char * P = "ABCDABDABACD";
	char * P1 = "ABCDABDABACDAAA";
	char * P2 = "ABCDABDABACDAA";
	char * P3 = "ABCDABDABACDBB";

	cout << KMPSearch(S, strlen(S), P, strlen(P)) << endl;

	unsigned int len = 1024*1024;
	for (int i= 0; i<4; i++)
	{
		char * pData = new char[len];
		srand((unsigned)time(NULL));
		for(int i = 0; i < len;i++ )
			pData[i] = 'A' + rand()%26;

		displayChars(pData, len);

		memcpy(&pData[len]-strlen(P), P, strlen(P));

		cout << "------------------ " << (len)/1024/1024 << "M --------------------" << endl << flush;

		Clock c;

		cout << ViolentMatch(pData, len, P, strlen(P)) << endl;
		cout << ViolentMatch(pData, len, P1, strlen(P1)) << endl;
		cout << ViolentMatch(pData, len, P2, strlen(P2)) << endl;
		cout << ViolentMatch(pData, len, P3, strlen(P3)) << endl;

		c.ok();

		//KMP
		int * next = new int[strlen(P)];
		GetNextval(P, next);
		int * next1 = new int[strlen(P1)];
		GetNextval(P1, next1);
		int * next2 = new int[strlen(P2)];
		GetNextval(P2, next2);
		int * next3 = new int[strlen(P3)];
		GetNextval(P3, next3);

		Clock c1;

		cout << KmpSearch(pData, len, P, strlen(P), next) << endl;
		cout << KmpSearch(pData, len, P1, strlen(P1), next1) << endl;
		cout << KmpSearch(pData, len, P2, strlen(P2), next2) << endl;
		cout << KmpSearch(pData, len, P3, strlen(P3), next3) << endl;

		c1.ok();

		delete [] next;
		delete [] next1;
		delete [] next2;
		delete [] next3;
		cout << "------------------end--------------------" << endl << flush;
		len *= 10;
		delete [] pData;
	}
#endif


#if 0
	unsigned int len = 1024*64;
	char buffer[len];
	fstream out;
	out.open("out.txt",ios::in);
	cout<<"com.txt"<<" 的内容如下:"<<endl;
	while(!out.eof())
	{
	   out.getline(buffer,len,'\n');//getline(char *,int,char) 表示该行字符达到256个或遇到换行就结束
	   cout<<buffer<<endl;
	   sleep(1);
	}
	out.close();
	cin.get();//cin.get() 是用来读取回车键的,如果没这一行，输出的结果一闪就消失了
#endif

#if 0
#define LEN_M 1024*1024
	ofstream ifile("out.txt", ios::app);
	char c;
	if (ifile.is_open())
	{
		srand((unsigned)time(NULL));
		for(int i = 0; i < 1024*LEN_M;i++ )
		{
			c = 'A' + rand()%26;
			ifile << c;
		}
		ifile.close();
	}
#endif

//	cout << sizeof(int) << endl;
//	cout << sizeof(long) << endl;
//	cout << sizeof(long long) << endl;
//
//	unsigned long long len = 1024*1024*1024;
//	unsigned char * pData = new unsigned char[len];
//
//	srand((unsigned)time(NULL));
//	for(int i = 0; i < len;i++ )
//		pData[i] = rand()/256;
//
//	{
//		int cp_len = 1024;
//		for (int i=0; i < 3; ++i)
//		{
//			unsigned char * pBuf = new unsigned char[cp_len];
//			cout << "------------------ " << (cp_len)/1024 << "K --------------------" << endl << flush;
//			Clock c;
//			for (int j=0; j<cp_len; ++j)
//			{
//				pBuf[j] = pData[j];
//			}
//			c.ok();
//			cout << "------------------end--------------------" << endl << flush;
//			cp_len *= 1024;
//			delete []pBuf;
//		}
//	}
//	test_sort();

//	for (int i=0;i<4;++i)
//	{
//		cout << (2*i+1) << " ";
//	}
//	cout << endl;
//
//	for (int i=0;i<4;++i)
//	{
//		cout << (2*i+2) << " ";
//	}
//	cout << endl;
//
//	for (int i=0;i<8;++i)
//	{
//		cout << floor((i+1)/2) << " ";
//	}
//	cout << endl;


//#error "ddd"
//	float i = 1.1;
//	string i = "sss";
//	bool i = true;
//	switch(i)
//	{
//		case true:
//		{
//			cout << "100" << endl;
//			break;
//		}
//		default:
//			break;
//	}


//	int ii = 2;
//	int jj = 3;
//	AAA a(ii);
//	a.change(jj);

//	int i = 10;
//	int j = 11;
//	int & a = i;
//
//	cout << "a = " << a << endl;
//	cout << "i = " << i << endl;
//	a = j;//注意，这里不是被使用j的别名，是i的值被赋值成j.
//	cout << "a = " << a << endl;
//	cout << "i = " << i << endl;


//	String str1();
//	String str2(1);
//	String str3("11111");
//	String str4(true);
//    typedef void(*Fun)(void);
//
//    GrandChild gc;
//    Fun pFun;
//
//    int** pVtab = (int**)&gc;
//
//    cout << "[0] GrandChild::_vptr->" << endl;
//    for (int i=0; (Fun)pVtab[0][i]!=NULL; i++){
//                pFun = (Fun)pVtab[0][i];
//                cout << "    ["<<i<<"] ";
//                pFun();
//    }
//    cout << "[1] Parent.iparent = " << (int)pVtab[1] << endl;
//    cout << "[2] Child.ichild = " << (int)pVtab[2] << endl;
//    cout << "[3] GrandChild.igrandchild = " << (int)pVtab[3] << endl;

//    B b;
//    C c;

//	B temp = Play(4);
//
//
//    cout << "***********line***************" << endl;
//    B b = 5;
//    cout << "***********line***************" << endl;
//    B b2 = (6,6);
//    cout << "***********line***************" << endl;
//    int i = 7;
//    B b3 = B(i,i);
//    B b4 = b3;
//    B b5 = b3;
//    B b6 = b3;

//	A * pa = NULL;
//	pa->func();//成功
//	pa->func2();
//	pa->static_func();//成功
//	pa->virtual_func();//fault, core dumped
//	cout << pa->static_a <<endl;//成功
//	cout << pa->a <<endl;//fault, core dumped

//	cout << sizeof(Base) <<endl;
//	cout << sizeof(Derived) << endl;
//	Derived d;
//	Base *pb = &d;
//	Derived *pd = &d;
//	// Good : behavior depends solely on type of the object
//	pb->f(3.14f);   // Derived::f(float) 3.14
//	pd->f(3.14f);   // Derived::f(float) 3.14
//
//	// Bad : behavior depends on type of the pointer
//	pb->g(3.14f);   // Base::g(float)  3.14
//	pd->g(3.14f);   // Derived::g(int) 3
//
//	// Bad : behavior depends on type of the pointer
//	pb->h(3.14f);   // Base::h(float) 3.14
//	pd->h(3.14f);   // Derived::h(float) 3.14

//	Bar bar; // Bar::foo must be initialized here
//	if (bar.str )
//	{
//	  cout << "Print the content !" << endl;
//	}

	/*008*/
//	A a;

	/*007*/
//	Cout cout1;
//	Endl endl1;
//	cout1 << "hello" << " word !!!";
//	cout1 << endl1;
//	cout1 << "hello" << endl1;

	/*006*/
//	std::map<int, int> arg;
//	arg[10] = 20;
//	cout << arg.size() <<endl;
//	auto iter = arg.find(10);
//	if (iter != arg.end())
//	{
//		arg.erase(iter);
//	}
//	cout << arg.size() <<endl;

	/*005*/
//	B b;
//	b.test();

	/*004*/
//	A<int, 2> a(2);
//	cout << a.getInputValue() <<endl;
//	cout << a.getInputValue2()<<endl;


//	/*003*/
//	A * pa = new A();
//	printf("%p\n", (int *)pa);//pa对象指针
//	printf("%p\n", (int *)(*(int *)pa));//A虚函数指针
//	printf("%p\n", (int *)(*((int *)(*(int *)pa))));//A虚函数指针值
//	pFunc pfunc = (pFunc)(*((int *)(*(int *)pa)));
//	pfunc(1);
//
//	A * pa2 = new A();
//	printf("%p\n", (int *)pa2);//pa对象指针
//	printf("%p\n", (int *)(*(int *)pa2));//A虚函数指针,与上面地址相同
//	printf("%p\n", (int *)(*((int *)(*(int *)pa2))));//A虚函数指针值，与上面地址相同
//	pFunc pfunc2 = (pFunc)(*((int *)(*(int *)pa2)));
//	pfunc2(1);
//
////	pFunc pfunc3 = (pFunc)(*((int *)(*(int *)pa2)+1));//由于virtual是个链表，这样偏移不正确
////	pfunc3(1);
//
//	A * pb = new B();
//	printf("%p\n", (int *)pb);//pa对象指针
//	printf("%p\n", (int *)(*(int *)pb));//A虚函数指针
//	printf("%p\n", (int *)(*((int *)(*(int *)pb))));//A虚函数指针值
//	pFunc pfuncb = (pFunc)(*((int *)(*(int *)pb)));
//	pfuncb(1);

//	/*002*/
//	A * a = new B();
//	delete a;
//
//	A1 * a1 = new B1();
//	delete a1;

//	A a;
//	a.sety();
//	a.print();
//	int *p=(int *)&a;//对象a的内存模型里面，只有非静态数据成员，所以是合理的。
//	*p=6;
//	a.print();
	return 1;
}
