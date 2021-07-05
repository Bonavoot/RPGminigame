#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;
int health = 100;
int hit = 20;
int club;
string attack;
bool gameOver = true;
int smite;
int heal;
int YourHealth = 100;

int main()
{
    string attack;
    string name;
    cout << "Greetings traveler. What is your name? " << '\n';
    cin >> name;
    YourHealth = 100;
    health = 100;
    hit = 20;
    smite = 35;
    club = 25;
    heal = 20;
    cout << name << ", the enemy would like to fight! ";

    while (gameOver == true)
    {
        YourHealth;
        health;
        smite;
        heal = 20;

        cout << "Type 'Smite, club, heal, or defend' to fight back!" << '\n';
        cin >> attack;

        if (attack == "smite")
        {
            health = health - smite;
            YourHealth = YourHealth - 20;
            cout << "You inflicted " << smite << " damage!" << '\n';
            cout << "The enemy strikes back with rage and inflicts 20 damage!" << '\n';
            

        }

        if (attack == "club")
        {
            YourHealth = YourHealth - 50;
            health = health - club;
            cout << "You inflicted " << club << " damage!" << '\n';
            cout << "The enemy strikes back with fury and inflicts 50 damage!" << '\n';    
            
        }

        if (attack == "heal")

        {
            YourHealth = YourHealth - 15;
            YourHealth = YourHealth + heal;
            cout << "You heal " << heal << '\n';
            cout << "The enemy strikes back with vengence and inflicts 15 damage!" << '\n';
            
        }

        if (attack == "defend")
        {
            cout << "The enemy unleashes a furious blow, but you block all damage!" << '\n';
           
        }
        if (YourHealth && health > 0)
        {
            cout << "The enemys health is now " << health << '\n';
            cout << "Your health is now " << YourHealth << '\n';
            
        }
        
        if (YourHealth <= 0 && health > 0)
        {
            cout << "You lose, pussy! Good luck next time, idiot!";
            gameOver = false;
        }
        
        if (YourHealth <= 0 && health <= 0)
        {
            cout << "You fools! It's a draw! Mwehehehe!";
            gameOver = false;
        }
      
        if (YourHealth > 0 && health <= 0)
        {
            
            cout << "Ya win ya bastard! Great job!" << '\n';
            gameOver = false;
        }
        
       
              
    }
}

    