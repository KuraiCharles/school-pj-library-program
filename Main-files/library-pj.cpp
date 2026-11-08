#include <iostream>

int main(){

    int OPTION_MENU,
        GENRE_OPTION;

    // Price of each book (pesos)
    int price1 = 250, price2 = 250, price3 = 150, price4 = 150, price5 = 320, price6 = 350;
    int price7 = 300, price8 = 350, price9 = 450, price10 = 380, price11 = 300, price12 = 280;
    int price13 = 290, price14 = 220, price15 = 480, price16 = 450, price17 = 420, price18 = 350;
    int price19 = 250, price20 = 400, price21 = 550, price22 = 400, price23 = 520, price24 = 380;
    int price25 = 330, price26 = 1800, price27 = 1650, price28 = 1200, price29 = 2200, price30 = 1900;

    // Stock of each book (every book starts with 10 copies)
    int stock1 = 10, stock2 = 10, stock3 = 10, stock4 = 10, stock5 = 10, stock6 = 10;
    int stock7 = 10, stock8 = 10, stock9 = 10, stock10 = 10, stock11 = 10, stock12 = 10;
    int stock13 = 10, stock14 = 10, stock15 = 10, stock16 = 10, stock17 = 10, stock18 = 10;
    int stock19 = 10, stock20 = 10, stock21 = 10, stock22 = 10, stock23 = 10, stock24 = 10;
    int stock25 = 10, stock26 = 10, stock27 = 10, stock28 = 10, stock29 = 10, stock30 = 10;

    std::cout << "▄▄▄▄ ▄▄▄▄ ▄▄▄▄▄ ▄▄▄▄ ▄▄ ▄ ▄ ▄▄  ▄▄▄ ▄▄▄▄      ▄▄   ▄▄ ▄▄▄▄ ▄▄▄▄ ▄▄▄▄ ▄▄▄▄ ▄▄ ▄" << std::endl;
    std::cout << "██ █ ██ █ ██    ██ ▀ ██ █ █ ██ ██▀  ██ ▀      ██   ██ ██ █ ██ █ ██ █ ██ █ ██ █" << std::endl;
    std::cout << "██▄█ ██▄█ ██ ▄▄ ██▀  ██ █ █ ██ ▀██▄ ██▀       ██   ██ ██▄▀ ██▄▀ ██▄█ ██▄▀ ██▄█" << std::endl;
    std::cout << "▀█    █ █ ▐▀ ▀▌  █ █  █ █ ▀ ▀█  ▄▀▀  █ █       █▄▄ ▀█  █ █ ▀█ █  █ █ ▀█ █ ▄▄ █" << std::endl;
    std::cout << "▀▀   ▀▀ ▀ ▀▀▀▀▀ ▀▀▀▀ ▀▀▀▀▀▀ ▀▀ ▀▀▀  ▀▀▀▀      ▀▀▀▀ ▀▀ ▀▀▀▀ ▀▀ ▀ ▀▀ ▀ ▀▀ ▀ ▀▀▀▀" << std::endl;

    std::cout << "\033[1m";

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << " __________________   __________________" << std::endl;
    std::cout << ".-/|                  \\ /                  |\\-." << std::endl;
    std::cout << "||||                   |  1. Books Menu    ||||" << std::endl;
    std::cout << "||||                   |  2. Supply Menu   ||||" << std::endl;
    std::cout << "||||    MAIN MENU      |  3. View Cart     ||||" << std::endl;
    std::cout << "||||                   |  4. Checkout      ||||" << std::endl;
    std::cout << "||||                   |  5. Exit          ||||" << std::endl;
    std::cout << "||||                   |                   ||||" << std::endl;
    std::cout << "||||    --==*==--      |     --==*==--     ||||" << std::endl;
    std::cout << "||||                   |                   ||||" << std::endl;
    std::cout << "||||                   |                   ||||" << std::endl;
    std::cout << "||||                   |                   ||||" << std::endl;
    std::cout << "||||__________________ | __________________||||" << std::endl;
    std::cout << "||/===================\\|/===================\\||" << std::endl;
    std::cout << "`--------------------~___~-------------------''" << std::endl;

    std::cout << std::endl;

    std::cout << "Enter your option: ";
    std::cin >> OPTION_MENU;

    switch(OPTION_MENU){
        case 1:
        std::cout << "BOOKS:GENRE ";
            std::cout << "1. Filipino Literature" << std::endl;
            std::cout << "2. Classic and Literary Fiction" << std::endl;
            std::cout << "3. Fantasy, Adventure and Mystery" << std::endl;
            std::cout << "4. Self-Help and Business" << std::endl;
            std::cout << "5. Computer Science and Math" << std::endl;
            std::cout << "6. Back to main menu" << std::endl;

            std::cout << "Enter your choice: ";
            std::cin >> GENRE_OPTION;

            switch (GENRE_OPTION){
            case 1:
                std::cout << std::endl << "--- FILIPINO LITERATURE ---" << std::endl;
            std::cout << ".-------.   [1] Noli Me Tangere" << std::endl;
            std::cout << "| ===== |   by Jose Rizal" << std::endl;
            std::cout << "|   *   |   A young Filipino returns home from" << std::endl;
            std::cout << "| ===== |   Europe and exposes the abuses of" << std::endl;
            std::cout << "|       |   Spanish friars and officials." << std::endl;
            std::cout << "'-------'   Qty: " << stock1 << "   Price: P" << price1 << std::endl;
            std::cout << std::endl;
            std::cout << ".-------.   [2] El Filibusterismo" << std::endl;
            std::cout << "| ===== |   by Jose Rizal" << std::endl;
            std::cout << "|   *   |   The sequel to Noli Me Tangere, where" << std::endl;
            std::cout << "| ===== |   Simoun plots revenge against the" << std::endl;
            std::cout << "|       |   corrupt colonial system." << std::endl;
            std::cout << "'-------'   Qty: " << stock2 << "   Price: P" << price2 << std::endl;
            std::cout << std::endl;
            std::cout << ".-------.   [3] Florante at Laura" << std::endl;
            std::cout << "| ===== |   by Francisco Balagtas" << std::endl;
            std::cout << "|   *   |   A noble left bound to a tree is saved" << std::endl;
            std::cout << "| ===== |   by a stranger. An epic poem of love," << std::endl;
            std::cout << "|       |   war, and betrayal." << std::endl;
            std::cout << "'-------'   Qty: " << stock3 << "   Price: P" << price3 << std::endl;
            std::cout << std::endl;
            std::cout << ".-------.   [4] Ibong Adarna" << std::endl;
            std::cout << "| ===== |   by Anonymous" << std::endl;
            std::cout << "|   *   |   Three princes search for a magical" << std::endl;
            std::cout << "| ===== |   bird whose song can cure their" << std::endl;
            std::cout << "|       |   sick father, the king." << std::endl;
            std::cout << "'-------'   Qty: " << stock4 << "   Price: P" << price4 << std::endl;
            std::cout << std::endl;
            std::cout << ".-------.   [5] Dekada '70" << std::endl;
            std::cout << "| ===== |   by Lualhati Bautista" << std::endl;
            std::cout << "|   *   |   A mother and her five sons live" << std::endl;
            std::cout << "| ===== |   through the Martial Law years of" << std::endl;
            std::cout << "|       |   the 1970s in the Philippines." << std::endl;
            std::cout << "'-------'   Qty: " << stock5 << "   Price: P" << price5 << std::endl;
            std::cout << std::endl;
            std::cout << ".-------.   [6] Gapo" << std::endl;
            std::cout << "| ===== |   by Lualhati Bautista" << std::endl;
            std::cout << "|   *   |   Set in Olongapo near a US naval" << std::endl;
            std::cout << "| ===== |   base, it shows how the American" << std::endl;
            std::cout << "|       |   presence shapes local lives." << std::endl;
            std::cout << "'-------'   Qty: " << stock6 << "   Price: P" << price6 << std::endl;
            std::cout << std::endl;
            std::cout << ".-------.   [7] Banaag at Sikat" << std::endl;
            std::cout << "| ===== |   by Lope K. Santos" << std::endl;
            std::cout << "|   *   |   A Tagalog novel on the struggle" << std::endl;
            std::cout << "| ===== |   between the rich and the poor and" << std::endl;
            std::cout << "|       |   the ideas of socialism." << std::endl;
            std::cout << "'-------'   Qty: " << stock7 << "   Price: P" << price7 << std::endl;
            std::cout << std::endl;
            std::cout << ".-------.   [8] Mga Ibong Mandaragit" << std::endl;
            std::cout << "| ===== |   by Amado V. Hernandez" << std::endl;
            std::cout << "|   *   |   A story of workers and landowners" << std::endl;
            std::cout << "| ===== |   fighting over land and justice in" << std::endl;
            std::cout << "|       |   the Philippines." << std::endl;
            std::cout << "'-------'   Qty: " << stock8 << "   Price: P" << price8 << std::endl;
            std::cout << std::endl;
            std::cout << ".-------.   [9] Ilustrado" << std::endl;
            std::cout << "| ===== |   by Miguel Syjuco" << std::endl;
            std::cout << "|   *   |   A young writer investigates the" << std::endl;
            std::cout << "| ===== |   death of a famous author, uncovering" << std::endl;
            std::cout << "|       |   Philippine history and secrets." << std::endl;
            std::cout << "'-------'   Qty: " << stock9 << "   Price: P" << price9 << std::endl;
            break;
            case 2:

            break;
            case 3:

            break;
            case 4:

            break;
            case 5:

            break;
            default:
            break;
            }
        break;
        case 2:

        break;
        case 3:

        break;
        case 4:

        break;
        case 5:

        break;
        default:

        break;
    }
}
