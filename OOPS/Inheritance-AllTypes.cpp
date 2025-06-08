#include <iostream>
using namespace std;

// 1. Single Inheritance
class Character {
public:
    void spawn() {
        cout << "Character has entered the battlefield!" << endl;
    }
};

class Warrior : public Character {
public:
    void attack() {
        cout << "Warrior slashes with sword!" << endl;
    }
};

// -------------------------------------------------------------

// 2. Multiple Inheritance
class Mage {
public:
    void castSpell() {
        cout << "Mage casts a fireball!" << endl;
    }
};

class Archer {
public:
    void shootArrow() {
        cout << "Archer shoots an arrow!" << endl;
    }
};

class HybridFighter : public Mage, public Archer {
public:
    void hybridAttack() {
        cout << "Hybrid fighter uses both magic and arrows!" << endl;
    }
};

// -------------------------------------------------------------

// 3. Multilevel Inheritance
class Enemy {
public:
    void appear() {
        cout << "Enemy appears!" << endl;
    }
};

class Boss : public Enemy {
public:
    void bossIntro() {
        cout << "Boss says: 'You dare challenge me?!'" << endl;
    }
};

class FinalBoss : public Boss {
public:
    void ultimateMove() {
        cout << "FinalBoss unleashes Armageddon!" << endl;
    }
};

// -------------------------------------------------------------

// 4. Hierarchical Inheritance
class PowerUp {
public:
    void boost() {
        cout << "Power Up activated!" << endl;
    }
};

class HealthPotion : public PowerUp {
public:
    void heal() {
        cout << "Healed by 50 HP!" << endl;
    }
};

class ShieldPotion : public PowerUp {
public:
    void shield() {
        cout << "Gained temporary shield!" << endl;
    }
};

// -------------------------------------------------------------

// 5. Hybrid Inheritance
class Entity {
public:
    void status() {
        cout << "Entity exists in the world!" << endl;
    }
};

class Fighter : virtual public Entity {
public:
    void fight() {
        cout << "Fighting the enemy!" << endl;
    }
};

class Healer : virtual public Entity {
public:
    void healAlly() {
        cout << "Healing an ally!" << endl;
    }
};

class SpellKnight : public Fighter, public Healer {
public:
    void divineSmite() {
        cout << "SpellKnight uses Divine Smite!" << endl;
    }
};

// to test everything
int main() {
    Warrior w;
    w.spawn();
    w.attack();

    HybridFighter hf;
    hf.castSpell();
    hf.shootArrow();
    hf.hybridAttack();

    FinalBoss fb;
    fb.appear();
    fb.bossIntro();
    fb.ultimateMove();

    HealthPotion hp;
    hp.boost();
    hp.heal();

    ShieldPotion sp;
    sp.boost();
    sp.shield();

    SpellKnight p;
    p.status();
    p.fight();
    p.healAlly();
    p.divineSmite();

    return 0;
}
