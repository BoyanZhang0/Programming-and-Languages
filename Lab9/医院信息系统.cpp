#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//ҽ���ṹ��
struct doctors {
	string doctor_name;//ҽ������
};
//���ҽṹ��
struct course {
	string course_name;//��������
	doctors staff[20];//����ҽ����
	int staff_number = 0;//����ҽ����Ŀ
};  
//ҽԺ�ṹ��
class  hosptial {
public:
	course course_list[100];//ҽԺ���ܿ�����Ŀ����
	int m_size = 0;//ҽԺ���ܿ�����Ŀ
};



void showMeau() {
	cout << "��ӭ�������տ�ҽԺ��Ϣ����ϵͳ" << endl;
	cout << "******************************" << endl;
	cout << "******1.���ҽԺ��Ϣ**********" << endl;
	cout << "******2.��ʾҽԺ��Ϣ**********" << endl;
	cout << "******3.����ҽԺ������Ϣ******" << endl;
	cout << "******4.����ҽԺҽ����Ϣ******" << endl;
	cout << "******5.ɾ��ҽԺҽ����Ϣ******" << endl;
	cout << "******6.�޸�ҽԺҽ����Ϣ******" << endl;
	cout << "******7.���ҽԺ��Ϣ**********" << endl;
	cout << "******0.�˳�ϵͳ**************" << endl;
	cout << "******************************" << endl;
}
void Add_infor(hosptial *hos) {
	if (hos->m_size == 100) {
		cout << "ҽԺ��Ϣϵͳ�������޷����!" << endl;
		return;
	}
	else {//��Ӿ������Ϣ
		cout << "��ѡ������Ҫ��ӵ���Ϣ��" << endl;
		cout << "1.��ӿ���" << endl;
		cout << "2.���ҽ��" << endl;
		int a{};
		cin >> a;
		switch (a) {
		case 1: {cout << "������������֣�" << endl;
		      	string course_name;
				cin >> course_name;
				if (hos->course_list[hos->m_size].course_name == course_name) {
					cout << "�ÿ����Ѵ���,��������ӣ�";
					system("pause");
					break;
				}
				else {
					hos->course_list[hos->m_size].course_name = course_name;
					hos->m_size++;
					cout << "��ӳɹ���" << endl;
					system("pause");
					system("cls");
				}
				break;
		}
		case 2: {
			cout << "������Ҫ��ӵ�ҽ�����ڿ��ң�" << endl;
			string course_name;
			cin >> course_name;
			for (int i = 0;i <= hos->m_size;i++) {
				if (course_name == hos->course_list[i].course_name) {
					cout << "��������ӵ�ҽ����";
					string doctor_name;
					cin >> doctor_name;
					for(int h=0;h<=hos->course_list[i].staff_number;i++)
						if (doctor_name == hos->course_list[i].staff[h].doctor_name) {
							cout << "��ҽ���ڸÿ������Ѵ��ڣ�" << endl;
							cout << "��������ӣ�" << endl;
							break;
					    }
						else {
							hos->course_list[i].staff[hos->course_list[i].staff_number].doctor_name = doctor_name;
							++hos->course_list[i].staff_number;
							cout << "��ӳɹ���" << endl;
							system("pause");
							system("cls");
							break;
						}
				}
			}
		};
		}
		
	}
};//�����Ϣ������
void Show_person(hosptial *hos) {
	cout << "�������տ�ҽԺĿǰ�����п�����ҽ������Ϣ��" << endl;
	for (int n = 1;n <=hos->m_size;n++) {
		cout << "���ң�";
		cout << hos->course_list[n-1].course_name << endl;
		for (int b = 1; b <= hos->course_list[n-1].staff_number;b++) {
			cout << "ҽ����" << hos->course_list[n-1].staff[b-1].doctor_name << endl;
		}
	}
	system("pause");
	system("cls");
};//��ʾ��Ϣ������
void is_course(hosptial* hos) {
	cout << "����������Ҫ���ҵĿ��ң�" << endl;
	string m;
	cin >> m;
	for (int i = 1;i <=hos->m_size;i++) {
		if (m == hos->course_list[i-1].course_name) {
			cout << "�ѽ���������Ҫ���ҵĿ���" << endl;
			cout << "�����Ǹÿ��ҵ�ҽ����Ϣ��" << endl;
			for (int h = 1;h <=hos->course_list[i-1].staff_number;h++)
			{
				cout << h<< "��ҽ��" << endl;
				cout << hos->course_list[i-1].staff[h-1].doctor_name << endl;
			}
		}
	}
	system("pause");
	system("cls");
};//�������Ҳ��Һ�����
void isExist_doctor(hosptial* hos) {
	cout << "����������Ҫ���ҵ�ҽ����" << endl;
	string n;
	cin >> n;
	for (int i = 0;i <= hos->m_size;i++) {
		for (int h = 0;h <= hos->course_list[i].staff_number;h++) {
			if (n == hos->course_list[i].staff[h].doctor_name) {
				cout << "�����������ҵ�ҽ����Ϣ��" << endl;
				cout << hos->course_list[i].course_name << "  " << hos->course_list[i].staff[h].doctor_name << endl;
			}
		}
	}
	system("pause");
	system("cls");
};//����ҽ�����Һ�����
void deleteinformation(hosptial* hos) {
	cout << "����������Ҫɾ����ҽ����Ϣ��";
	cout << "��ҽ�����ڵĿ��ң�";
	string course_name;
	cin >> course_name;
	for (int i = 1;i <= hos->m_size;i++) {
		if (course_name == hos->course_list[i-1].course_name) {//�ҵ���Ӧ�Ŀ���
			cout << "����������Ҫɾ����ҽ�������֣�";
			string doctor_name;
			cin >> doctor_name;
			for (int h = 1;h <= hos->course_list[i-1].staff_number; h++) {
				if (hos->course_list[i - 1].staff[h - 1].doctor_name == doctor_name) {
					hos->course_list[i - 1].staff[h - 1].doctor_name = hos->course_list[i - 1].staff[h].doctor_name;//�ñ�ɾ��λ�õ��˱���һλ����
					hos->course_list[i - 1].staff_number--;
					break;
				}
			}
			cout << "ɾ���ɹ���" << endl;
			system("pause");
			system("cls");
			break;
		}
		else {
			cout << "�ÿ��Ҳ����ڸ�ҽ����" << endl;
		}
	};
	system("pause");
	system("cls");
}//ɾ��������
void amendinformation(hosptial* hos) {
	cout << "����������Ҫ�޸ĵĿ���:" << endl;
	string m;
	cin >> m;
	for (int i = 0;i <=hos->m_size;i++) {
		if (m == hos->course_list[i].course_name) {
			cout << "�ѽ����������޸ĵĿ���" << endl;
			cout << "�����Ǹÿ��ҵ�ҽ����Ϣ��" << endl;
			for (int h = 0;h < hos->course_list[i].staff_number;h++)
			{
				cout << h + 1 << "��ҽ��" << endl;
				cout << hos->course_list[i].staff[h].doctor_name << endl;
			}
			cout << "��������Ҫ�޸ĵ�ҽ����ţ�";
			int a{};
			cin >> a;
			cout << "�������޸ĺ�����֣�";
			string name_2;
			cin >> name_2;
			hos->course_list[i].staff[a-1].doctor_name = name_2;
			system("pause");
			system("cls");
			break;
		}
	}	
};//�޸ĺ�����
void delete_all(hosptial* hos) {
	hos->m_size = 0;
	cout << "ҽԺ��Ϣȫ��ɾ���ɹ���" << endl;
};//ɾ�����к�����
int main(){
	//����ҽԺ����
	hosptial hos{};
	//��ʼ��ҽԺ��ǰ��Ա����
	showMeau();
	int a{};
	std::cin >> a;
	while (a < 8) {
		switch (a) {
		case(1):Add_infor(&hos);//���õ�ַ���ݣ���������ʵ��
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
			cout << "��ӭ�´�ʹ��" << endl;
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