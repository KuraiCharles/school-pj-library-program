#include <iostream>

int main(){

    int OPTION_MENU,
        GENRE_OPTION,
        SUPPLY_OPTION;

    // Price of each book (pesos)
    // Filipino Literature (FL)
    int FL_PRICE_1 = 250, FL_PRICE_2 = 250, FL_PRICE_3 = 150, FL_PRICE_4 = 150, FL_PRICE_5 = 320, FL_PRICE_6 = 350;
    int FL_PRICE_7 = 300, FL_PRICE_8 = 350, FL_PRICE_9 = 450;
    // Classic and Literary Fiction (CLF)
    int CLF_PRICE_1 = 380, CLF_PRICE_2 = 300, CLF_PRICE_3 = 280, CLF_PRICE_4 = 290, CLF_PRICE_5 = 220;
    // Fantasy, Adventure and Mystery (FAM)
    int FAM_PRICE_1 = 480, FAM_PRICE_2 = 450, FAM_PRICE_3 = 420, FAM_PRICE_4 = 350, FAM_PRICE_5 = 250, FAM_PRICE_6 = 400;
    // Self-Help and Business (SHB)
    int SHB_PRICE_1 = 550, SHB_PRICE_2 = 400, SHB_PRICE_3 = 520, SHB_PRICE_4 = 380, SHB_PRICE_5 = 330;
    // Computer Science and Math (CSM)
    int CSM_PRICE_1 = 1800, CSM_PRICE_2 = 1650, CSM_PRICE_3 = 1200, CSM_PRICE_4 = 2200, CSM_PRICE_5 = 1900;

    // Stock of each book (every book starts with 10 copies)
    // Filipino Literature (FL)
    int FL_STOCK_1 = 10, FL_STOCK_2 = 10, FL_STOCK_3 = 10, FL_STOCK_4 = 10, FL_STOCK_5 = 10, FL_STOCK_6 = 10;
    int FL_STOCK_7 = 10, FL_STOCK_8 = 10, FL_STOCK_9 = 10;
    // Classic and Literary Fiction (CLF)
    int CLF_STOCK_1 = 10, CLF_STOCK_2 = 10, CLF_STOCK_3 = 10, CLF_STOCK_4 = 10, CLF_STOCK_5 = 10;
    // Fantasy, Adventure and Mystery (FAM)
    int FAM_STOCK_1 = 10, FAM_STOCK_2 = 10, FAM_STOCK_3 = 10, FAM_STOCK_4 = 10, FAM_STOCK_5 = 10, FAM_STOCK_6 = 10;
    // Self-Help and Business (SHB)
    int SHB_STOCK_1 = 10, SHB_STOCK_2 = 10, SHB_STOCK_3 = 10, SHB_STOCK_4 = 10, SHB_STOCK_5 = 10;
    // Computer Science and Math (CSM)
    int CSM_STOCK_1 = 10, CSM_STOCK_2 = 10, CSM_STOCK_3 = 10, CSM_STOCK_4 = 10, CSM_STOCK_5 = 10;

    // Price of each school supply (pesos)
    // Writing Tools (WT)
    int WT_PRICE_1 = 45, WT_PRICE_2 = 80, WT_PRICE_3 = 95, WT_PRICE_4 = 35, WT_PRICE_5 = 25;
    // Paper and Notebooks (PN)
    int PN_PRICE_1 = 60, PN_PRICE_2 = 40, PN_PRICE_3 = 55, PN_PRICE_4 = 280, PN_PRICE_5 = 50;
    // Art and Craft (AC)
    int AC_PRICE_1 = 75, AC_PRICE_2 = 110, AC_PRICE_3 = 150, AC_PRICE_4 = 45, AC_PRICE_5 = 60;
    // Bags and Desk Items (BDI)
    int BDI_PRICE_1 = 650, BDI_PRICE_2 = 90, BDI_PRICE_3 = 20, BDI_PRICE_4 = 550, BDI_PRICE_5 = 120;

    // Stock of each school supply (every supply starts with 20 pieces)
    // Writing Tools (WT)
    int WT_STOCK_1 = 20, WT_STOCK_2 = 20, WT_STOCK_3 = 20, WT_STOCK_4 = 20, WT_STOCK_5 = 20;
    // Paper and Notebooks (PN)
    int PN_STOCK_1 = 20, PN_STOCK_2 = 20, PN_STOCK_3 = 20, PN_STOCK_4 = 20, PN_STOCK_5 = 20;
    // Art and Craft (AC)
    int AC_STOCK_1 = 20, AC_STOCK_2 = 20, AC_STOCK_3 = 20, AC_STOCK_4 = 20, AC_STOCK_5 = 20;
    // Bags and Desk Items (BDI)
    int BDI_STOCK_1 = 20, BDI_STOCK_2 = 20, BDI_STOCK_3 = 20, BDI_STOCK_4 = 20, BDI_STOCK_5 = 20;

    menu:

    std::cout << "▄▄▄▄ ▄▄▄▄ ▄▄▄▄▄ ▄▄▄▄ ▄▄ ▄ ▄ ▄▄  ▄▄▄ ▄▄▄▄      ▄▄   ▄▄ ▄▄▄▄ ▄▄▄▄ ▄▄▄▄ ▄▄▄▄ ▄▄ ▄" << std::endl;
    std::cout << "██ █ ██ █ ██    ██ ▀ ██ █ █ ██ ██▀  ██ ▀      ██   ██ ██ █ ██ █ ██ █ ██ █ ██ █" << std::endl;
    std::cout << "██▄█ ██▄█ ██ ▄▄ ██▀  ██ █ █ ██ ▀██▄ ██▀       ██   ██ ██▄▀ ██▄▀ ██▄█ ██▄▀ ██▄█" << std::endl;
    std::cout << "▀█    █ █ ▐▀ ▀▌  █ █  █ █ ▀ ▀█  ▄▀▀  █ █       █▄▄ ▀█  █ █ ▀█ █  █ █ ▀█ █ ▄▄ █" << std::endl;
    std::cout << "▀▀   ▀▀ ▀ ▀▀▀▀▀ ▀▀▀▀ ▀▀▀▀▀▀ ▀▀ ▀▀▀  ▀▀▀▀      ▀▀▀▀ ▀▀ ▀▀▀▀ ▀▀ ▀ ▀▀ ▀ ▀▀ ▀ ▀▀▀▀" << std::endl;

    std::cout << "\033[1m";

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "    ___________________________________   ___________________________________" << std::endl;
    std::cout << ".-/|                                   \\ /                                   |\\-." << std::endl;
    std::cout << "||||                                    |  1. Books Menu                     ||||" << std::endl;
    std::cout << "||||                                    |  2. Supply Menu                    ||||" << std::endl;
    std::cout << "||||             MAIN MENU              |  3. View Cart                      ||||" << std::endl;
    std::cout << "||||                                    |  4. Checkout                       ||||" << std::endl;
    std::cout << "||||                                    |  5. Exit                           ||||" << std::endl;
    std::cout << "||||                                    |                                    ||||" << std::endl;
    std::cout << "||||             --==*==--              |              --==*==--             ||||" << std::endl;
    std::cout << "||||                                    |                                    ||||" << std::endl;
    std::cout << "||||                                    |                                    ||||" << std::endl;
    std::cout << "||||                                    |                                    ||||" << std::endl;
    std::cout << "||||___________________________________ | ___________________________________||||" << std::endl;
    std::cout << "||/====================================\\|/====================================\\||" << std::endl;
    std::cout << "`-------------------------------------~___~------------------------------------''" << std::endl;

    std::cout << std::endl;

    std::cout << "Enter your option: ";
    std::cin >> OPTION_MENU;

    switch(OPTION_MENU){
        case 1:
            system("cls");
            std::cout << std::endl;

            std::cout << "   ___________________________________   ___________________________________" << std::endl;
            std::cout << ".-/|                                   \\ /                                   |\\-." << std::endl;
            std::cout << "||||                                    |  1. Filipino Literature            ||||" << std::endl;
            std::cout << "||||                                    |  2. Classic and Literary Fiction   ||||" << std::endl;
            std::cout << "||||            BOOKS GENRE             |  3. Fantasy, Adventure and Mystery ||||" << std::endl;
            std::cout << "||||                                    |  4. Self-Help and Business         ||||" << std::endl;
            std::cout << "||||                                    |  5. Computer Science and Math      ||||" << std::endl;
            std::cout << "||||                                    |  6. Back to main menu              ||||" << std::endl;
            std::cout << "||||                                    |                                    ||||" << std::endl;
            std::cout << "||||             --==*==--              |             --==*==--              ||||" << std::endl;
            std::cout << "||||                                    |                                    ||||" << std::endl;
            std::cout << "||||                                    |                                    ||||" << std::endl;
            std::cout << "||||___________________________________ | ___________________________________||||" << std::endl;
            std::cout << "||/====================================\\|/====================================\\||" << std::endl;
            std::cout << "`-------------------------------------~___~------------------------------------''" << std::endl;

            std::cout << std::endl;

            std::cout << "Enter your choice: ";
            std::cin >> GENRE_OPTION;

            std::cout << std::endl;
            std::cout << std::endl;

            switch (GENRE_OPTION){
            case 1:
            std::cout << "--- FILIPINO LITERATURE ---" << std::endl;

            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [1] Noli Me Tangere" << std::endl;
            std::cout << "| ===== |   by Jose Rizal" << std::endl;
            std::cout << "|   *   |   A young Filipino returns home from" << std::endl;
            std::cout << "| ===== |   Europe and exposes the abuses of" << std::endl;
            std::cout << "|       |   Spanish friars and officials." << std::endl;
            std::cout << "'-------'   Qty: " << FL_STOCK_1 << "   Price: P" << FL_PRICE_1 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [2] El Filibusterismo" << std::endl;
            std::cout << "| ===== |   by Jose Rizal" << std::endl;
            std::cout << "|   *   |   The sequel to Noli Me Tangere, where" << std::endl;
            std::cout << "| ===== |   Simoun plots revenge against the" << std::endl;
            std::cout << "|       |   corrupt colonial system." << std::endl;
            std::cout << "'-------'   Qty: " << FL_STOCK_2 << "   Price: P" << FL_PRICE_2 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [3] Florante at Laura" << std::endl;
            std::cout << "| ===== |   by Francisco Balagtas" << std::endl;
            std::cout << "|   *   |   A noble left bound to a tree is saved" << std::endl;
            std::cout << "| ===== |   by a stranger. An epic poem of love," << std::endl;
            std::cout << "|       |   war, and betrayal." << std::endl;
            std::cout << "'-------'   Qty: " << FL_STOCK_3 << "   Price: P" << FL_PRICE_3 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [4] Ibong Adarna" << std::endl;
            std::cout << "| ===== |   by Anonymous" << std::endl;
            std::cout << "|   *   |   Three princes search for a magical" << std::endl;
            std::cout << "| ===== |   bird whose song can cure their" << std::endl;
            std::cout << "|       |   sick father, the king." << std::endl;
            std::cout << "'-------'   Qty: " << FL_STOCK_4 << "   Price: P" << FL_PRICE_4 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [5] Dekada '70" << std::endl;
            std::cout << "| ===== |   by Lualhati Bautista" << std::endl;
            std::cout << "|   *   |   A mother and her five sons live" << std::endl;
            std::cout << "| ===== |   through the Martial Law years of" << std::endl;
            std::cout << "|       |   the 1970s in the Philippines." << std::endl;
            std::cout << "'-------'   Qty: " << FL_STOCK_5 << "   Price: P" << FL_PRICE_5 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [6] Gapo" << std::endl;
            std::cout << "| ===== |   by Lualhati Bautista" << std::endl;
            std::cout << "|   *   |   Set in Olongapo near a US naval" << std::endl;
            std::cout << "| ===== |   base, it shows how the American" << std::endl;
            std::cout << "|       |   presence shapes local lives." << std::endl;
            std::cout << "'-------'   Qty: " << FL_STOCK_6 << "   Price: P" << FL_PRICE_6 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [7] Banaag at Sikat" << std::endl;
            std::cout << "| ===== |   by Lope K. Santos" << std::endl;
            std::cout << "|   *   |   A Tagalog novel on the struggle" << std::endl;
            std::cout << "| ===== |   between the rich and the poor and" << std::endl;
            std::cout << "|       |   the ideas of socialism." << std::endl;
            std::cout << "'-------'   Qty: " << FL_STOCK_7 << "   Price: P" << FL_PRICE_7 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [8] Mga Ibong Mandaragit" << std::endl;
            std::cout << "| ===== |   by Amado V. Hernandez" << std::endl;
            std::cout << "|   *   |   A story of workers and landowners" << std::endl;
            std::cout << "| ===== |   fighting over land and justice in" << std::endl;
            std::cout << "|       |   the Philippines." << std::endl;
            std::cout << "'-------'   Qty: " << FL_STOCK_8 << "   Price: P" << FL_PRICE_8 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [9] Ilustrado" << std::endl;
            std::cout << "| ===== |   by Miguel Syjuco" << std::endl;
            std::cout << "|   *   |   A young writer investigates the" << std::endl;
            std::cout << "| ===== |   death of a famous author, uncovering" << std::endl;
            std::cout << "|       |   Philippine history and secrets." << std::endl;
            std::cout << "'-------'   Qty: " << FL_STOCK_9 << "   Price: P" << FL_PRICE_9 << std::endl;
            std::cout << std::endl;
            break;
            case 2:
            std::cout << "--- CLASSIC AND LITERARY FICTION ---" << std::endl;

            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [10] To Kill a Mockingbird" << std::endl;
            std::cout << "| ===== |   by Harper Lee" << std::endl;
            std::cout << "|   &   |   Scout watches her father defend a" << std::endl;
            std::cout << "| ===== |   wrongly accused man in a small" << std::endl;
            std::cout << "|       |   Alabama town." << std::endl;
            std::cout << "'-------'   Qty: " << CLF_STOCK_1 << "   Price: P" << CLF_PRICE_1 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [11] 1984" << std::endl;
            std::cout << "| ===== |   by George Orwell" << std::endl;
            std::cout << "|   &   |   Winston Smith lives under constant" << std::endl;
            std::cout << "| ===== |   watch by Big Brother and dares to" << std::endl;
            std::cout << "|       |   think for himself." << std::endl;
            std::cout << "'-------'   Qty: " << CLF_STOCK_2 << "   Price: P" << CLF_PRICE_2 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [12] The Great Gatsby" << std::endl;
            std::cout << "| ===== |   by F. Scott Fitzgerald" << std::endl;
            std::cout << "|   &   |   Narrator Nick watches wealthy Jay" << std::endl;
            std::cout << "| ===== |   Gatsby chase his lost love in 1920s" << std::endl;
            std::cout << "|       |   New York." << std::endl;
            std::cout << "'-------'   Qty: " << CLF_STOCK_3 << "   Price: P" << CLF_PRICE_3 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [13] Pride and Prejudice" << std::endl;
            std::cout << "| ===== |   by Jane Austen" << std::endl;
            std::cout << "|   &   |   Elizabeth Bennet and proud Mr. Darcy" << std::endl;
            std::cout << "| ===== |   must get past their first" << std::endl;
            std::cout << "|       |   impressions to find love." << std::endl;
            std::cout << "'-------'   Qty: " << CLF_STOCK_4 << "   Price: P" << CLF_PRICE_4 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [14] Animal Farm" << std::endl;
            std::cout << "| ===== |   by George Orwell" << std::endl;
            std::cout << "|   &   |   Farm animals chase out their owner," << std::endl;
            std::cout << "| ===== |   but the pigs slowly take power for" << std::endl;
            std::cout << "|       |   themselves." << std::endl;
            std::cout << "'-------'   Qty: " << CLF_STOCK_5 << "   Price: P" << CLF_PRICE_5 << std::endl;
            std::cout << std::endl;
            break;
            case 3:
            std::cout << "--- FANTASY, ADVENTURE AND MYSTERY ---" << std::endl;

            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [15] Harry Potter and the Sorcerer's Stone" << std::endl;
            std::cout << "| ===== |   by J.K. Rowling" << std::endl;
            std::cout << "|   ~   |   A boy learns he is a wizard and" << std::endl;
            std::cout << "| ===== |   starts at Hogwarts, where he faces" << std::endl;
            std::cout << "|       |   a hidden danger." << std::endl;
            std::cout << "'-------'   Qty: " << FAM_STOCK_1 << "   Price: P" << FAM_PRICE_1 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [16] The Hobbit" << std::endl;
            std::cout << "| ===== |   by J.R.R. Tolkien" << std::endl;
            std::cout << "|   ~   |   Bilbo Baggins joins thirteen dwarves" << std::endl;
            std::cout << "| ===== |   on a quest to win back treasure from" << std::endl;
            std::cout << "|       |   the dragon Smaug." << std::endl;
            std::cout << "'-------'   Qty: " << FAM_STOCK_2 << "   Price: P" << FAM_PRICE_2 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [17] The Hunger Games" << std::endl;
            std::cout << "| ===== |   by Suzanne Collins" << std::endl;
            std::cout << "|   ~   |   Katniss takes her sister's place in" << std::endl;
            std::cout << "| ===== |   a deadly televised contest where" << std::endl;
            std::cout << "|       |   only one can survive." << std::endl;
            std::cout << "'-------'   Qty: " << FAM_STOCK_3 << "   Price: P" << FAM_PRICE_3 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [18] The Alchemist" << std::endl;
            std::cout << "| ===== |   by Paulo Coelho" << std::endl;
            std::cout << "|   ~   |   Santiago, a shepherd boy, travels to" << std::endl;
            std::cout << "| ===== |   the Egyptian pyramids in search of" << std::endl;
            std::cout << "|       |   treasure and his purpose." << std::endl;
            std::cout << "'-------'   Qty: " << FAM_STOCK_4 << "   Price: P" << FAM_PRICE_4 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [19] The Little Prince" << std::endl;
            std::cout << "| ===== |   by Antoine de Saint-Exupery" << std::endl;
            std::cout << "|   ~   |   A pilot stranded in the desert meets" << std::endl;
            std::cout << "| ===== |   a young prince from a tiny planet" << std::endl;
            std::cout << "|       |   and learns about life." << std::endl;
            std::cout << "'-------'   Qty: " << FAM_STOCK_5 << "   Price: P" << FAM_PRICE_5 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [20] Smaller and Smaller Circles" << std::endl;
            std::cout << "| ===== |   by F.H. Batacan" << std::endl;
            std::cout << "|   ~   |   Two Jesuit priests investigate a" << std::endl;
            std::cout << "| ===== |   series of murders of boys in Manila," << std::endl;
            std::cout << "|       |   in this crime novel." << std::endl;
            std::cout << "'-------'   Qty: " << FAM_STOCK_6 << "   Price: P" << FAM_PRICE_6 << std::endl;
            std::cout << std::endl;
            break;
            case 4:
            std::cout << "--- SELF-HELP AND BUSINESS ---" << std::endl;

            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [21] Atomic Habits" << std::endl;
            std::cout << "| ===== |   by James Clear" << std::endl;
            std::cout << "|   +   |   Shows how tiny daily changes build" << std::endl;
            std::cout << "| ===== |   into big results, with practical steps" << std::endl;
            std::cout << "|       |   for better habits." << std::endl;
            std::cout << "'-------'   Qty: " << SHB_STOCK_1 << "   Price: P" << SHB_PRICE_1 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [22] Rich Dad Poor Dad" << std::endl;
            std::cout << "| ===== |   by Robert Kiyosaki" << std::endl;
            std::cout << "|   +   |   Contrasts two father figures to teach" << std::endl;
            std::cout << "| ===== |   lessons about money, investing, and" << std::endl;
            std::cout << "|       |   financial independence." << std::endl;
            std::cout << "'-------'   Qty: " << SHB_STOCK_2 << "   Price: P" << SHB_PRICE_2 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [23] The 7 Habits of Highly Effective People" << std::endl;
            std::cout << "| ===== |   by Stephen Covey" << std::endl;
            std::cout << "|   +   |   Seven principles for becoming more" << std::endl;
            std::cout << "| ===== |   effective in work, school, and" << std::endl;
            std::cout << "|       |   personal life." << std::endl;
            std::cout << "'-------'   Qty: " << SHB_STOCK_3 << "   Price: P" << SHB_PRICE_3 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [24] How to Win Friends and Influence People" << std::endl;
            std::cout << "| ===== |   by Dale Carnegie" << std::endl;
            std::cout << "|   +   |   Practical advice on getting along" << std::endl;
            std::cout << "| ===== |   with people, making friends, and" << std::endl;
            std::cout << "|       |   communicating well." << std::endl;
            std::cout << "'-------'   Qty: " << SHB_STOCK_4 << "   Price: P" << SHB_PRICE_4 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [25] Think and Grow Rich" << std::endl;
            std::cout << "| ===== |   by Napoleon Hill" << std::endl;
            std::cout << "|   +   |   Shares principles of success and wealth" << std::endl;
            std::cout << "| ===== |   built around goals, persistence, and" << std::endl;
            std::cout << "|       |   a positive mindset." << std::endl;
            std::cout << "'-------'   Qty: " << SHB_STOCK_5 << "   Price: P" << SHB_PRICE_5 << std::endl;
            std::cout << std::endl;
            break;
            case 5:
            std::cout << "--- COMPUTER SCIENCE AND MATH ---" << std::endl;

            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [26] The C++ Programming Language" << std::endl;
            std::cout << "| ===== |   by Bjarne Stroustrup" << std::endl;
            std::cout << "|   #   |   Written by C++ creator Bjarne" << std::endl;
            std::cout << "| ===== |   Stroustrup, a complete reference" << std::endl;
            std::cout << "|       |   to the language." << std::endl;
            std::cout << "'-------'   Qty: " << CSM_STOCK_1 << "   Price: P" << CSM_PRICE_1 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [27] C++ Primer" << std::endl;
            std::cout << "| ===== |   by Lippman, Lajoie and Moo" << std::endl;
            std::cout << "|   #   |   A thorough introduction to modern" << std::endl;
            std::cout << "| ===== |   C++ for learners, with many" << std::endl;
            std::cout << "|       |   examples and exercises." << std::endl;
            std::cout << "'-------'   Qty: " << CSM_STOCK_2 << "   Price: P" << CSM_PRICE_2 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [28] Clean Code" << std::endl;
            std::cout << "| ===== |   by Robert C. Martin" << std::endl;
            std::cout << "|   #   |   Teaches how to write readable," << std::endl;
            std::cout << "| ===== |   maintainable code through simple" << std::endl;
            std::cout << "|       |   rules and examples." << std::endl;
            std::cout << "'-------'   Qty: " << CSM_STOCK_3 << "   Price: P" << CSM_PRICE_3 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [29] Introduction to Algorithms" << std::endl;
            std::cout << "| ===== |   by Cormen et al." << std::endl;
            std::cout << "|   #   |   A widely used textbook covering" << std::endl;
            std::cout << "| ===== |   sorting, graphs, data structures," << std::endl;
            std::cout << "|       |   and algorithm analysis." << std::endl;
            std::cout << "'-------'   Qty: " << CSM_STOCK_4 << "   Price: P" << CSM_PRICE_4 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [30] Discrete Mathematics and Its Applications" << std::endl;
            std::cout << "| ===== |   by Kenneth Rosen" << std::endl;
            std::cout << "|   #   |   A textbook on logic, sets, graphs," << std::endl;
            std::cout << "| ===== |   counting, and proofs for computer" << std::endl;
            std::cout << "|       |   science students." << std::endl;
            std::cout << "'-------'   Qty: " << CSM_STOCK_5 << "   Price: P" << CSM_PRICE_5 << std::endl;
            std::cout << std::endl;
            break;
            default:
            goto menu;
            break;
            }
        break;
        case 2:

            std::cout << std::endl;

            std::cout << " ___________________________________   ___________________________________" << std::endl;
            std::cout << ".-/|                                   \\ /                                   |\\-." << std::endl;
            std::cout << "||||                                    |  1. Writing Tools                  ||||" << std::endl;
            std::cout << "||||                                    |  2. Paper and Notebooks            ||||" << std::endl;
            std::cout << "||||          SUPPLY CATEGORY           |  3. Art and Craft                  ||||" << std::endl;
            std::cout << "||||                                    |  4. Bags and Desk Items            ||||" << std::endl;
            std::cout << "||||                                    |  5. Back to main menu              ||||" << std::endl;
            std::cout << "||||                                    |                                    ||||" << std::endl;
            std::cout << "||||             --==*==--              |             --==*==--              ||||" << std::endl;
            std::cout << "||||                                    |                                    ||||" << std::endl;
            std::cout << "||||                                    |                                    ||||" << std::endl;
            std::cout << "||||                                    |                                    ||||" << std::endl;
            std::cout << "||||___________________________________ | ___________________________________||||" << std::endl;
            std::cout << "||/====================================\\|/====================================\\||" << std::endl;
            std::cout << "`-------------------------------------~___~------------------------------------''" << std::endl;

            std::cout << std::endl;

            std::cout << "Enter your choice: ";
            std::cin >> SUPPLY_OPTION;

            std::cout << std::endl;
            std::cout << std::endl;

            switch (SUPPLY_OPTION){
            case 1:
            std::cout << "--- WRITING TOOLS ---" << std::endl;

            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [31] Ballpoint Pen (Pack of 5)" << std::endl;
            std::cout << "| ::::: |   Type: Pen" << std::endl;
            std::cout << "|   W   |   Five blue-ink pens for notes," << std::endl;
            std::cout << "| ::::: |   exams, and daily homework." << std::endl;
            std::cout << "|       |   Smooth and easy to hold." << std::endl;
            std::cout << "'-------'   Qty: " << WT_STOCK_1 << "   Price: P" << WT_PRICE_1 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [32] Pencil No. 2 (Box of 12)" << std::endl;
            std::cout << "| ::::: |   Type: Pencil" << std::endl;
            std::cout << "|   W   |   Twelve No. 2 pencils, good for" << std::endl;
            std::cout << "| ::::: |   answer sheets, drawing, and" << std::endl;
            std::cout << "|       |   everyday writing." << std::endl;
            std::cout << "'-------'   Qty: " << WT_STOCK_2 << "   Price: P" << WT_PRICE_2 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [33] Highlighter Set (4 colors)" << std::endl;
            std::cout << "| ::::: |   Type: Marker" << std::endl;
            std::cout << "|   W   |   Four bright colors to mark" << std::endl;
            std::cout << "| ::::: |   key ideas and important lines" << std::endl;
            std::cout << "|       |   in your notes and books." << std::endl;
            std::cout << "'-------'   Qty: " << WT_STOCK_3 << "   Price: P" << WT_PRICE_3 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [34] Permanent Marker (Black)" << std::endl;
            std::cout << "| ::::: |   Type: Marker" << std::endl;
            std::cout << "|   W   |   Bold black ink that works on" << std::endl;
            std::cout << "| ::::: |   paper, plastic, and cardboard," << std::endl;
            std::cout << "|       |   great for labels and posters." << std::endl;
            std::cout << "'-------'   Qty: " << WT_STOCK_4 << "   Price: P" << WT_PRICE_4 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [35] Eraser and Sharpener Set" << std::endl;
            std::cout << "| ::::: |   Type: Pencil accessories" << std::endl;
            std::cout << "|   W   |   A soft eraser and a metal" << std::endl;
            std::cout << "| ::::: |   sharpener to keep your pencils" << std::endl;
            std::cout << "|       |   neat and ready." << std::endl;
            std::cout << "'-------'   Qty: " << WT_STOCK_5 << "   Price: P" << WT_PRICE_5 << std::endl;
            std::cout << std::endl;
            break;
            case 2:
            std::cout << "--- PAPER AND NOTEBOOKS ---" << std::endl;

            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [36] Spiral Notebook (80 leaves)" << std::endl;
            std::cout << "| ::::: |   Type: Notebook" << std::endl;
            std::cout << "|   N   |   A spiral-bound notebook with ruled" << std::endl;
            std::cout << "| ::::: |   pages for class notes and" << std::endl;
            std::cout << "|       |   daily lessons." << std::endl;
            std::cout << "'-------'   Qty: " << PN_STOCK_1 << "   Price: P" << PN_PRICE_1 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [37] Composition Notebook" << std::endl;
            std::cout << "| ::::: |   Type: Notebook" << std::endl;
            std::cout << "|   N   |   A sturdy stitched notebook for" << std::endl;
            std::cout << "| ::::: |   journals, quizzes, and" << std::endl;
            std::cout << "|       |   class activities." << std::endl;
            std::cout << "'-------'   Qty: " << PN_STOCK_2 << "   Price: P" << PN_PRICE_2 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [38] Yellow Pad Paper (Pad of 80)" << std::endl;
            std::cout << "| ::::: |   Type: Paper" << std::endl;
            std::cout << "|   N   |   Lined yellow pad for drafts," << std::endl;
            std::cout << "| ::::: |   reviewers, and quick notes" << std::endl;
            std::cout << "|       |   on the go." << std::endl;
            std::cout << "'-------'   Qty: " << PN_STOCK_3 << "   Price: P" << PN_PRICE_3 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [39] Bond Paper A4 (Ream of 500)" << std::endl;
            std::cout << "| ::::: |   Type: Paper" << std::endl;
            std::cout << "|   N   |   Five hundred white A4 sheets for" << std::endl;
            std::cout << "| ::::: |   printing reports, projects," << std::endl;
            std::cout << "|       |   and assignments." << std::endl;
            std::cout << "'-------'   Qty: " << PN_STOCK_4 << "   Price: P" << PN_PRICE_4 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [40] Sticky Notes (Pack of 6)" << std::endl;
            std::cout << "| ::::: |   Type: Paper" << std::endl;
            std::cout << "|   N   |   Small colored notes to stick on" << std::endl;
            std::cout << "| ::::: |   pages, desks, and reminders" << std::endl;
            std::cout << "|       |   you do not want to forget." << std::endl;
            std::cout << "'-------'   Qty: " << PN_STOCK_5 << "   Price: P" << PN_PRICE_5 << std::endl;
            std::cout << std::endl;
            break;
            case 3:
            std::cout << "--- ART AND CRAFT ---" << std::endl;

            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [41] Crayons (Box of 24)" << std::endl;
            std::cout << "| ::::: |   Type: Art" << std::endl;
            std::cout << "|   A   |   Twenty-four colors for coloring," << std::endl;
            std::cout << "| ::::: |   school projects, and" << std::endl;
            std::cout << "|       |   early drawing." << std::endl;
            std::cout << "'-------'   Qty: " << AC_STOCK_1 << "   Price: P" << AC_PRICE_1 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [42] Colored Pencils (Set of 12)" << std::endl;
            std::cout << "| ::::: |   Type: Art" << std::endl;
            std::cout << "|   A   |   Twelve colored pencils for" << std::endl;
            std::cout << "| ::::: |   drawing, shading, and" << std::endl;
            std::cout << "|       |   class art activities." << std::endl;
            std::cout << "'-------'   Qty: " << AC_STOCK_2 << "   Price: P" << AC_PRICE_2 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [43] Watercolor Set (12 colors)" << std::endl;
            std::cout << "| ::::: |   Type: Art" << std::endl;
            std::cout << "|   A   |   Twelve paints with a brush for" << std::endl;
            std::cout << "| ::::: |   art class and creative" << std::endl;
            std::cout << "|       |   projects." << std::endl;
            std::cout << "'-------'   Qty: " << AC_STOCK_3 << "   Price: P" << AC_PRICE_3 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [44] Scissors (Safety Type)" << std::endl;
            std::cout << "| ::::: |   Type: Craft tool" << std::endl;
            std::cout << "|   A   |   Blunt-tip scissors for cutting" << std::endl;
            std::cout << "| ::::: |   paper, cartolina, and" << std::endl;
            std::cout << "|       |   craft materials." << std::endl;
            std::cout << "'-------'   Qty: " << AC_STOCK_4 << "   Price: P" << AC_PRICE_4 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [45] Glue Stick (Pack of 3)" << std::endl;
            std::cout << "| ::::: |   Type: Craft tool" << std::endl;
            std::cout << "|   A   |   Three non-messy glue sticks for" << std::endl;
            std::cout << "| ::::: |   paper crafts, collages, and" << std::endl;
            std::cout << "|       |   school projects." << std::endl;
            std::cout << "'-------'   Qty: " << AC_STOCK_5 << "   Price: P" << AC_PRICE_5 << std::endl;
            std::cout << std::endl;
            break;
            case 4:
            std::cout << "--- BAGS AND DESK ITEMS ---" << std::endl;

            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [46] School Backpack" << std::endl;
            std::cout << "| ::::: |   Type: Bag" << std::endl;
            std::cout << "|   B   |   A roomy backpack with padded" << std::endl;
            std::cout << "| ::::: |   straps and several pockets for" << std::endl;
            std::cout << "|       |   books and supplies." << std::endl;
            std::cout << "'-------'   Qty: " << BDI_STOCK_1 << "   Price: P" << BDI_PRICE_1 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [47] Pencil Case" << std::endl;
            std::cout << "| ::::: |   Type: Bag" << std::endl;
            std::cout << "|   B   |   A zipper case that keeps pens," << std::endl;
            std::cout << "| ::::: |   pencils, and erasers" << std::endl;
            std::cout << "|       |   in one place." << std::endl;
            std::cout << "'-------'   Qty: " << BDI_STOCK_2 << "   Price: P" << BDI_PRICE_2 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [48] Ruler (30 cm)" << std::endl;
            std::cout << "| ::::: |   Type: Measuring tool" << std::endl;
            std::cout << "|   B   |   A clear 30 cm ruler for" << std::endl;
            std::cout << "| ::::: |   math class, drawing lines," << std::endl;
            std::cout << "|       |   and measuring." << std::endl;
            std::cout << "'-------'   Qty: " << BDI_STOCK_3 << "   Price: P" << BDI_PRICE_3 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [49] Scientific Calculator" << std::endl;
            std::cout << "| ::::: |   Type: Calculator" << std::endl;
            std::cout << "|   B   |   Handles fractions, powers, and" << std::endl;
            std::cout << "| ::::: |   trigonometry for math and" << std::endl;
            std::cout << "|       |   science subjects." << std::endl;
            std::cout << "'-------'   Qty: " << BDI_STOCK_4 << "   Price: P" << BDI_PRICE_4 << std::endl;
            std::cout << std::endl;
            std::cout << "==============================================" << std::endl;
            std::cout << ".-------.   [50] Stapler with Staples" << std::endl;
            std::cout << "| ::::: |   Type: Desk tool" << std::endl;
            std::cout << "|   B   |   A small stapler and a box of" << std::endl;
            std::cout << "| ::::: |   staples for binding reports" << std::endl;
            std::cout << "|       |   and homework." << std::endl;
            std::cout << "'-------'   Qty: " << BDI_STOCK_5 << "   Price: P" << BDI_PRICE_5 << std::endl;
            std::cout << std::endl;
            break;
            default:
            break;
            }
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