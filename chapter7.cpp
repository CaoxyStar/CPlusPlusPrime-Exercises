#include<iostream>
#include<string>
using namespace std;


struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

const int seasons = 4;
struct cost
{
	double expenses[seasons];
};


const int sien = 30;
struct student {
	char fullname[sien];
	char hobby[sien];
	int ooplevel;
};



void p7_1();
void p7_2_1(double* grade, int* number);
void p7_2_2(const double* grade, const int number);
void p7_2_3(const double* grade, const int number);
void printbox(box mbox);
void changebox(box* mbox);
void p7_3();
long double probalility(unsigned number, unsigned picks);
void p7_4();
int p7_5_1(int n);
void p7_5();
int fill_array(double arr[], int sizemax);
void show_array(double arr[], int size);
void reverse_array(double arr[], int size);
void p7_6();
double* p7_7_fill_array(double* begin, const double* end);
void p7_7_show_array(double* begin, double* end);
void p7_7_arr_value(double r, double* begin, double* end);
void p7_7();
void p7_8fill(double* pa, int size);
void p7_8fillstruct(struct cost* pa);
void p7_8show(double* pa, int size);
void p7_8showstruct(struct cost* pa);
void p7_8();
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);
void p7_9();



int main()
{
	p7_9();
	return 0;
}

void p7_1()
{
	double x = 0;
	double y = 0;
	double avg = 0;
	cout << "enter two numbers(0 to quit):\n";
	cin >> x >> y;
	while (x != 0 && y != 0)
	{
		avg = 2 * x * y / (x + y);
		cout << avg << endl;
		cout << "enter two numbers(0 to quit):\n";
		cin >> x >> y;
	}
	return;
}


void p7_2_1(double* grade, int* number)
{
	cout << "enter 10 grades(-1 to quit):" << endl;
	while ((*number) < 10)
	{
		double temp;
		cin >> temp;
		if (temp == -1)
		{
			break;
		}
		grade[*number] = temp;
		(*number)++;
	}
	for (int i = 0; i < (*number); i++)
		cout << grade[i] << endl;
}

void p7_2_2(const double* grade, const int number)
{
	cout << "the grade is:" << endl;
	for (int i = 0; i < number; i++)
		cout << grade[i] << " ";
	cout << endl;
}

void p7_2_3(const double* grade, const int number)
{
	double total = 0.0;
	for (int i = 0; i < number; i++)
		total += grade[i];
	cout << "the averge is : " << total / number << endl;
}

void p7_2()
{
	double grade[10];
	int number = 0;
	p7_2_1(grade, &number);
	p7_2_2(grade, number);
	p7_2_3(grade, number);
}


void printbox(box mbox)
{
	cout << "box maker: " << mbox.maker << endl;
	cout << "box height: " << mbox.height << endl;
	cout << "box width: " << mbox.width << endl;
	cout << "box length: " << mbox.length << endl;
	cout << "box volume: " << mbox.volume << endl;
}

void changebox(box* mbox)
{
	mbox->volume = mbox->height * mbox->length * mbox->width;
}

void p7_3()
{
	box mbox = { "curry",2,1,0.5,0 };
	printbox(mbox);
	changebox(&mbox);
	printbox(mbox);
}


long double probalility(unsigned number, unsigned picks)
{
	long double result = 1.0;
	long double n = 0;
	unsigned p;
	for (n = number, p = picks; p > 0; p--, n--)
	{
		result = result * n / p;
	}

	return result;
}

void p7_4()
{
	unsigned field1 = 0;
	unsigned field2 = 0;
	cout << "enter field1 and field2: ";
	cin >> field1 >> field2;
	unsigned picks1;
	unsigned picks2;
	cout << "enter picks1 and picks2: ";
	cin >> picks1 >> picks2;
	cout << "you have on chance in " << probalility(field1, picks1) * probalility(field2, picks2)
		<< " of winning.\n" << endl;
}


int p7_5_1(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}
	else
	{
		return n * p7_5_1(n - 1);
	}
}

void p7_5()
{
	int result = 0;
	int n = 0;
	cout << "enter the number (q to quit) : ";

	while (cin>>n)
	{
		result = p7_5_1(n);
		cout << n << "£¡=" << result << endl;
		cout << "enter the next number (q to quit) : ";
	}
}


