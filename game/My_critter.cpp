#include<iostream>
using namespace std;
class Critter  //��Ķ���
{

public:
	int m_Hunger;//�������ݳ�Ա
	void Greet();//������Ա����

};
void Critter::Greet()//��Ա��������
{
	cout <<"Hi . I'm a critter.My hunger level is "<<m_Hunger <<".\n";
}

int main()
{
	Critter crit1;//�����ʵ����
	Critter crit2;

	crit1.m_Hunger = 9;//���ݳ�Ա����
	cout << "crit1's hunger level is "<< crit1.m_Hunger<<".\n";
	crit2.m_Hunger = 3;
	cout << "crit1's hunger level is "<< crit2.m_Hunger<<".\n";

	crit1.Greet();//��Ա��������
	crit2.Greet();
}