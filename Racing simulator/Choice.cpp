#include "Choice.h"
#include <iostream>
#include <string>

using namespace std;

void Choice(int a, int d, int b, int u,string ptr, string temp, int j)
{
	do {
		do {
			if (a == 1){

				switch (d) {
				case 0:cout << "";																																			break;
				case 1:cout << "�������-��������� ������� ����������������! "								<< endl; u++; temp = "�������-��������� ";	ptr = ptr + temp;  	break;
				case 2:cout << ">>> ������� ���������������� ������������ ��� ������������� ��������! <<<"	<< endl; 														break;
				case 3:cout << "������� ������� ���������������!"											<< endl; u++; temp = "������� ";			ptr = ptr + temp; 	break;
				case 4:cout << "������� ������� ���������������!"											<< endl; u++; temp = "������� ";			ptr = ptr + temp; 	break;
				case 5:cout << ">>> ������� ���������������� ������������ ��� ������������� ��������! <<<"	<< endl;														break;
				case 6:cout << "�������-��������� ������� ���������������!"									<< endl; u++; temp = "�������-��������� ";	ptr = ptr + temp; 	break;
				case 7:cout << ">>> ������� ���������������� ������������ ��� ������������� ��������! <<<"	<< endl;														break;
				default:cout << "���������� ��� ����� ���������� �� ����������!"							<< endl;														break;
				}
			}
			if (a == 2){

				switch (d) {
				case 0:cout << "";																																			break;
				case 1:cout << ">>> ������� ���������������� ������������ ��� ������������� ��������! <<<"	<< endl;														break;
				case 2:cout << "����� ������� ����������������!"											<< endl; u++; temp = "����� ";				ptr = ptr + temp; 	break;
				case 3:cout << ">>> ������� ���������������� ������������ ��� ������������� ��������! <<<"	<< endl; 														break;
				case 4:cout << ">>> ������� ���������������� ������������ ��� ������������� ��������! <<<"	<< endl; 														break;
				case 5:cout << "��� ������� ���������������!"												<< endl; u++; temp = "��� ";				ptr = ptr + temp; 	break;
				case 6:cout << ">>> ������� ���������������� ������������ ��� ������������� ��������! <<<"	<< endl; 														break;
				case 7:cout << "����-������ ������� ���������������!"										<< endl; u++; temp = "����-������ ";		ptr = ptr + temp; 	break;
				default:cout << "���������� ��� ����� ���������� �� ����������!"							<< endl; 														break;
				}
			}
			if (a == 3){

				switch (d) {
				case 0:cout << "";																																			break;
				case 1:cout << "�������-��������� ������� ����������������! "								<< endl; u++; temp = "�������-��������� ";  ptr = ptr + temp;	break;
				case 2:cout << "����� ������� ����������������!"											<< endl; u++; temp = "����� ";				ptr = ptr + temp; 	break;
				case 3:cout << "������� ������� ���������������!"											<< endl; u++; temp = "������� ";			ptr = ptr + temp; 	break;
				case 4:cout << "������� ������� ���������������!"											<< endl; u++; temp = "������� ";			ptr = ptr + temp; 	break;
				case 5:cout << "��� ������� ���������������!"												<< endl; u++; temp = "��� ";				ptr = ptr + temp; 	break;
				case 6:cout << "�������-��������� ������� ���������������!"									<< endl; u++; temp = "�������-��������� ";  ptr = ptr + temp; 	break;
				case 7:cout << "����-������ ������� ���������������!"										<< endl; u++; temp = "����-������ ";		ptr = ptr + temp; 	break;
				default:cout << "���������� ��� ����� ���������� �� ����������!"							<< endl;														break;
				}
			}

			switch (a) {

				case 1: cout << "����� ��� ��������� ����������. ����������: ";				cout << b << endl; break;
				case 2: cout << "����� ��� ���������� ����������. ����������: ";			cout << b << endl; break;
				case 3: cout << "����� ��� ��������� � ���������� ����������.����������: "; cout << b << endl; break;
			}

			cout << "������������������ ������������ ��������: " << ptr << endl;
			cout << "1. �������-���������"	<< endl;
			cout << "2. �����"			<< endl;
			cout << "3. �������"		<< endl;
			cout << "4. �������"		<< endl;
			cout << "5. ���"			<< endl;
			cout << "6. �������-���������"	<< endl;
			cout << "7. ����-������"		<< endl;
			cout << "0. ��������� �����������" << endl;
			cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: "; cin >> d;
			std::system("cls");

		} while (d != 0);

		if (u >= 2)

			continue; cout << ">>> ������ ���� ���������������� ���� �� 2 ������������ �������� <<<" << endl;

	} while (u < 2);
}