int  fill_array(double arr[], int)
{
	double temp;
	int n = 0;
	cout << "enter " << n + 1 << " number : ";
	while (cin >> temp)
	{
		arr[n] = temp;
		n++;
		if (n == 10)
			break;
	}
	cout << "you have entered " << n << " numbers.\n";
	return n;
}

void show_array(double arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << "the " << i << " number : " << arr[i] << endl;
}

void reverse_array(double arr[], int size)
{
	for (int i = 0; i < (size / 2); i++)
	{
		double temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}
}

void p7_6()
{
	double arr[10];

	int size = fill_array(arr,10);
	show_array(arr, size);
	reverse_array(arr, size);
	show_array(arr, size);
}


double*  p7_7_fill_array(double * begin,const double* end)
{
	double temp;
	int n = 0;
	double* ar_tmp;
	for (ar_tmp = begin; ar_tmp < end; ar_tmp++)
	{
		cout << "enter value#" << n + 1 << " : ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "bad input,terminal.\n";
			break;
		}
		else if (temp < 0)
			break;
		*ar_tmp = temp;
		n++;
	}
	return begin+n;
}

void p7_7_show_array(double* begin, double* end)
{
	double* arr_tmp;
	int i = 1;
	for (arr_tmp = begin; arr_tmp < end; arr_tmp++)
	{
		cout << "arr #" << i << " : " << *arr_tmp << endl;
		i++;
	}
}

void p7_7_arr_value(double r , double* begin, double* end)
{
	double* arr_tmp;
	for (arr_tmp = begin; arr_tmp < end; arr_tmp++)
	{
		(*arr_tmp) *= r;
	}
}

void p7_7()
{
	double arr[10];
	double* pt = p7_7_fill_array(arr, arr+10);
	p7_7_show_array(arr, pt);
	cout << "please enter revaluation : ";
	double factor;
	while (!(cin >> factor))
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "bad input , enter again : ";
	}
	p7_7_arr_value(factor, arr, pt);
	p7_7_show_array(arr, pt);
}


void p7_8fill(double* pa, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "enter " << i + 1 << " value : ";
		cin >> pa[i];
	}
}

void p7_8fillstruct(struct cost* pa)
{
	for (int i = 0; i < seasons; i++)
	{
		cout << "enter " << i + 1 << " value : ";
		cin >> pa->expenses[i];
	}
}

void p7_8show(double* pa,int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << " the " << i + 1 << " value is " << pa[i] << endl;
	}
}

void p7_8showstruct(struct cost* pa)
{
	for (int i = 0; i < seasons; i++)
	{
		cout << " the " << i + 1 << " value is " << pa->expenses[i] << endl;
	}
}

void p7_8()
{
	const char* Snames[seasons] = { "spring","summer","fall","winter" };
	cout << "situation a :\n";
	double pa[seasons];
	p7_8fill(pa, seasons);
	p7_8show(pa, seasons);
	cout << endl << "situation b:\n";
	cost* pt = new cost;
	p7_8fillstruct(pt);
	p7_8showstruct(pt);
}


int getinfo(student pa[], int n)
{
	int enter = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "enter the infomation of student #" << i + 1 <<  endl;
		cout << "enter fullname(blank line to quit): ";
		cin.getline(pa[i].fullname, sien);
		cout << "enter hobby: ";
		cin.getline(pa[i].hobby, sien);
		cout << "enter ooplevel: ";
		cin >> pa[i].ooplevel;
		while (cin.get() != '\n')
			continue;
		enter++;
	}
	return enter;
}

void display1(student st)
{
	cout << "fullname: " << st.fullname << endl;
	cout << "hobby: " << st.hobby << endl;
	cout << "ooplevel: " << st.ooplevel << endl;
}

void display2(const student* st)
{
	cout << "fullname: " << st->fullname << endl;
	cout << "hobby: " << st->hobby << endl;
	cout << "ooplevel: " << st->ooplevel << endl;
}

void display3(const student st[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "student #" << i + 1 << " : " << endl;
		cout << "fullname: " << st[i].fullname << endl;
		cout << "hobby: " << st[i].hobby << endl;
		cout << "ooplevel: " << st[i].ooplevel << endl;
	}
}

void p7_9()
{
	cout << "enter class_size: " << endl;
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;

	student* pt = new student[class_size];
	int entered = getinfo(pt, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(pt[i]);
		display2(&pt[i]);
	}
	cout << "*************************************" << endl;
	display3(pt, entered);
	delete pt;
	cout << "Done.\n";
}


