//Critter Caretaker
//Simulates caring for a virtual pet

#include <iostream>

using namespace std;

class Critter   //��Ķ���
{
public:          
    Critter(int hunger = 0, int boredom = 0); 
    void Talk();
    void Eat(int food = 4);
    void Play(int fun = 4);

private:
    int m_Hunger;
    int m_Boredom;

    int GetMood() const;
    void PassTime(int time = 1);

};

Critter::Critter(int hunger, int boredom):   //��Ĺ��캯��
    m_Hunger(hunger),
    m_Boredom(boredom)
{}

inline int Critter::GetMood() const //GetMood ��Ա����
{
    return (m_Hunger + m_Boredom);
}

void Critter::PassTime(int time)//PassTime ��Ա����
{
    m_Hunger += time;
    m_Boredom += time;
}

void Critter::Talk()//Talk ��Ա����
{
    cout << "I'm a critter and I feel ";

    int mood = GetMood();
    if (mood > 15)
	{
        cout << "mad.\n";
	}
    else if (mood > 10)
	{
        cout << "frustrated.\n";
	}
    else if (mood > 5)
	{
        cout << "okay.\n";
	}
    else
	{
        cout << "happy.\n";
	}

    PassTime();
}

void Critter::Eat(int food) //Eat ��Ա����
{
    cout << "Brruppp.\n";

    m_Hunger -= food;
    if (m_Hunger < 0)
	{
        m_Hunger = 0;
	}

    PassTime();
}

void Critter::Play(int fun)//Play ��Ա����
{
    cout << "Wheee!\n";

    m_Boredom -= fun;
    if (m_Boredom < 0)
	{
        m_Boredom = 0;
	}

    PassTime();
}

int main() //
{
    Critter crit;

    int choice = 1;  //start the critter off talking
    while (choice != 0)
    {
        cout << "\nCritter Caretaker\n\n";
        cout << "0 - Quit\n";
        cout << "1 - Listen to your critter\n";
        cout << "2 - Feed your critter\n";
        cout << "3 - Play with your critter\n\n";

        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 0:	
            cout << "Good-bye.\n";
			break;
        case 1:	
            crit.Talk();
			break;
        case 2:	
            crit.Eat();
			break;
        case 3:	
            crit.Play();
			break;
        default:
            cout << "\nSorry, but " << choice << " isn't a valid choice.\n";
        }
    }

    return 0;
}

