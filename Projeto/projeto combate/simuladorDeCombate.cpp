#include <iostream>

// Estrutura do Zombie
struct Zombie
{
    int damageZombie = 20;
    int defenseZombie = 10;
    int hpZombie = 30;
    float cooldownAttack = 1.5;
};

// Estrutura do Player
struct Player
{
    int damagePlayer = 0;
    int defensePlayer = 0;
    int hp_Player = 0;
    float cooldown_Attack_Player = 0.0f;
};

int main()
{
    Zombie E;
    Player P;

    int number = 1;

    do
    {
        // Vida
        std::cout << "Qual é a vida do seu player? ";
        std::cin >> P.hp_Player;

        // Dano
        std::cout << "Qual é o dano do seu player? ";
        std::cin >> P.damagePlayer;

        // Defesa
        std::cout << "Qual é a defesa do seu player? ";
        std::cin >> P.defensePlayer;

        // Cooldown
        std::cout << "Qual é o cooldown de ataque do seu player? ";
        std::cin >> P.cooldown_Attack_Player;

        std::cout << "Quer continuar: 1 ou 0 " << (number ? 1 : 0) << "\n";
        std::cin >> number;

        if (P.hp_Player > 100)
        {
            std::cout << "Valor de vida maior não pode!\n";
        }
        if (P.damagePlayer > 100)
        {
            std::cout << "Valor de dano maior não pode!\n";
        }
        if (P.defensePlayer > 100)
        {
            std::cout << "Valor de defesa maior não pode!\n";
        }
        if (P.cooldown_Attack_Player > 100)
        {
            std::cout << "Cooldown maior não pode!\n";
        }

        if (P.hp_Player < 0 || P.damagePlayer < 0 ||
            P.defensePlayer < 0 || P.cooldown_Attack_Player < 0)
        {
            std::cout << "Nao aceita numero negativo!\n";
        }

    } while (number == 1);

    // Compara Quem ganhou
    if (P.hp_Player > E.hpZombie &&
        P.damagePlayer > E.damageZombie &&
        P.defensePlayer > E.defenseZombie &&
        P.cooldown_Attack_Player < E.cooldownAttack)
    {
        std::cout << "Player ganhou\n";
    }
    else if (P.hp_Player > 100 || P.damagePlayer > 100 || P.defensePlayer > 100)
    {
        std::cout << "Voce trapaceou!\n";
    }
    else
    {
        std::cout << "Zombie ganhou\n";
    }

    return 0;
}