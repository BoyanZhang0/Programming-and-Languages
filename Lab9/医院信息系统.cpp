#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//医生结构体
struct doctors {
	string doctor_name;//医生名字
};
//科室结构体
struct course {
	string course_name;//科室名字
	doctors staff[20];//科室医生表
	int staff_number = 0;//科室医生数目
};  
//医院结构体
class  hosptial {
public:
	course course_list[100];//医院的总科室数目数组
	int m_size = 0;//医院的总科室数目
};



void showMeau() {
	cout << "欢迎进入向日葵医院信息服务系统" << endl;
	cout << "******************************" << endl;
	cout << "******1.添加医院信息**********" << endl;
	cout << "******2.显示医院信息**********" << endl;
	cout << "******3.查找医院科室信息******" << endl;
	cout << "******4.查找医院医生信息******" << endl;
	cout << "******5.删除医院医生信息******" << endl;
	cout << "******6.修改医院医生信息******" << endl;
	cout << "******7.清空医院信息**********" << endl;
	cout << "******0.退出系统**************" << endl;
	cout << "******************************" << endl;
}
void Add_infor(hosptial *hos) {
	if (hos->m_size == 100) {
		cout << "医院信息系统已满，无法添加!" << endl;
		return;
	}
	else {//添加具体的信息
		cout << "请选择你想要添加的信息：" << endl;
		cout << "1.添加科室" << endl;
		cout << "2.添加医生" << endl;
		int a{};
		cin >> a;
		switch (a) {
		case 1: {cout << "请输入科室名字：" << endl;
		      	string course_name;
				cin >> course_name;
				if (hos->course_list[hos->m_size].course_name == course_name) {
					cout << "该科室已存在,请重新添加！";
					system("pause");
					break;
				}
				else {
					hos->course_list[hos->m_size].course_name = course_name;
					hos->m_size++;
					cout << "添加成功！" << endl;
					system("pause");
					system("cls");
				}
				break;
		}
		case 2: {
			cout << "请输入要添加的医生所在科室：" << endl;
			string course_name;
			cin >> course_name;
			for (int i = 0;i <= hos->m_size;i++) {
				if (course_name == hos->course_list[i].course_name) {
					cout << "请输入添加的医生：";
					string doctor_name;
					cin >> doctor_name;
					for(int h=0;h<=hos->course_list[i].staff_number;i++)
						if (doctor_name == hos->course_list[i].staff[h].doctor_name) {
							cout << "该医生在该科室中已存在！" << endl;
							cout << "请重新添加！" << endl;
							break;
					    }
						else {
							hos->course_list[i].staff[hos->course_list[i].staff_number].doctor_name = doctor_name;
							++hos->course_list[i].staff_number;
							cout << "添加成功！" << endl;
							system("pause");
							system("cls");
							break;
						}
				}
			}
		};
		}
		
	}
};//添加信息函数；
void Show_person(hosptial *hos) {
	cout << "这是向日葵医院目前的所有科室与医生的信息：" << endl;
	for (int n = 1;n <=hos->m_size;n++) {
		cout << "科室：";
		cout << hos->course_list[n-1].course_name << endl;
		for (int b = 1; b <= hos->course_list[n-1].staff_number;b++) {
			cout << "医生：" << hos->course_list[n-1].staff[b-1].doctor_name << endl;
		}
	}
	system("pause");
	system("cls");
};//显示信息函数；
void is_course(hosptial* hos) {
	cout << "请输入您需要查找的科室：" << endl;
	string m;
	cin >> m;
	for (int i = 1;i <=hos->m_size;i++) {
		if (m == hos->course_list[i-1].course_name) {
			cout << "已进入你所需要查找的科室" << endl;
			cout << "以下是该科室的医生信息：" << endl;
			for (int h = 1;h <=hos->course_list[i-1].staff_number;h++)
			{
				cout << h<< "号医生" << endl;
				cout << hos->course_list[i-1].staff[h-1].doctor_name << endl;
			}
		}
	}
	system("pause");
	system("cls");
};//单个科室查找函数；
void isExist_doctor(hosptial* hos) {
	cout << "请输入你需要查找的医生：" << endl;
	string n;
	cin >> n;
	for (int i = 0;i <= hos->m_size;i++) {
		for (int h = 0;h <= hos->course_list[i].staff_number;h++) {
			if (n == hos->course_list[i].staff[h].doctor_name) {
				cout << "以下是您查找的医生信息：" << endl;
				cout << hos->course_list[i].course_name << "  " << hos->course_list[i].staff[h].doctor_name << endl;
			}
		}
	}
	system("pause");
	system("cls");
};//单个医生查找函数；
void deleteinformation(hosptial* hos) {
	cout << "请输入你想要删除的医生信息：";
	cout << "该医生所在的科室：";
	string course_name;
	cin >> course_name;
	for (int i = 1;i <= hos->m_size;i++) {
		if (course_name == hos->course_list[i-1].course_name) {//找到相应的科室
			cout << "请输入你想要删除的医生的名字：";
			string doctor_name;
			cin >> doctor_name;
			for (int h = 1;h <= hos->course_list[i-1].staff_number; h++) {
				if (hos->course_list[i - 1].staff[h - 1].doctor_name == doctor_name) {
					hos->course_list[i - 1].staff[h - 1].doctor_name = hos->course_list[i - 1].staff[h].doctor_name;//让被删除位置的人被后一位顶上
					hos->course_list[i - 1].staff_number--;
					break;
				}
			}
			cout << "删除成功！" << endl;
			system("pause");
			system("cls");
			break;
		}
		else {
			cout << "该科室不存在该医生！" << endl;
		}
	};
	system("pause");
	system("cls");
}//删除函数；
void amendinformation(hosptial* hos) {
	cout << "请输入你想要修改的科室:" << endl;
	string m;
	cin >> m;
	for (int i = 0;i <=hos->m_size;i++) {
		if (m == hos->course_list[i].course_name) {
			cout << "已进入你所想修改的科室" << endl;
			cout << "以下是该科室的医生信息：" << endl;
			for (int h = 0;h < hos->course_list[i].staff_number;h++)
			{
				cout << h + 1 << "号医生" << endl;
				cout << hos->course_list[i].staff[h].doctor_name << endl;
			}
			cout << "请输入你要修改的医生序号：";
			int a{};
			cin >> a;
			cout << "请输入修改后的名字：";
			string name_2;
			cin >> name_2;
			hos->course_list[i].staff[a-1].doctor_name = name_2;
			system("pause");
			system("cls");
			break;
		}
	}	
};//修改函数；
void delete_all(hosptial* hos) {
	hos->m_size = 0;
	cout << "医院信息全部删除成功！" << endl;
};//删除所有函数；
int main(){
	//创建医院变量
	hosptial hos{};
	//初始化医院当前人员个数
	showMeau();
	int a{};
	std::cin >> a;
	while (a < 8) {
		switch (a) {
		case(1):Add_infor(&hos);//利用地址传递，可以修饰实参
			break;
		case(2):Show_person(&hos);
			break;
		case(3):is_course(&hos);
			break;
		case(4):isExist_doctor(&hos);
			break;
		case(5):deleteinformation(&hos);
			break;
		case(6):amendinformation(&hos);
			break;
		case(7):delete_all(&hos);
			break;
		case(0):
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
		showMeau();
		std::cin >> a;
	}
	while (a >= 8) {
		showMeau();
		int a{};
		std::cin >> a;
	}
	system("pause");
	return 0;
}