//Critter Farm
//Demonstrates object containment

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Critter//类的定义
{
public:
    Critter(const string& name = "");
    string GetName() const;      
private:
    string m_Name;//使用对象数据成员
};

Critter::Critter(const string& name)://类的构造
    m_Name(name)
{}

inline string Critter::GetName() const //构造函数
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
    vector<Critter> m_Critters;//容器成员函数
};

Farm::Farm(int spaces)//调用farm的构造函数
{
    m_Critters.reserve(spaces);
}
//
void Farm::Add(const Critter& aCritter)//成员函数，接受指向critter对象的常量引用
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
    Farm myFarm(3);//新的Farm对象
    
    cout << "\nAdding three critters to the farm.\n";
    myFarm.Add(Critter("Moe"));
    myFarm.Add(Critter("Larry"));
    myFarm.Add(Critter("Curly"));

    cout << "\nCalling Roll...\n";
    myFarm.RollCall();
       
    return 0;
}
