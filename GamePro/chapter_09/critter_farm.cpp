//Critter Farm
//Demonstrates object containment

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Critter//��Ķ���
{
public:
    Critter(const string& name = "");
    string GetName() const;      
private:
    string m_Name;//ʹ�ö������ݳ�Ա
};

Critter::Critter(const string& name)://��Ĺ���
    m_Name(name)
{}

inline string Critter::GetName() const //���캯��
{
    return m_Name;
}

class Farm
{
public:
    Farm(int spaces = 1); 
    void Add(const Critter& aCritter);
    void RollCall() const;
    
private:
    vector<Critter> m_Critters;//������Ա����
};

Farm::Farm(int spaces)//����farm�Ĺ��캯��
{
    m_Critters.reserve(spaces);
}
//
void Farm::Add(const Critter& aCritter)//��Ա����������ָ��critter����ĳ�������
{
    m_Critters.push_back(aCritter);
}

void Farm::RollCall() const
{
    for (vector<Critter>::const_iterator iter = m_Critters.begin(); 
         iter != m_Critters.end(); 
         ++iter)
	{
        cout << iter->GetName() << " here.\n";
	}
}

int main()
{
    Critter crit("Poochie");
    cout << "My critter's name is " << crit.GetName() << endl; 

    cout << "\nCreating critter farm.\n";
    Farm myFarm(3);//�µ�Farm����
    
    cout << "\nAdding three critters to the farm.\n";
    myFarm.Add(Critter("Moe"));
    myFarm.Add(Critter("Larry"));
    myFarm.Add(Critter("Curly"));

    cout << "\nCalling Roll...\n";
    myFarm.RollCall();
       
    return 0;
}
