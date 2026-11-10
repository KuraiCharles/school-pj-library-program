#include <iostream>
#include <iomanip>

int main(){

    int OPTION_MENU = 0,
        GENRE_OPTION = 0,
        GENRE_RETURN = 0,
        SUPPLY_OPTION = 0,
        BOOK_CHOICE = 0,
        ADD_TO_CART_RETURN_CHOICE = 0,
        SUPPLY_RETURN = 0,
        SUPPLY_CHOICE = 0;

    char Return;
    int CUR_ID = 0, CUR_PRICE = 0, CUR_STOCK = 0, CUR_IN_CART = 0, QTY_INPUT = 0, AVAILABLE = 0;
    int CUR_IS_BOOK = 1, PRINT_RETURN = 1;
    std::string CUR_NAME;

    // Price of each book (pesos)
    // Filipino Literature (FL)
    int FL_PRICE_1 = 250, FL_PRICE_2 = 250, FL_PRICE_3 = 150, FL_PRICE_4 = 150, FL_PRICE_5 = 320, FL_PRICE_6 = 350, FL_PRICE_7 = 300, FL_PRICE_8 = 350, FL_PRICE_9 = 450;
    // Classic and Literary Fiction (CLF)
    int CLF_PRICE_1 = 380, CLF_PRICE_2 = 300, CLF_PRICE_3 = 280, CLF_PRICE_4 = 290, CLF_PRICE_5 = 220;
    // Fantasy, Adventure and Mystery (FAM)
    int FAM_PRICE_1 = 480, FAM_PRICE_2 = 450, FAM_PRICE_3 = 420, FAM_PRICE_4 = 350, FAM_PRICE_5 = 250, FAM_PRICE_6 = 400;
    // Self-Help and Business (SHB)
    int SHB_PRICE_1 = 550, SHB_PRICE_2 = 400, SHB_PRICE_3 = 520, SHB_PRICE_4 = 380, SHB_PRICE_5 = 330;
    // Computer Science and Math (CSM)
    int CSM_PRICE_1 = 1800, CSM_PRICE_2 = 1650, CSM_PRICE_3 = 1200, CSM_PRICE_4 = 2200, CSM_PRICE_5 = 1900;
    // Price of each school supply (pesos)
    // Writing Tools (WT)
    int WT_PRICE_1 = 45, WT_PRICE_2 = 80, WT_PRICE_3 = 95, WT_PRICE_4 = 35, WT_PRICE_5 = 25;
    // Paper and Notebooks (PN)
    int PN_PRICE_1 = 60, PN_PRICE_2 = 40, PN_PRICE_3 = 55, PN_PRICE_4 = 280, PN_PRICE_5 = 50;
    // Art and Craft (AC)
    int AC_PRICE_1 = 75, AC_PRICE_2 = 110, AC_PRICE_3 = 150, AC_PRICE_4 = 45, AC_PRICE_5 = 60;
    // Bags and Desk Items (BDI)
    int BDI_PRICE_1 = 650, BDI_PRICE_2 = 90, BDI_PRICE_3 = 20, BDI_PRICE_4 = 550, BDI_PRICE_5 = 120;

    // Stock of each book (every book starts with 10 copies)
    // Filipino Literature (FL)
    int FL_STOCK_1 = 10, FL_STOCK_2 = 10, FL_STOCK_3 = 10, FL_STOCK_4 = 10, FL_STOCK_5 = 10, FL_STOCK_6 = 10, FL_STOCK_7 = 10, FL_STOCK_8 = 10, FL_STOCK_9 = 10;
    // Classic and Literary Fiction (CLF)
    int CLF_STOCK_1 = 10, CLF_STOCK_2 = 10, CLF_STOCK_3 = 10, CLF_STOCK_4 = 10, CLF_STOCK_5 = 10;
    // Fantasy, Adventure and Mystery (FAM)
    int FAM_STOCK_1 = 10, FAM_STOCK_2 = 10, FAM_STOCK_3 = 10, FAM_STOCK_4 = 10, FAM_STOCK_5 = 10, FAM_STOCK_6 = 10;
    // Self-Help and Business (SHB)
    int SHB_STOCK_1 = 10, SHB_STOCK_2 = 10, SHB_STOCK_3 = 10, SHB_STOCK_4 = 10, SHB_STOCK_5 = 10;
    // Computer Science and Math (CSM)
    int CSM_STOCK_1 = 10, CSM_STOCK_2 = 10, CSM_STOCK_3 = 10, CSM_STOCK_4 = 10, CSM_STOCK_5 = 10;
    // Stock of each school supply (every supply starts with 20 pieces)
    // Writing Tools (WT)
    int WT_STOCK_1 = 20, WT_STOCK_2 = 20, WT_STOCK_3 = 20, WT_STOCK_4 = 20, WT_STOCK_5 = 20;
    // Paper and Notebooks (PN)
    int PN_STOCK_1 = 20, PN_STOCK_2 = 20, PN_STOCK_3 = 20, PN_STOCK_4 = 20, PN_STOCK_5 = 20;
    // Art and Craft (AC)
    int AC_STOCK_1 = 20, AC_STOCK_2 = 20, AC_STOCK_3 = 20, AC_STOCK_4 = 20, AC_STOCK_5 = 20;
    // Bags and Desk Items (BDI)
    int BDI_STOCK_1 = 20, BDI_STOCK_2 = 20, BDI_STOCK_3 = 20, BDI_STOCK_4 = 20, BDI_STOCK_5 = 20;

    // Quantity to buy of each book (starts at 0)
    // Filipino Literature (FL)
    int FL_BUY_QTY_1 = 0, FL_BUY_QTY_2 = 0, FL_BUY_QTY_3 = 0, FL_BUY_QTY_4 = 0, FL_BUY_QTY_5 = 0, FL_BUY_QTY_6 = 0, FL_BUY_QTY_7 = 0, FL_BUY_QTY_8 = 0, FL_BUY_QTY_9 = 0;
    // Classic and Literary Fiction (CLF)
    int CLF_BUY_QTY_1 = 0, CLF_BUY_QTY_2 = 0, CLF_BUY_QTY_3 = 0, CLF_BUY_QTY_4 = 0, CLF_BUY_QTY_5 = 0;
    // Fantasy, Adventure and Mystery (FAM)
    int FAM_BUY_QTY_1 = 0, FAM_BUY_QTY_2 = 0, FAM_BUY_QTY_3 = 0, FAM_BUY_QTY_4 = 0, FAM_BUY_QTY_5 = 0, FAM_BUY_QTY_6 = 0;
    // Self-Help and Business (SHB)
    int SHB_BUY_QTY_1 = 0, SHB_BUY_QTY_2 = 0, SHB_BUY_QTY_3 = 0, SHB_BUY_QTY_4 = 0, SHB_BUY_QTY_5 = 0;
    // Computer Science and Math (CSM)
    int CSM_BUY_QTY_1 = 0, CSM_BUY_QTY_2 = 0, CSM_BUY_QTY_3 = 0, CSM_BUY_QTY_4 = 0, CSM_BUY_QTY_5 = 0;
    // Quantity to buy of each school supply (starts at 0)
    // Writing Tools (WT)
    int WT_BUY_QTY_1 = 0, WT_BUY_QTY_2 = 0, WT_BUY_QTY_3 = 0, WT_BUY_QTY_4 = 0, WT_BUY_QTY_5 = 0;
    // Paper and Notebooks (PN)
    int PN_BUY_QTY_1 = 0, PN_BUY_QTY_2 = 0, PN_BUY_QTY_3 = 0, PN_BUY_QTY_4 = 0, PN_BUY_QTY_5 = 0;
    // Art and Craft (AC)
    int AC_BUY_QTY_1 = 0, AC_BUY_QTY_2 = 0, AC_BUY_QTY_3 = 0, AC_BUY_QTY_4 = 0, AC_BUY_QTY_5 = 0;
    // Bags and Desk Items (BDI)
    int BDI_BUY_QTY_1 = 0, BDI_BUY_QTY_2 = 0, BDI_BUY_QTY_3 = 0, BDI_BUY_QTY_4 = 0, BDI_BUY_QTY_5 = 0;

    //cart and check out
    int TOTAL1, TOTAL2, TOTAL3, TOTAL4, TOTAL5, TOTAL6, TOTAL7, TOTAL8, TOTAL9, TOTAL10;
    int TOTAL11, TOTAL12, TOTAL13, TOTAL14, TOTAL15, TOTAL16, TOTAL17, TOTAL18, TOTAL19, TOTAL20;
    int TOTAL21, TOTAL22, TOTAL23, TOTAL24, TOTAL25, TOTAL26, TOTAL27, TOTAL28, TOTAL29, TOTAL30;
    int TOTAL31, TOTAL32, TOTAL33, TOTAL34, TOTAL35, TOTAL36, TOTAL37, TOTAL38, TOTAL39, TOTAL40;
    int TOTAL41, TOTAL42, TOTAL43, TOTAL44, TOTAL45, TOTAL46, TOTAL47, TOTAL48, TOTAL49, TOTAL50;

    int Over_all, RIDDLE_ANSWER, Discount_won = 0;
    std::string Contact_number;
    std::string Address, Full_name;
    double Total_payment, Discount_amount = 0, Final_total = 0, Change = 0;
    double DISCOUNT = 0.10;

    // Name of each book
    // Filipino Literature (FL)
    std::string FL_NAME_1 = "Noli Me Tangere";
    std::string FL_NAME_2 = "El Filibusterismo";
    std::string FL_NAME_3 = "Florante at Laura";
    std::string FL_NAME_4 = "Ibong Adarna";
    std::string FL_NAME_5 = "Dekada '70";
    std::string FL_NAME_6 = "Gapo";
    std::string FL_NAME_7 = "Banaag at Sikat";
    std::string FL_NAME_8 = "Mga Ibong Mandaragit";
    std::string FL_NAME_9 = "Ilustrado";
    // Classic and Literary Fiction (CLF)
    std::string CLF_NAME_1 = "To Kill a Mockingbird";
    std::string CLF_NAME_2 = "1984";
    std::string CLF_NAME_3 = "The Great Gatsby";
    std::string CLF_NAME_4 = "Pride and Prejudice";
    std::string CLF_NAME_5 = "Animal Farm";
    // Fantasy, Adventure and Mystery (FAM)
    std::string FAM_NAME_1 = "Harry Potter and the Sorcerer's Stone";
    std::string FAM_NAME_2 = "The Hobbit";
    std::string FAM_NAME_3 = "The Hunger Games";
    std::string FAM_NAME_4 = "The Alchemist";
    std::string FAM_NAME_5 = "The Little Prince";
    std::string FAM_NAME_6 = "Smaller and Smaller Circles";
    // Self-Help and Business (SHB)
    std::string SHB_NAME_1 = "Atomic Habits";
    std::string SHB_NAME_2 = "Rich Dad Poor Dad";
    std::string SHB_NAME_3 = "The 7 Habits of Highly Effective People";
    std::string SHB_NAME_4 = "How to Win Friends and Influence People";
    std::string SHB_NAME_5 = "Think and Grow Rich";
    // Computer Science and Math (CSM)
    std::string CSM_NAME_1 = "The C++ Programming Language";
    std::string CSM_NAME_2 = "C++ Primer";
    std::string CSM_NAME_3 = "Clean Code";
    std::string CSM_NAME_4 = "Introduction to Algorithms";
    std::string CSM_NAME_5 = "Discrete Mathematics and Its Applications";

    // Name of each school supply
    // Writing Tools (WT)
    std::string WT_NAME_1 = "Ballpoint Pen (Pack of 5)";
    std::string WT_NAME_2 = "Pencil No. 2 (Box of 12)";
    std::string WT_NAME_3 = "Highlighter Set (4 colors)";
    std::string WT_NAME_4 = "Permanent Marker (Black)";
    std::string WT_NAME_5 = "Eraser and Sharpener Set";
    // Paper and Notebooks (PN)
    std::string PN_NAME_1 = "Spiral Notebook (80 leaves)";
    std::string PN_NAME_2 = "Composition Notebook";
    std::string PN_NAME_3 = "Yellow Pad Paper (Pad of 80)";
    std::string PN_NAME_4 = "Bond Paper A4 (Ream of 500)";
    std::string PN_NAME_5 = "Sticky Notes (Pack of 6)";
    // Art and Craft (AC)
    std::string AC_NAME_1 = "Crayons (Box of 24)";
    std::string AC_NAME_2 = "Colored Pencils (Set of 12)";
    std::string AC_NAME_3 = "Watercolor Set (12 colors)";
    std::string AC_NAME_4 = "Scissors (Safety Type)";
    std::string AC_NAME_5 = "Glue Stick (Pack of 3)";
    // Bags and Desk Items (BDI)
    std::string BDI_NAME_1 = "School Backpack";
    std::string BDI_NAME_2 = "Pencil Case";
    std::string BDI_NAME_3 = "Ruler (30 cm)";
    std::string BDI_NAME_4 = "Scientific Calculator";
    std::string BDI_NAME_5 = "Stapler with Staples";

    std::cout << std::fixed << std::setprecision(2);

main_menu:
    //FORMULA
    TOTAL1 = FL_PRICE_1 * FL_BUY_QTY_1;
    TOTAL2 = FL_PRICE_2 * FL_BUY_QTY_2;
    TOTAL3 = FL_PRICE_3 * FL_BUY_QTY_3;
    TOTAL4 = FL_PRICE_4 * FL_BUY_QTY_4;
    TOTAL5 = FL_PRICE_5 * FL_BUY_QTY_5;
    TOTAL6 = FL_PRICE_6 * FL_BUY_QTY_6;
    TOTAL7 = FL_PRICE_7 * FL_BUY_QTY_7;
    TOTAL8 = FL_PRICE_8 * FL_BUY_QTY_8;
    TOTAL9 = FL_PRICE_9 * FL_BUY_QTY_9;
    TOTAL10 = CLF_PRICE_1 * CLF_BUY_QTY_1;
    TOTAL11 = CLF_PRICE_2 * CLF_BUY_QTY_2;
    TOTAL12 = CLF_PRICE_3 * CLF_BUY_QTY_3;
    TOTAL13 = CLF_PRICE_4 * CLF_BUY_QTY_4;
    TOTAL14 = CLF_PRICE_5 * CLF_BUY_QTY_5;
    TOTAL15 = FAM_PRICE_1 * FAM_BUY_QTY_1;
    TOTAL16 = FAM_PRICE_2 * FAM_BUY_QTY_2;
    TOTAL17 = FAM_PRICE_3 * FAM_BUY_QTY_3;
    TOTAL18 = FAM_PRICE_4 * FAM_BUY_QTY_4;
    TOTAL19 = FAM_PRICE_5 * FAM_BUY_QTY_5;
    TOTAL20 = FAM_PRICE_6 * FAM_BUY_QTY_6;
    TOTAL21 = SHB_PRICE_1 * SHB_BUY_QTY_1;
    TOTAL22 = SHB_PRICE_2 * SHB_BUY_QTY_2;
    TOTAL23 = SHB_PRICE_3 * SHB_BUY_QTY_3;
    TOTAL24 = SHB_PRICE_4 * SHB_BUY_QTY_4;
    TOTAL25 = SHB_PRICE_5 * SHB_BUY_QTY_5;
    TOTAL26 = CSM_PRICE_1 * CSM_BUY_QTY_1;
    TOTAL27 = CSM_PRICE_2 * CSM_BUY_QTY_2;
    TOTAL28 = CSM_PRICE_3 * CSM_BUY_QTY_3;
    TOTAL29 = CSM_PRICE_4 * CSM_BUY_QTY_4;
    TOTAL30 = CSM_PRICE_5 * CSM_BUY_QTY_5;
    TOTAL31 = WT_PRICE_1 * WT_BUY_QTY_1;
    TOTAL32 = WT_PRICE_2 * WT_BUY_QTY_2;
    TOTAL33 = WT_PRICE_3 * WT_BUY_QTY_3;
    TOTAL34 = WT_PRICE_4 * WT_BUY_QTY_4;
    TOTAL35 = WT_PRICE_5 * WT_BUY_QTY_5;
    TOTAL36 = PN_PRICE_1 * PN_BUY_QTY_1;
    TOTAL37 = PN_PRICE_2 * PN_BUY_QTY_2;
    TOTAL38 = PN_PRICE_3 * PN_BUY_QTY_3;
    TOTAL39 = PN_PRICE_4 * PN_BUY_QTY_4;
    TOTAL40 = PN_PRICE_5 * PN_BUY_QTY_5;
    TOTAL41 = AC_PRICE_1 * AC_BUY_QTY_1;
    TOTAL42 = AC_PRICE_2 * AC_BUY_QTY_2;
    TOTAL43 = AC_PRICE_3 * AC_BUY_QTY_3;
    TOTAL44 = AC_PRICE_4 * AC_BUY_QTY_4;
    TOTAL45 = AC_PRICE_5 * AC_BUY_QTY_5;
    TOTAL46 = BDI_PRICE_1 * BDI_BUY_QTY_1;
    TOTAL47 = BDI_PRICE_2 * BDI_BUY_QTY_2;
    TOTAL48 = BDI_PRICE_3 * BDI_BUY_QTY_3;
    TOTAL49 = BDI_PRICE_4 * BDI_BUY_QTY_4;
    TOTAL50 = BDI_PRICE_5 * BDI_BUY_QTY_5;
    Over_all = TOTAL1 + TOTAL2 + TOTAL3 + TOTAL4 + TOTAL5 + TOTAL6 + TOTAL7 + TOTAL8 + TOTAL9 + TOTAL10 + TOTAL11 + TOTAL12 + TOTAL13 + TOTAL14 + TOTAL15 + TOTAL16 + TOTAL17 + TOTAL18 + TOTAL19 + TOTAL20 + TOTAL21 + TOTAL22 + TOTAL23 + TOTAL24 + TOTAL25 + TOTAL26 + TOTAL27 + TOTAL28 + TOTAL29 + TOTAL30 + TOTAL31 + TOTAL32 + TOTAL33 + TOTAL34 + TOTAL35 + TOTAL36 + TOTAL37 + TOTAL38 + TOTAL39 + TOTAL40 + TOTAL41 + TOTAL42 + TOTAL43 + TOTAL44 + TOTAL45 + TOTAL46 + TOTAL47 + TOTAL48 + TOTAL49 + TOTAL50;

    system("cls");
    std::cout << "=================================================================================" << std::endl;
    std::cout << "                     .-------------------.-------------------." << std::endl;
    std::cout << "                     |  ===============  |  ===============  |" << std::endl;
    std::cout << "                     |  ===============  |  ===============  |" << std::endl;
    std::cout << "                     |  ===========      |  ===========      |" << std::endl;
    std::cout << "                     |  ===============  |  ===============  |" << std::endl;
    std::cout << "                     |  ===========      |  ===========      |" << std::endl;
    std::cout << "                     |                   |                   |" << std::endl;
    std::cout << "                     '-------------------^-------------------'" << std::endl;
    std::cout << "                      `--------------------------------------'" << std::endl;
    std::cout << std::endl;
    std::cout << "                          ####   ###   ###  #   #  ####" << std::endl;
    std::cout << "                          #   # #   # #   # #  #  #" << std::endl;
    std::cout << "                          ####  #   # #   # ###    ###" << std::endl;
    std::cout << "                          #   # #   # #   # #  #      #" << std::endl;
    std::cout << "                          ####   ###   ###  #   # ####" << std::endl;
    std::cout << "                                      ~ & ~" << std::endl;
    std::cout << "                  #### #   # ####  ####  #     ##### #####  ####" << std::endl;
    std::cout << "                 #     #   # #   # #   # #       #   #     #" << std::endl;
    std::cout << "                  ###  #   # ####  ####  #       #   ####   ###" << std::endl;
    std::cout << "                     # #   # #     #     #       #   #         #" << std::endl;
    std::cout << "                 ####   ###  #     #     ##### ##### ##### ####" << std::endl;
    std::cout << std::endl;
    std::cout << "                       Your Books and School Supplies Store" << std::endl;
    std::cout << "=================================================================================" << std::endl;
    std::cout << std::endl;
    std::cout << " ___________________________________   ___________________________________" << std::endl;
    std::cout << ".-/|                                   \\ /                                   |\\-." << std::endl;
    std::cout << "||||                                    |  1. Books Menu                     ||||" << std::endl;
    std::cout << "||||                                    |  2. Supply Menu                    ||||" << std::endl;
    std::cout << "||||             MAIN MENU              |  3. View Cart                      ||||" << std::endl;
    std::cout << "||||                                    |  4. Checkout                       ||||" << std::endl;
    std::cout << "||||                                    |  5. Exit                           ||||" << std::endl;
    std::cout << "||||                                    |                                    ||||" << std::endl;
    std::cout << "||||             --==*==--              |             --==*==--              ||||" << std::endl;
    std::cout << "||||                                    |                                    ||||" << std::endl;
    std::cout << "||||                                    |                                    ||||" << std::endl;
    std::cout << "||||                                    |                                    ||||" << std::endl;
    std::cout << "||||___________________________________ | ___________________________________||||" << std::endl;
    std::cout << "||/====================================\\|/====================================\\||" << std::endl;
    std::cout << "`-------------------------------------~___~------------------------------------''" << std::endl;
    std::cout << std::endl;
    std::cout << "Enter your option: ";
    std::cin >> OPTION_MENU;
    if (OPTION_MENU == 1) goto genre_menu;
    if (OPTION_MENU == 2) goto supply_menu;
    if (OPTION_MENU == 3) goto Cart;
    if (OPTION_MENU == 4) goto check_out;
    if (OPTION_MENU == 5) goto exit_program;
    std::cout << std::endl;
    std::cout << "Invalid number! Please type one of the numbers shown in the menu." << std::endl;
    system("pause");
    goto main_menu;

genre_menu:
    system("cls");
    std::cout << " ___________________________________   ___________________________________" << std::endl;
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
    std::cout << "||||                                    |                                    ||||" << std::endl;
    std::cout << "||||___________________________________ | ___________________________________||||" << std::endl;
    std::cout << "||/====================================\\|/====================================\\||" << std::endl;
    std::cout << "`-------------------------------------~___~------------------------------------''" << std::endl;
    std::cout << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> GENRE_OPTION;
    if (GENRE_OPTION == 1) goto fl_list;
    if (GENRE_OPTION == 2) goto clf_list;
    if (GENRE_OPTION == 3) goto fam_list;
    if (GENRE_OPTION == 4) goto shb_list;
    if (GENRE_OPTION == 5) goto csm_list;
    if (GENRE_OPTION == 6) goto main_menu;
    std::cout << std::endl;
    std::cout << "Invalid number! Please type one of the numbers shown in the menu." << std::endl;
    system("pause");
    goto genre_menu;

supply_menu:
    system("cls");
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
    if (SUPPLY_OPTION == 1) goto wt_list;
    if (SUPPLY_OPTION == 2) goto pn_list;
    if (SUPPLY_OPTION == 3) goto ac_list;
    if (SUPPLY_OPTION == 4) goto bdi_list;
    if (SUPPLY_OPTION == 5) goto main_menu;
    std::cout << std::endl;
    std::cout << "Invalid number! Please type one of the numbers shown in the menu." << std::endl;
    system("pause");
    goto supply_menu;

fl_list:
    system("cls");
    std::cout << "--- FILIPINO LITERATURE ---" << std::endl;
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
    std::cout << "Press 0 to go back in genre menu: " << std::endl;
    std::cout << "Press 1 to add to cart: ";
    std::cin >> GENRE_RETURN;
    if (GENRE_RETURN == 0) goto genre_menu;
    if (GENRE_RETURN != 1){
    std::cout << std::endl;
    std::cout << "Invalid number! Please press 0 or 1." << std::endl;
    system("pause");
    goto fl_list;
    }
    std::cout << std::endl;
    std::cout << "Add to cart!" << std::endl;
    std::cout << "Enter the book number: ";
    std::cin >> BOOK_CHOICE;
    switch (BOOK_CHOICE){
        case 1:
            CUR_ID = 1;
            CUR_NAME = FL_NAME_1;
            CUR_PRICE = FL_PRICE_1;
            CUR_STOCK = FL_STOCK_1;
            CUR_IN_CART = FL_BUY_QTY_1;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 2:
            CUR_ID = 2;
            CUR_NAME = FL_NAME_2;
            CUR_PRICE = FL_PRICE_2;
            CUR_STOCK = FL_STOCK_2;
            CUR_IN_CART = FL_BUY_QTY_2;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 3:
            CUR_ID = 3;
            CUR_NAME = FL_NAME_3;
            CUR_PRICE = FL_PRICE_3;
            CUR_STOCK = FL_STOCK_3;
            CUR_IN_CART = FL_BUY_QTY_3;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 4:
            CUR_ID = 4;
            CUR_NAME = FL_NAME_4;
            CUR_PRICE = FL_PRICE_4;
            CUR_STOCK = FL_STOCK_4;
            CUR_IN_CART = FL_BUY_QTY_4;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 5:
            CUR_ID = 5;
            CUR_NAME = FL_NAME_5;
            CUR_PRICE = FL_PRICE_5;
            CUR_STOCK = FL_STOCK_5;
            CUR_IN_CART = FL_BUY_QTY_5;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 6:
            CUR_ID = 6;
            CUR_NAME = FL_NAME_6;
            CUR_PRICE = FL_PRICE_6;
            CUR_STOCK = FL_STOCK_6;
            CUR_IN_CART = FL_BUY_QTY_6;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 7:
            CUR_ID = 7;
            CUR_NAME = FL_NAME_7;
            CUR_PRICE = FL_PRICE_7;
            CUR_STOCK = FL_STOCK_7;
            CUR_IN_CART = FL_BUY_QTY_7;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 8:
            CUR_ID = 8;
            CUR_NAME = FL_NAME_8;
            CUR_PRICE = FL_PRICE_8;
            CUR_STOCK = FL_STOCK_8;
            CUR_IN_CART = FL_BUY_QTY_8;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 9:
            CUR_ID = 9;
            CUR_NAME = FL_NAME_9;
            CUR_PRICE = FL_PRICE_9;
            CUR_STOCK = FL_STOCK_9;
            CUR_IN_CART = FL_BUY_QTY_9;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        default:
            system("cls");
            std::cout << "Invalid number! Please type one of the numbers shown inside the [ ] brackets." << std::endl;
            system("pause");
            goto fl_list;
    }

clf_list:
    system("cls");
    std::cout << "--- CLASSIC AND LITERARY FICTION ---" << std::endl;
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
    std::cout << "Press 0 to go back in genre menu: " << std::endl;
    std::cout << "Press 1 to add to cart: ";
    std::cin >> GENRE_RETURN;
    if (GENRE_RETURN == 0) goto genre_menu;
    if (GENRE_RETURN != 1){
    std::cout << std::endl;
    std::cout << "Invalid number! Please press 0 or 1." << std::endl;
    system("pause");
    goto clf_list;
    }
    std::cout << std::endl;
    std::cout << "Add to cart!" << std::endl;
    std::cout << "Enter the book number: ";
    std::cin >> BOOK_CHOICE;
    switch (BOOK_CHOICE){
        case 10:
            CUR_ID = 10;
            CUR_NAME = CLF_NAME_1;
            CUR_PRICE = CLF_PRICE_1;
            CUR_STOCK = CLF_STOCK_1;
            CUR_IN_CART = CLF_BUY_QTY_1;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 11:
            CUR_ID = 11;
            CUR_NAME = CLF_NAME_2;
            CUR_PRICE = CLF_PRICE_2;
            CUR_STOCK = CLF_STOCK_2;
            CUR_IN_CART = CLF_BUY_QTY_2;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 12:
            CUR_ID = 12;
            CUR_NAME = CLF_NAME_3;
            CUR_PRICE = CLF_PRICE_3;
            CUR_STOCK = CLF_STOCK_3;
            CUR_IN_CART = CLF_BUY_QTY_3;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 13:
            CUR_ID = 13;
            CUR_NAME = CLF_NAME_4;
            CUR_PRICE = CLF_PRICE_4;
            CUR_STOCK = CLF_STOCK_4;
            CUR_IN_CART = CLF_BUY_QTY_4;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 14:
            CUR_ID = 14;
            CUR_NAME = CLF_NAME_5;
            CUR_PRICE = CLF_PRICE_5;
            CUR_STOCK = CLF_STOCK_5;
            CUR_IN_CART = CLF_BUY_QTY_5;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        default:
            system("cls");
            std::cout << "Invalid number! Please type one of the numbers shown inside the [ ] brackets." << std::endl;
            system("pause");
            goto clf_list;
    }

fam_list:
    system("cls");
    std::cout << "--- FANTASY, ADVENTURE AND MYSTERY ---" << std::endl;
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
    std::cout << "Press 0 to go back in genre menu: " << std::endl;
    std::cout << "Press 1 to add to cart: ";
    std::cin >> GENRE_RETURN;
    if (GENRE_RETURN == 0) goto genre_menu;
    if (GENRE_RETURN != 1){
    std::cout << std::endl;
    std::cout << "Invalid number! Please press 0 or 1." << std::endl;
    system("pause");
    goto fam_list;
    }
    std::cout << std::endl;
    std::cout << "Add to cart!" << std::endl;
    std::cout << "Enter the book number: ";
    std::cin >> BOOK_CHOICE;
    switch (BOOK_CHOICE){
        case 15:
            CUR_ID = 15;
            CUR_NAME = FAM_NAME_1;
            CUR_PRICE = FAM_PRICE_1;
            CUR_STOCK = FAM_STOCK_1;
            CUR_IN_CART = FAM_BUY_QTY_1;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 16:
            CUR_ID = 16;
            CUR_NAME = FAM_NAME_2;
            CUR_PRICE = FAM_PRICE_2;
            CUR_STOCK = FAM_STOCK_2;
            CUR_IN_CART = FAM_BUY_QTY_2;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 17:
            CUR_ID = 17;
            CUR_NAME = FAM_NAME_3;
            CUR_PRICE = FAM_PRICE_3;
            CUR_STOCK = FAM_STOCK_3;
            CUR_IN_CART = FAM_BUY_QTY_3;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 18:
            CUR_ID = 18;
            CUR_NAME = FAM_NAME_4;
            CUR_PRICE = FAM_PRICE_4;
            CUR_STOCK = FAM_STOCK_4;
            CUR_IN_CART = FAM_BUY_QTY_4;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 19:
            CUR_ID = 19;
            CUR_NAME = FAM_NAME_5;
            CUR_PRICE = FAM_PRICE_5;
            CUR_STOCK = FAM_STOCK_5;
            CUR_IN_CART = FAM_BUY_QTY_5;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 20:
            CUR_ID = 20;
            CUR_NAME = FAM_NAME_6;
            CUR_PRICE = FAM_PRICE_6;
            CUR_STOCK = FAM_STOCK_6;
            CUR_IN_CART = FAM_BUY_QTY_6;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        default:
            system("cls");
            std::cout << "Invalid number! Please type one of the numbers shown inside the [ ] brackets." << std::endl;
            system("pause");
            goto fam_list;
    }

shb_list:
    system("cls");
    std::cout << "--- SELF-HELP AND BUSINESS ---" << std::endl;
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
    std::cout << "Press 0 to go back in genre menu: " << std::endl;
    std::cout << "Press 1 to add to cart: ";
    std::cin >> GENRE_RETURN;
    if (GENRE_RETURN == 0) goto genre_menu;
    if (GENRE_RETURN != 1){
    std::cout << std::endl;
    std::cout << "Invalid number! Please press 0 or 1." << std::endl;
    system("pause");
    goto shb_list;
    }
    std::cout << std::endl;
    std::cout << "Add to cart!" << std::endl;
    std::cout << "Enter the book number: ";
    std::cin >> BOOK_CHOICE;
    switch (BOOK_CHOICE){
        case 21:
            CUR_ID = 21;
            CUR_NAME = SHB_NAME_1;
            CUR_PRICE = SHB_PRICE_1;
            CUR_STOCK = SHB_STOCK_1;
            CUR_IN_CART = SHB_BUY_QTY_1;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 22:
            CUR_ID = 22;
            CUR_NAME = SHB_NAME_2;
            CUR_PRICE = SHB_PRICE_2;
            CUR_STOCK = SHB_STOCK_2;
            CUR_IN_CART = SHB_BUY_QTY_2;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 23:
            CUR_ID = 23;
            CUR_NAME = SHB_NAME_3;
            CUR_PRICE = SHB_PRICE_3;
            CUR_STOCK = SHB_STOCK_3;
            CUR_IN_CART = SHB_BUY_QTY_3;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 24:
            CUR_ID = 24;
            CUR_NAME = SHB_NAME_4;
            CUR_PRICE = SHB_PRICE_4;
            CUR_STOCK = SHB_STOCK_4;
            CUR_IN_CART = SHB_BUY_QTY_4;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 25:
            CUR_ID = 25;
            CUR_NAME = SHB_NAME_5;
            CUR_PRICE = SHB_PRICE_5;
            CUR_STOCK = SHB_STOCK_5;
            CUR_IN_CART = SHB_BUY_QTY_5;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        default:
            system("cls");
            std::cout << "Invalid number! Please type one of the numbers shown inside the [ ] brackets." << std::endl;
            system("pause");
            goto shb_list;
    }

csm_list:
    system("cls");
    std::cout << "--- COMPUTER SCIENCE AND MATH ---" << std::endl;
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
    std::cout << "Press 0 to go back in genre menu: " << std::endl;
    std::cout << "Press 1 to add to cart: ";
    std::cin >> GENRE_RETURN;
    if (GENRE_RETURN == 0) goto genre_menu;
    if (GENRE_RETURN != 1){
    std::cout << std::endl;
    std::cout << "Invalid number! Please press 0 or 1." << std::endl;
    system("pause");
    goto csm_list;
    }
    std::cout << std::endl;
    std::cout << "Add to cart!" << std::endl;
    std::cout << "Enter the book number: ";
    std::cin >> BOOK_CHOICE;
    switch (BOOK_CHOICE){
        case 26:
            CUR_ID = 26;
            CUR_NAME = CSM_NAME_1;
            CUR_PRICE = CSM_PRICE_1;
            CUR_STOCK = CSM_STOCK_1;
            CUR_IN_CART = CSM_BUY_QTY_1;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 27:
            CUR_ID = 27;
            CUR_NAME = CSM_NAME_2;
            CUR_PRICE = CSM_PRICE_2;
            CUR_STOCK = CSM_STOCK_2;
            CUR_IN_CART = CSM_BUY_QTY_2;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 28:
            CUR_ID = 28;
            CUR_NAME = CSM_NAME_3;
            CUR_PRICE = CSM_PRICE_3;
            CUR_STOCK = CSM_STOCK_3;
            CUR_IN_CART = CSM_BUY_QTY_3;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 29:
            CUR_ID = 29;
            CUR_NAME = CSM_NAME_4;
            CUR_PRICE = CSM_PRICE_4;
            CUR_STOCK = CSM_STOCK_4;
            CUR_IN_CART = CSM_BUY_QTY_4;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        case 30:
            CUR_ID = 30;
            CUR_NAME = CSM_NAME_5;
            CUR_PRICE = CSM_PRICE_5;
            CUR_STOCK = CSM_STOCK_5;
            CUR_IN_CART = CSM_BUY_QTY_5;
            CUR_IS_BOOK = 1;
            goto add_to_cart;
        default:
            system("cls");
            std::cout << "Invalid number! Please type one of the numbers shown inside the [ ] brackets." << std::endl;
            system("pause");
            goto csm_list;
    }

wt_list:
    system("cls");
    std::cout << "--- WRITING TOOLS ---" << std::endl;
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
    std::cout << "Press 0 to go back in supply menu: " << std::endl;
    std::cout << "Press 1 to add to cart: ";
    std::cin >> SUPPLY_RETURN;
    if (SUPPLY_RETURN == 0) goto supply_menu;
    if (SUPPLY_RETURN != 1){
    std::cout << std::endl;
    std::cout << "Invalid number! Please press 0 or 1." << std::endl;
    system("pause");
    goto wt_list;
    }
    std::cout << std::endl;
    std::cout << "Add to cart!" << std::endl;
    std::cout << "Enter the item number: ";
    std::cin >> SUPPLY_CHOICE;
    switch (SUPPLY_CHOICE){
        case 31:
            CUR_ID = 31;
            CUR_NAME = WT_NAME_1;
            CUR_PRICE = WT_PRICE_1;
            CUR_STOCK = WT_STOCK_1;
            CUR_IN_CART = WT_BUY_QTY_1;
            CUR_IS_BOOK = 0;
            goto add_to_cart;
        case 32:
            CUR_ID = 32;
            CUR_NAME = WT_NAME_2;
            CUR_PRICE = WT_PRICE_2;
            CUR_STOCK = WT_STOCK_2;
            CUR_IN_CART = WT_BUY_QTY_2;
            CUR_IS_BOOK = 0;
            goto add_to_cart;
        case 33:
            CUR_ID = 33;
            CUR_NAME = WT_NAME_3;
            CUR_PRICE = WT_PRICE_3;
            CUR_STOCK = WT_STOCK_3;
            CUR_IN_CART = WT_BUY_QTY_3;
            CUR_IS_BOOK = 0;
            goto add_to_cart;
        case 34:
            CUR_ID = 34;
            CUR_NAME = WT_NAME_4;
            CUR_PRICE = WT_PRICE_4;
            CUR_STOCK = WT_STOCK_4;
            CUR_IN_CART = WT_BUY_QTY_4;
            CUR_IS_BOOK = 0;
            goto add_to_cart;
        case 35:
            CUR_ID = 35;
            CUR_NAME = WT_NAME_5;
            CUR_PRICE = WT_PRICE_5;
            CUR_STOCK = WT_STOCK_5;
            CUR_IN_CART = WT_BUY_QTY_5;
            CUR_IS_BOOK = 0;
            goto add_to_cart;
        default:
            system("cls");
            std::cout << "Invalid number! Please type one of the numbers shown inside the [ ] brackets." << std::endl;
            system("pause");
            goto wt_list;
    }

pn_list:
    system("cls");
    std::cout << "--- PAPER AND NOTEBOOKS ---" << std::endl;
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
    std::cout << "Press 0 to go back in supply menu: " << std::endl;
    std::cout << "Press 1 to add to cart: ";
    std::cin >> SUPPLY_RETURN;
    if (SUPPLY_RETURN == 0) goto supply_menu;
    if (SUPPLY_RETURN != 1){
    std::cout << std::endl;
    std::cout << "Invalid number! Please press 0 or 1." << std::endl;
    system("pause");
    goto pn_list;
    }
    std::cout << std::endl;
    std::cout << "Add to cart!" << std::endl;
    std::cout << "Enter the item number: ";
    std::cin >> SUPPLY_CHOICE;
    switch (SUPPLY_CHOICE){
        case 36:
            CUR_ID = 36;
            CUR_NAME = PN_NAME_1;
            CUR_PRICE = PN_PRICE_1;
            CUR_STOCK = PN_STOCK_1;
            CUR_IN_CART = PN_BUY_QTY_1;
            CUR_IS_BOOK = 0;
            goto add_to_cart;
        case 37:
            CUR_ID = 37;
            CUR_NAME = PN_NAME_2;
            CUR_PRICE = PN_PRICE_2;
            CUR_STOCK = PN_STOCK_2;
            CUR_IN_CART = PN_BUY_QTY_2;
            CUR_IS_BOOK = 0;
            goto add_to_cart;
        case 38:
            CUR_ID = 38;
            CUR_NAME = PN_NAME_3;
            CUR_PRICE = PN_PRICE_3;
            CUR_STOCK = PN_STOCK_3;
            CUR_IN_CART = PN_BUY_QTY_3;
            CUR_IS_BOOK = 0;
            goto add_to_cart;
        case 39:
            CUR_ID = 39;
            CUR_NAME = PN_NAME_4;
            CUR_PRICE = PN_PRICE_4;
            CUR_STOCK = PN_STOCK_4;
            CUR_IN_CART = PN_BUY_QTY_4;
            CUR_IS_BOOK = 0;
            goto add_to_cart;
        case 40:
            CUR_ID = 40;
            CUR_NAME = PN_NAME_5;
            CUR_PRICE = PN_PRICE_5;
            CUR_STOCK = PN_STOCK_5;
            CUR_IN_CART = PN_BUY_QTY_5;
            CUR_IS_BOOK = 0;
            goto add_to_cart;
        default:
            system("cls");
            std::cout << "Invalid number! Please type one of the numbers shown inside the [ ] brackets." << std::endl;
            system("pause");
            goto pn_list;
    }

ac_list:
    system("cls");
    std::cout << "--- ART AND CRAFT ---" << std::endl;
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
    std::cout << "Press 0 to go back in supply menu: " << std::endl;
    std::cout << "Press 1 to add to cart: ";
    std::cin >> SUPPLY_RETURN;
    if (SUPPLY_RETURN == 0) goto supply_menu;
    if (SUPPLY_RETURN != 1){
    std::cout << std::endl;
    std::cout << "Invalid number! Please press 0 or 1." << std::endl;
    system("pause");
    goto ac_list;
    }
    std::cout << std::endl;
    std::cout << "Add to cart!" << std::endl;
    std::cout << "Enter the item number: ";
    std::cin >> SUPPLY_CHOICE;
    switch (SUPPLY_CHOICE){
        case 41:
            CUR_ID = 41;
            CUR_NAME = AC_NAME_1;
            CUR_PRICE = AC_PRICE_1;
            CUR_STOCK = AC_STOCK_1;
            CUR_IN_CART = AC_BUY_QTY_1;
            CUR_IS_BOOK = 0;
            goto add_to_cart;
        case 42:
            CUR_ID = 42;
            CUR_NAME = AC_NAME_2;
            CUR_PRICE = AC_PRICE_2;
            CUR_STOCK = AC_STOCK_2;
            CUR_IN_CART = AC_BUY_QTY_2;
            CUR_IS_BOOK = 0;
            goto add_to_cart;
        case 43:
            CUR_ID = 43;
            CUR_NAME = AC_NAME_3;
            CUR_PRICE = AC_PRICE_3;
            CUR_STOCK = AC_STOCK_3;
            CUR_IN_CART = AC_BUY_QTY_3;
            CUR_IS_BOOK = 0;
            goto add_to_cart;
        case 44:
            CUR_ID = 44;
            CUR_NAME = AC_NAME_4;
            CUR_PRICE = AC_PRICE_4;
            CUR_STOCK = AC_STOCK_4;
            CUR_IN_CART = AC_BUY_QTY_4;
            CUR_IS_BOOK = 0;
            goto add_to_cart;
        case 45:
            CUR_ID = 45;
            CUR_NAME = AC_NAME_5;
            CUR_PRICE = AC_PRICE_5;
            CUR_STOCK = AC_STOCK_5;
            CUR_IN_CART = AC_BUY_QTY_5;
            CUR_IS_BOOK = 0;
            goto add_to_cart;
        default:
            system("cls");
            std::cout << "Invalid number! Please type one of the numbers shown inside the [ ] brackets." << std::endl;
            system("pause");
            goto ac_list;
    }

bdi_list:
    system("cls");
    std::cout << "--- BAGS AND DESK ITEMS ---" << std::endl;
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
    std::cout << "Press 0 to go back in supply menu: " << std::endl;
    std::cout << "Press 1 to add to cart: ";
    std::cin >> SUPPLY_RETURN;
    if (SUPPLY_RETURN == 0) goto supply_menu;
    if (SUPPLY_RETURN != 1){
    std::cout << std::endl;
    std::cout << "Invalid number! Please press 0 or 1." << std::endl;
    system("pause");
    goto bdi_list;
    }
    std::cout << std::endl;
    std::cout << "Add to cart!" << std::endl;
    std::cout << "Enter the item number: ";
    std::cin >> SUPPLY_CHOICE;
    switch (SUPPLY_CHOICE){
        case 46:
            CUR_ID = 46;
            CUR_NAME = BDI_NAME_1;
            CUR_PRICE = BDI_PRICE_1;
            CUR_STOCK = BDI_STOCK_1;
            CUR_IN_CART = BDI_BUY_QTY_1;
            CUR_IS_BOOK = 0;
            goto add_to_cart;
        case 47:
            CUR_ID = 47;
            CUR_NAME = BDI_NAME_2;
            CUR_PRICE = BDI_PRICE_2;
            CUR_STOCK = BDI_STOCK_2;
            CUR_IN_CART = BDI_BUY_QTY_2;
            CUR_IS_BOOK = 0;
            goto add_to_cart;
        case 48:
            CUR_ID = 48;
            CUR_NAME = BDI_NAME_3;
            CUR_PRICE = BDI_PRICE_3;
            CUR_STOCK = BDI_STOCK_3;
            CUR_IN_CART = BDI_BUY_QTY_3;
            CUR_IS_BOOK = 0;
            goto add_to_cart;
        case 49:
            CUR_ID = 49;
            CUR_NAME = BDI_NAME_4;
            CUR_PRICE = BDI_PRICE_4;
            CUR_STOCK = BDI_STOCK_4;
            CUR_IN_CART = BDI_BUY_QTY_4;
            CUR_IS_BOOK = 0;
            goto add_to_cart;
        case 50:
            CUR_ID = 50;
            CUR_NAME = BDI_NAME_5;
            CUR_PRICE = BDI_PRICE_5;
            CUR_STOCK = BDI_STOCK_5;
            CUR_IN_CART = BDI_BUY_QTY_5;
            CUR_IS_BOOK = 0;
            goto add_to_cart;
        default:
            system("cls");
            std::cout << "Invalid number! Please type one of the numbers shown inside the [ ] brackets." << std::endl;
            system("pause");
            goto bdi_list;
    }

add_to_cart:
    system("cls");
    AVAILABLE = CUR_STOCK - CUR_IN_CART;
    std::cout << "|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|" << std::endl;
    std::cout << "  ADD TO CART" << std::endl;
    std::cout << "=========================================================================================" << std::endl;
    std::cout << "You picked " << CUR_NAME << "!" << std::endl;
    std::cout << "-----------------------------------------------------------------------------------------" << std::endl;
    std::cout << "ITEM PRICE:\t\t" << "P" << CUR_PRICE << std::endl;
    std::cout << "STOCK AVAILABLE:\t" << AVAILABLE << std::endl;
    std::cout << "IN YOUR CART:\t\t" << CUR_IN_CART << std::endl;
    std::cout << "=========================================================================================" << std::endl;
    std::cout << std::endl;
    if (AVAILABLE <= 0){
        std::cout << "Out of Stock!" << std::endl;
        std::cout << "All of our copies are already in your cart." << std::endl;
        system("pause");
        if (CUR_IS_BOOK == 1) goto genre_menu;
        goto supply_menu;
    }
    std::cout << "Enter the quantity (0 to cancel): ";
    std::cin >> QTY_INPUT;
    if (QTY_INPUT == 0){
        if (CUR_IS_BOOK == 1) goto genre_menu;
        goto supply_menu;
    }
    if (QTY_INPUT < 0){
    std::cout << std::endl;
    std::cout << "Invalid number! Please type a positive quantity." << std::endl;
    system("pause");
    goto add_to_cart;
    }
    if (QTY_INPUT > AVAILABLE){
        system("cls");
        std::cout << "Out of Stock!" << std::endl;
        std::cout << "We have only " << AVAILABLE << " stock left!" << std::endl;
        std::cout << "Press any key to redo the quantity to buy!" << std::endl;
        system("pause");
        goto add_to_cart;
    }

    CUR_IN_CART = CUR_IN_CART + QTY_INPUT;
    switch (CUR_ID){
        case 1: FL_BUY_QTY_1 = CUR_IN_CART; break;
        case 2: FL_BUY_QTY_2 = CUR_IN_CART; break;
        case 3: FL_BUY_QTY_3 = CUR_IN_CART; break;
        case 4: FL_BUY_QTY_4 = CUR_IN_CART; break;
        case 5: FL_BUY_QTY_5 = CUR_IN_CART; break;
        case 6: FL_BUY_QTY_6 = CUR_IN_CART; break;
        case 7: FL_BUY_QTY_7 = CUR_IN_CART; break;
        case 8: FL_BUY_QTY_8 = CUR_IN_CART; break;
        case 9: FL_BUY_QTY_9 = CUR_IN_CART; break;
        case 10: CLF_BUY_QTY_1 = CUR_IN_CART; break;
        case 11: CLF_BUY_QTY_2 = CUR_IN_CART; break;
        case 12: CLF_BUY_QTY_3 = CUR_IN_CART; break;
        case 13: CLF_BUY_QTY_4 = CUR_IN_CART; break;
        case 14: CLF_BUY_QTY_5 = CUR_IN_CART; break;
        case 15: FAM_BUY_QTY_1 = CUR_IN_CART; break;
        case 16: FAM_BUY_QTY_2 = CUR_IN_CART; break;
        case 17: FAM_BUY_QTY_3 = CUR_IN_CART; break;
        case 18: FAM_BUY_QTY_4 = CUR_IN_CART; break;
        case 19: FAM_BUY_QTY_5 = CUR_IN_CART; break;
        case 20: FAM_BUY_QTY_6 = CUR_IN_CART; break;
        case 21: SHB_BUY_QTY_1 = CUR_IN_CART; break;
        case 22: SHB_BUY_QTY_2 = CUR_IN_CART; break;
        case 23: SHB_BUY_QTY_3 = CUR_IN_CART; break;
        case 24: SHB_BUY_QTY_4 = CUR_IN_CART; break;
        case 25: SHB_BUY_QTY_5 = CUR_IN_CART; break;
        case 26: CSM_BUY_QTY_1 = CUR_IN_CART; break;
        case 27: CSM_BUY_QTY_2 = CUR_IN_CART; break;
        case 28: CSM_BUY_QTY_3 = CUR_IN_CART; break;
        case 29: CSM_BUY_QTY_4 = CUR_IN_CART; break;
        case 30: CSM_BUY_QTY_5 = CUR_IN_CART; break;
        case 31: WT_BUY_QTY_1 = CUR_IN_CART; break;
        case 32: WT_BUY_QTY_2 = CUR_IN_CART; break;
        case 33: WT_BUY_QTY_3 = CUR_IN_CART; break;
        case 34: WT_BUY_QTY_4 = CUR_IN_CART; break;
        case 35: WT_BUY_QTY_5 = CUR_IN_CART; break;
        case 36: PN_BUY_QTY_1 = CUR_IN_CART; break;
        case 37: PN_BUY_QTY_2 = CUR_IN_CART; break;
        case 38: PN_BUY_QTY_3 = CUR_IN_CART; break;
        case 39: PN_BUY_QTY_4 = CUR_IN_CART; break;
        case 40: PN_BUY_QTY_5 = CUR_IN_CART; break;
        case 41: AC_BUY_QTY_1 = CUR_IN_CART; break;
        case 42: AC_BUY_QTY_2 = CUR_IN_CART; break;
        case 43: AC_BUY_QTY_3 = CUR_IN_CART; break;
        case 44: AC_BUY_QTY_4 = CUR_IN_CART; break;
        case 45: AC_BUY_QTY_5 = CUR_IN_CART; break;
        case 46: BDI_BUY_QTY_1 = CUR_IN_CART; break;
        case 47: BDI_BUY_QTY_2 = CUR_IN_CART; break;
        case 48: BDI_BUY_QTY_3 = CUR_IN_CART; break;
        case 49: BDI_BUY_QTY_4 = CUR_IN_CART; break;
        case 50: BDI_BUY_QTY_5 = CUR_IN_CART; break;
    }

    system("cls");
    std::cout << "|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|" << std::endl;
    std::cout << "  ADD TO CART" << std::endl;
    std::cout << "=========================================================================================" << std::endl;
    std::cout << QTY_INPUT << " pieces of " << CUR_NAME << " is added to cart successfully!" << std::endl;
    std::cout << "-----------------------------------------------------------------------------------------" << std::endl;
    std::cout << "QUANTITY IN CART:\t" << CUR_IN_CART << std::endl;
    std::cout << "ITEM PRICE:\t\t" << "P" << CUR_PRICE * CUR_IN_CART << std::endl;
    std::cout << "=========================================================================================" << std::endl;
    std::cout << std::endl;
add_return_prompt:
    std::cout << "Press 1 for main menu!" << std::endl;
    if (CUR_IS_BOOK == 1) std::cout << "Press 2 for genre menu!" << std::endl;
    else std::cout << "Press 2 for supply menu!" << std::endl;
    std::cin >> ADD_TO_CART_RETURN_CHOICE;
    if (ADD_TO_CART_RETURN_CHOICE == 1) goto main_menu;
    if (ADD_TO_CART_RETURN_CHOICE == 2){
        if (CUR_IS_BOOK == 1) goto genre_menu;
        goto supply_menu;
    }
    goto add_return_prompt;

Cart:
    system("cls");
    if (Over_all <= 0){
        std::cout << "|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|" << std::endl;
        std::cout << "  CART" << std::endl;
        std::cout << "=========================================================================================" << std::endl;
        std::cout << "No Current Items In Cart." << std::endl;
        std::cout << "Press Enter To back to the Main Menu: " << std::endl;
        std::cout << "=========================================================================================" << std::endl;
        system("pause");
        goto main_menu;
    }
    std::cout << "|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|" << std::endl;
    std::cout << "  CART" << std::endl;
    std::cout << "=========================================================================================" << std::endl;
    std::cout << "ITEM NAME\t\t\t\t\tITEM QUANTITY\tITEM PRICE" << std::endl;
    std::cout << "-----------------------------------------------------------------------------------------" << std::endl;
    PRINT_RETURN = 1;
    goto print_items;
cart_items_done:
    std::cout << std::endl;
    std::cout << "-----------------------------------------------------------------------------------------" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\tTOTAL PRICE: " << "P" << Over_all << std::endl;
    std::cout << "=========================================================================================" << std::endl;
    std::cout << "\t\t\t\t\t\t\tPROCEED TO CHECK OUT? [Y/N]: ";
    std::cin >> Return;
    if (Return == 'y' || Return == 'Y') goto check_out;
    goto main_menu;

    //check-out
check_out:
    system("cls");
    if (Over_all <= 0){
        std::cout << "|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|" << std::endl;
        std::cout << "  CHECK OUT" << std::endl;
        std::cout << "=========================================================================================" << std::endl;
        std::cout << "No Current Items In Cart." << std::endl;
        std::cout << "Press Enter To back to the Main Menu: " << std::endl;
        std::cout << "=========================================================================================" << std::endl;
        system("pause");
        goto main_menu;
    }
    std::cout << "|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|" << std::endl;
    std::cout << "  CHECK OUT" << std::endl;
    std::cout << "=========================================================================================" << std::endl;
    std::cout << "ITEM NAME\t\t\t\t\tITEM QUANTITY\tITEM PRICE" << std::endl;
    std::cout << "-----------------------------------------------------------------------------------------" << std::endl;
    PRINT_RETURN = 2;
    goto print_items;
checkout_items_done:
    std::cout << std::endl;
    std::cout << std::endl;
    std::cin.ignore();
    std::cout << "Enter Full Name: ";
    std::getline(std::cin, Full_name);
    std::cout << "Enter Contact Number: ";
    std::cin >> Contact_number;
    std::cin.ignore();
    std::cout << "Enter Home Address: ";
    std::getline(std::cin, Address);
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "-----------------------------------------------------------------------------------------" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\tTOTAL PRICE: " << "P" << Over_all << std::endl;
    std::cout << "\t\t\t\t\t\t\tPress Enter to Pay" << std::endl;
    std::cout << "=========================================================================================" << std::endl;
    std::cout << std::endl;
    system("pause");

    system("cls");
    Discount_won = 0;
    Discount_amount = 0;
    Final_total = Over_all;
    std::cout << "TO GET A DISCOUNT, ANSWER THIS QUESTION: " << std::endl;
    system("pause");
    system("cls");
    std::cout << "WHAT IS THE DECIMAL NUMBER OF 11110011? ";
    std::cin >> RIDDLE_ANSWER;
    if (RIDDLE_ANSWER == 243){
        Discount_won = 1;
        Discount_amount = Over_all * DISCOUNT;
        Final_total = Over_all - Discount_amount;
        std::cout << "YOU WON A 10% DISCOUNT!!" << std::endl;
    }
    else{
        std::cout << "Sorry, wrong answer. No discount." << std::endl;
    }
    system("pause");

    //payment
redo_payment:
    system("cls");
    std::cout << "|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|" << std::endl;
    std::cout << "  PAYMENT" << std::endl;
    std::cout << "=========================================================================================" << std::endl;
    std::cout << "-----------------------------------------------------------------------------------------" << std::endl;
    if (Discount_won == 1){
        std::cout << "TOTAL PRICE: " << "P" << Over_all << std::endl;
        std::cout << "DISCOUNT (10%): " << "-P" << Discount_amount << std::endl;
    }
    std::cout << "TOTAL DUE: " << "P" << Final_total << std::endl;
    std::cout << "-----------------------------------------------------------------------------------------" << std::endl;
    std::cout << "ENTER YOUR PAYMENT: ";
    std::cin >> Total_payment;
    if (Total_payment < Final_total - 0.001){
        std::cout << "INSUFFICIENT AMOUNT!" << std::endl;
        system("pause");
        goto redo_payment;
    }
    Change = Total_payment - Final_total;

    //receipt
    system("cls");
    std::cout << "|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|" << std::endl;
    std::cout << "  RECEIPT" << std::endl;
    std::cout << "=========================================================================================" << std::endl;
    std::cout << "-----------------------------------------------------------------------------------------" << std::endl;
    std::cout << "STATUS: TO BE SHIPPED" << std::endl;
    std::cout << std::endl;
    std::cout << "DESTINATION: " << Address << std::endl;
    std::cout << "RECEIVER NAME: " << Full_name << std::endl;
    std::cout << "CONTACT NUMBER: " << Contact_number << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "-----------------------------------------------------------------------------------------" << std::endl;
    std::cout << "ITEM ORDERED\t\t\t\t\tITEM QUANTITY\tITEM PRICE" << std::endl;
    std::cout << "-----------------------------------------------------------------------------------------" << std::endl;
    PRINT_RETURN = 3;
    goto print_items;
receipt_items_done:
    std::cout << std::endl;
    std::cout << std::endl;
    if (Discount_won == 1){
        std::cout << "\t\t\t\t\t\t\t\tTOTAL PRICE: " << "P" << Over_all << std::endl;
        std::cout << "\t\t\t\t\t\t\t\tDISCOUNT (10%): " << "-P" << Discount_amount << std::endl;
    }
    std::cout << "\t\t\t\t\t\t\t\tTOTAL PAID: " << "P" << Final_total << std::endl;
    std::cout << "\t\t\t\t\t\t\t\tPAYMENT: " << "P" << Total_payment << std::endl;
    std::cout << "\t\t\t\t\t\t\t\tCHANGE: " << "P" << Change << std::endl;
    std::cout << std::endl;
    system("pause");

    FL_STOCK_1 = FL_STOCK_1 - FL_BUY_QTY_1;
    FL_BUY_QTY_1 = 0;
    FL_STOCK_2 = FL_STOCK_2 - FL_BUY_QTY_2;
    FL_BUY_QTY_2 = 0;
    FL_STOCK_3 = FL_STOCK_3 - FL_BUY_QTY_3;
    FL_BUY_QTY_3 = 0;
    FL_STOCK_4 = FL_STOCK_4 - FL_BUY_QTY_4;
    FL_BUY_QTY_4 = 0;
    FL_STOCK_5 = FL_STOCK_5 - FL_BUY_QTY_5;
    FL_BUY_QTY_5 = 0;
    FL_STOCK_6 = FL_STOCK_6 - FL_BUY_QTY_6;
    FL_BUY_QTY_6 = 0;
    FL_STOCK_7 = FL_STOCK_7 - FL_BUY_QTY_7;
    FL_BUY_QTY_7 = 0;
    FL_STOCK_8 = FL_STOCK_8 - FL_BUY_QTY_8;
    FL_BUY_QTY_8 = 0;
    FL_STOCK_9 = FL_STOCK_9 - FL_BUY_QTY_9;
    FL_BUY_QTY_9 = 0;
    CLF_STOCK_1 = CLF_STOCK_1 - CLF_BUY_QTY_1;
    CLF_BUY_QTY_1 = 0;
    CLF_STOCK_2 = CLF_STOCK_2 - CLF_BUY_QTY_2;
    CLF_BUY_QTY_2 = 0;
    CLF_STOCK_3 = CLF_STOCK_3 - CLF_BUY_QTY_3;
    CLF_BUY_QTY_3 = 0;
    CLF_STOCK_4 = CLF_STOCK_4 - CLF_BUY_QTY_4;
    CLF_BUY_QTY_4 = 0;
    CLF_STOCK_5 = CLF_STOCK_5 - CLF_BUY_QTY_5;
    CLF_BUY_QTY_5 = 0;
    FAM_STOCK_1 = FAM_STOCK_1 - FAM_BUY_QTY_1;
    FAM_BUY_QTY_1 = 0;
    FAM_STOCK_2 = FAM_STOCK_2 - FAM_BUY_QTY_2;
    FAM_BUY_QTY_2 = 0;
    FAM_STOCK_3 = FAM_STOCK_3 - FAM_BUY_QTY_3;
    FAM_BUY_QTY_3 = 0;
    FAM_STOCK_4 = FAM_STOCK_4 - FAM_BUY_QTY_4;
    FAM_BUY_QTY_4 = 0;
    FAM_STOCK_5 = FAM_STOCK_5 - FAM_BUY_QTY_5;
    FAM_BUY_QTY_5 = 0;
    FAM_STOCK_6 = FAM_STOCK_6 - FAM_BUY_QTY_6;
    FAM_BUY_QTY_6 = 0;
    SHB_STOCK_1 = SHB_STOCK_1 - SHB_BUY_QTY_1;
    SHB_BUY_QTY_1 = 0;
    SHB_STOCK_2 = SHB_STOCK_2 - SHB_BUY_QTY_2;
    SHB_BUY_QTY_2 = 0;
    SHB_STOCK_3 = SHB_STOCK_3 - SHB_BUY_QTY_3;
    SHB_BUY_QTY_3 = 0;
    SHB_STOCK_4 = SHB_STOCK_4 - SHB_BUY_QTY_4;
    SHB_BUY_QTY_4 = 0;
    SHB_STOCK_5 = SHB_STOCK_5 - SHB_BUY_QTY_5;
    SHB_BUY_QTY_5 = 0;
    CSM_STOCK_1 = CSM_STOCK_1 - CSM_BUY_QTY_1;
    CSM_BUY_QTY_1 = 0;
    CSM_STOCK_2 = CSM_STOCK_2 - CSM_BUY_QTY_2;
    CSM_BUY_QTY_2 = 0;
    CSM_STOCK_3 = CSM_STOCK_3 - CSM_BUY_QTY_3;
    CSM_BUY_QTY_3 = 0;
    CSM_STOCK_4 = CSM_STOCK_4 - CSM_BUY_QTY_4;
    CSM_BUY_QTY_4 = 0;
    CSM_STOCK_5 = CSM_STOCK_5 - CSM_BUY_QTY_5;
    CSM_BUY_QTY_5 = 0;
    WT_STOCK_1 = WT_STOCK_1 - WT_BUY_QTY_1;
    WT_BUY_QTY_1 = 0;
    WT_STOCK_2 = WT_STOCK_2 - WT_BUY_QTY_2;
    WT_BUY_QTY_2 = 0;
    WT_STOCK_3 = WT_STOCK_3 - WT_BUY_QTY_3;
    WT_BUY_QTY_3 = 0;
    WT_STOCK_4 = WT_STOCK_4 - WT_BUY_QTY_4;
    WT_BUY_QTY_4 = 0;
    WT_STOCK_5 = WT_STOCK_5 - WT_BUY_QTY_5;
    WT_BUY_QTY_5 = 0;
    PN_STOCK_1 = PN_STOCK_1 - PN_BUY_QTY_1;
    PN_BUY_QTY_1 = 0;
    PN_STOCK_2 = PN_STOCK_2 - PN_BUY_QTY_2;
    PN_BUY_QTY_2 = 0;
    PN_STOCK_3 = PN_STOCK_3 - PN_BUY_QTY_3;
    PN_BUY_QTY_3 = 0;
    PN_STOCK_4 = PN_STOCK_4 - PN_BUY_QTY_4;
    PN_BUY_QTY_4 = 0;
    PN_STOCK_5 = PN_STOCK_5 - PN_BUY_QTY_5;
    PN_BUY_QTY_5 = 0;
    AC_STOCK_1 = AC_STOCK_1 - AC_BUY_QTY_1;
    AC_BUY_QTY_1 = 0;
    AC_STOCK_2 = AC_STOCK_2 - AC_BUY_QTY_2;
    AC_BUY_QTY_2 = 0;
    AC_STOCK_3 = AC_STOCK_3 - AC_BUY_QTY_3;
    AC_BUY_QTY_3 = 0;
    AC_STOCK_4 = AC_STOCK_4 - AC_BUY_QTY_4;
    AC_BUY_QTY_4 = 0;
    AC_STOCK_5 = AC_STOCK_5 - AC_BUY_QTY_5;
    AC_BUY_QTY_5 = 0;
    BDI_STOCK_1 = BDI_STOCK_1 - BDI_BUY_QTY_1;
    BDI_BUY_QTY_1 = 0;
    BDI_STOCK_2 = BDI_STOCK_2 - BDI_BUY_QTY_2;
    BDI_BUY_QTY_2 = 0;
    BDI_STOCK_3 = BDI_STOCK_3 - BDI_BUY_QTY_3;
    BDI_BUY_QTY_3 = 0;
    BDI_STOCK_4 = BDI_STOCK_4 - BDI_BUY_QTY_4;
    BDI_BUY_QTY_4 = 0;
    BDI_STOCK_5 = BDI_STOCK_5 - BDI_BUY_QTY_5;
    BDI_BUY_QTY_5 = 0;

    system("cls");
    std::cout << "THANK YOU FOR ORDERING, ORDER AGAIN!" << std::endl;
    system("pause");
    goto main_menu;

print_items:
    if (FL_BUY_QTY_1 > 0){
        std::cout << FL_NAME_1 << "\t\t\t\t\t" << FL_BUY_QTY_1 << "\t\t" << "P" << TOTAL1 << std::endl;
    }
    if (FL_BUY_QTY_2 > 0){
        std::cout << FL_NAME_2 << "\t\t\t\t" << FL_BUY_QTY_2 << "\t\t" << "P" << TOTAL2 << std::endl;
    }
    if (FL_BUY_QTY_3 > 0){
        std::cout << FL_NAME_3 << "\t\t\t\t" << FL_BUY_QTY_3 << "\t\t" << "P" << TOTAL3 << std::endl;
    }
    if (FL_BUY_QTY_4 > 0){
        std::cout << FL_NAME_4 << "\t\t\t\t\t" << FL_BUY_QTY_4 << "\t\t" << "P" << TOTAL4 << std::endl;
    }
    if (FL_BUY_QTY_5 > 0){
        std::cout << FL_NAME_5 << "\t\t\t\t\t" << FL_BUY_QTY_5 << "\t\t" << "P" << TOTAL5 << std::endl;
    }
    if (FL_BUY_QTY_6 > 0){
        std::cout << FL_NAME_6 << "\t\t\t\t\t\t" << FL_BUY_QTY_6 << "\t\t" << "P" << TOTAL6 << std::endl;
    }
    if (FL_BUY_QTY_7 > 0){
        std::cout << FL_NAME_7 << "\t\t\t\t\t" << FL_BUY_QTY_7 << "\t\t" << "P" << TOTAL7 << std::endl;
    }
    if (FL_BUY_QTY_8 > 0){
        std::cout << FL_NAME_8 << "\t\t\t\t" << FL_BUY_QTY_8 << "\t\t" << "P" << TOTAL8 << std::endl;
    }
    if (FL_BUY_QTY_9 > 0){
        std::cout << FL_NAME_9 << "\t\t\t\t\t" << FL_BUY_QTY_9 << "\t\t" << "P" << TOTAL9 << std::endl;
    }
    if (CLF_BUY_QTY_1 > 0){
        std::cout << CLF_NAME_1 << "\t\t\t\t" << CLF_BUY_QTY_1 << "\t\t" << "P" << TOTAL10 << std::endl;
    }
    if (CLF_BUY_QTY_2 > 0){
        std::cout << CLF_NAME_2 << "\t\t\t\t\t\t" << CLF_BUY_QTY_2 << "\t\t" << "P" << TOTAL11 << std::endl;
    }
    if (CLF_BUY_QTY_3 > 0){
        std::cout << CLF_NAME_3 << "\t\t\t\t" << CLF_BUY_QTY_3 << "\t\t" << "P" << TOTAL12 << std::endl;
    }
    if (CLF_BUY_QTY_4 > 0){
        std::cout << CLF_NAME_4 << "\t\t\t\t" << CLF_BUY_QTY_4 << "\t\t" << "P" << TOTAL13 << std::endl;
    }
    if (CLF_BUY_QTY_5 > 0){
        std::cout << CLF_NAME_5 << "\t\t\t\t\t" << CLF_BUY_QTY_5 << "\t\t" << "P" << TOTAL14 << std::endl;
    }
    if (FAM_BUY_QTY_1 > 0){
        std::cout << FAM_NAME_1 << "\t\t" << FAM_BUY_QTY_1 << "\t\t" << "P" << TOTAL15 << std::endl;
    }
    if (FAM_BUY_QTY_2 > 0){
        std::cout << FAM_NAME_2 << "\t\t\t\t\t" << FAM_BUY_QTY_2 << "\t\t" << "P" << TOTAL16 << std::endl;
    }
    if (FAM_BUY_QTY_3 > 0){
        std::cout << FAM_NAME_3 << "\t\t\t\t" << FAM_BUY_QTY_3 << "\t\t" << "P" << TOTAL17 << std::endl;
    }
    if (FAM_BUY_QTY_4 > 0){
        std::cout << FAM_NAME_4 << "\t\t\t\t\t" << FAM_BUY_QTY_4 << "\t\t" << "P" << TOTAL18 << std::endl;
    }
    if (FAM_BUY_QTY_5 > 0){
        std::cout << FAM_NAME_5 << "\t\t\t\t" << FAM_BUY_QTY_5 << "\t\t" << "P" << TOTAL19 << std::endl;
    }
    if (FAM_BUY_QTY_6 > 0){
        std::cout << FAM_NAME_6 << "\t\t\t" << FAM_BUY_QTY_6 << "\t\t" << "P" << TOTAL20 << std::endl;
    }
    if (SHB_BUY_QTY_1 > 0){
        std::cout << SHB_NAME_1 << "\t\t\t\t\t" << SHB_BUY_QTY_1 << "\t\t" << "P" << TOTAL21 << std::endl;
    }
    if (SHB_BUY_QTY_2 > 0){
        std::cout << SHB_NAME_2 << "\t\t\t\t" << SHB_BUY_QTY_2 << "\t\t" << "P" << TOTAL22 << std::endl;
    }
    if (SHB_BUY_QTY_3 > 0){
        std::cout << SHB_NAME_3 << "\t\t" << SHB_BUY_QTY_3 << "\t\t" << "P" << TOTAL23 << std::endl;
    }
    if (SHB_BUY_QTY_4 > 0){
        std::cout << SHB_NAME_4 << "\t\t" << SHB_BUY_QTY_4 << "\t\t" << "P" << TOTAL24 << std::endl;
    }
    if (SHB_BUY_QTY_5 > 0){
        std::cout << SHB_NAME_5 << "\t\t\t\t" << SHB_BUY_QTY_5 << "\t\t" << "P" << TOTAL25 << std::endl;
    }
    if (CSM_BUY_QTY_1 > 0){
        std::cout << CSM_NAME_1 << "\t\t\t" << CSM_BUY_QTY_1 << "\t\t" << "P" << TOTAL26 << std::endl;
    }
    if (CSM_BUY_QTY_2 > 0){
        std::cout << CSM_NAME_2 << "\t\t\t\t\t" << CSM_BUY_QTY_2 << "\t\t" << "P" << TOTAL27 << std::endl;
    }
    if (CSM_BUY_QTY_3 > 0){
        std::cout << CSM_NAME_3 << "\t\t\t\t\t" << CSM_BUY_QTY_3 << "\t\t" << "P" << TOTAL28 << std::endl;
    }
    if (CSM_BUY_QTY_4 > 0){
        std::cout << CSM_NAME_4 << "\t\t\t" << CSM_BUY_QTY_4 << "\t\t" << "P" << TOTAL29 << std::endl;
    }
    if (CSM_BUY_QTY_5 > 0){
        std::cout << CSM_NAME_5 << "\t" << CSM_BUY_QTY_5 << "\t\t" << "P" << TOTAL30 << std::endl;
    }
    if (WT_BUY_QTY_1 > 0){
        std::cout << WT_NAME_1 << "\t\t\t" << WT_BUY_QTY_1 << "\t\t" << "P" << TOTAL31 << std::endl;
    }
    if (WT_BUY_QTY_2 > 0){
        std::cout << WT_NAME_2 << "\t\t\t" << WT_BUY_QTY_2 << "\t\t" << "P" << TOTAL32 << std::endl;
    }
    if (WT_BUY_QTY_3 > 0){
        std::cout << WT_NAME_3 << "\t\t\t" << WT_BUY_QTY_3 << "\t\t" << "P" << TOTAL33 << std::endl;
    }
    if (WT_BUY_QTY_4 > 0){
        std::cout << WT_NAME_4 << "\t\t\t" << WT_BUY_QTY_4 << "\t\t" << "P" << TOTAL34 << std::endl;
    }
    if (WT_BUY_QTY_5 > 0){
        std::cout << WT_NAME_5 << "\t\t\t" << WT_BUY_QTY_5 << "\t\t" << "P" << TOTAL35 << std::endl;
    }
    if (PN_BUY_QTY_1 > 0){
        std::cout << PN_NAME_1 << "\t\t\t" << PN_BUY_QTY_1 << "\t\t" << "P" << TOTAL36 << std::endl;
    }
    if (PN_BUY_QTY_2 > 0){
        std::cout << PN_NAME_2 << "\t\t\t\t" << PN_BUY_QTY_2 << "\t\t" << "P" << TOTAL37 << std::endl;
    }
    if (PN_BUY_QTY_3 > 0){
        std::cout << PN_NAME_3 << "\t\t\t" << PN_BUY_QTY_3 << "\t\t" << "P" << TOTAL38 << std::endl;
    }
    if (PN_BUY_QTY_4 > 0){
        std::cout << PN_NAME_4 << "\t\t\t" << PN_BUY_QTY_4 << "\t\t" << "P" << TOTAL39 << std::endl;
    }
    if (PN_BUY_QTY_5 > 0){
        std::cout << PN_NAME_5 << "\t\t\t" << PN_BUY_QTY_5 << "\t\t" << "P" << TOTAL40 << std::endl;
    }
    if (AC_BUY_QTY_1 > 0){
        std::cout << AC_NAME_1 << "\t\t\t\t" << AC_BUY_QTY_1 << "\t\t" << "P" << TOTAL41 << std::endl;
    }
    if (AC_BUY_QTY_2 > 0){
        std::cout << AC_NAME_2 << "\t\t\t" << AC_BUY_QTY_2 << "\t\t" << "P" << TOTAL42 << std::endl;
    }
    if (AC_BUY_QTY_3 > 0){
        std::cout << AC_NAME_3 << "\t\t\t" << AC_BUY_QTY_3 << "\t\t" << "P" << TOTAL43 << std::endl;
    }
    if (AC_BUY_QTY_4 > 0){
        std::cout << AC_NAME_4 << "\t\t\t\t" << AC_BUY_QTY_4 << "\t\t" << "P" << TOTAL44 << std::endl;
    }
    if (AC_BUY_QTY_5 > 0){
        std::cout << AC_NAME_5 << "\t\t\t\t" << AC_BUY_QTY_5 << "\t\t" << "P" << TOTAL45 << std::endl;
    }
    if (BDI_BUY_QTY_1 > 0){
        std::cout << BDI_NAME_1 << "\t\t\t\t\t" << BDI_BUY_QTY_1 << "\t\t" << "P" << TOTAL46 << std::endl;
    }
    if (BDI_BUY_QTY_2 > 0){
        std::cout << BDI_NAME_2 << "\t\t\t\t\t" << BDI_BUY_QTY_2 << "\t\t" << "P" << TOTAL47 << std::endl;
    }
    if (BDI_BUY_QTY_3 > 0){
        std::cout << BDI_NAME_3 << "\t\t\t\t\t" << BDI_BUY_QTY_3 << "\t\t" << "P" << TOTAL48 << std::endl;
    }
    if (BDI_BUY_QTY_4 > 0){
        std::cout << BDI_NAME_4 << "\t\t\t\t" << BDI_BUY_QTY_4 << "\t\t" << "P" << TOTAL49 << std::endl;
    }
    if (BDI_BUY_QTY_5 > 0){
        std::cout << BDI_NAME_5 << "\t\t\t\t" << BDI_BUY_QTY_5 << "\t\t" << "P" << TOTAL50 << std::endl;
    }
    if (PRINT_RETURN == 1) goto cart_items_done;
    if (PRINT_RETURN == 2) goto checkout_items_done;
    goto receipt_items_done;

exit_program:
    system("cls");
    std::cout << "Thank you for visiting! Goodbye!" << std::endl;
    return 0;
}