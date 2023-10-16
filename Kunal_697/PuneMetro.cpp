#include <iostream>
#include <string>

class Book {
private:
    int from, to, no, type;
    std::string ans;

public:
    void booking();
    void timetable();
    void station();
    void contact_us();
    void menu();
};

void Book::menu() {
    int x = 0;
    while (x != 5) {
        std::cout << "\n\n\n\t\t\t______________________________________________HOME______________________________________________________\n";
        std::cout << "\n\t\t\t1. Booking\n\t\t\t2. Timetable\n\t\t\t3. Stations\n\t\t\t4. Contact us\n\t\t\t5. Exit\n";
        std::cout << "Choose the Operation: ";
        std::cin >> x;

        switch (x) {
            case 1:
                booking();
                break;
            case 2:
                timetable();
                break;
            case 3:
                station();
                break;
            case 4:
                contact_us();
                break;
            case 5:
                std::cout << "Your Feedback is Valuable for us!\n";
                std::cout << "Please Let us know what you think\n";
                std::cout << "Thanks\n";
                break;
            default:
                std::cout << "Enter the correct operation";
        }
    }
}

void Book::station() {
    std::cout << "\t\t\t________________________________________Available Stations: ________________________________________________________";
    std::cout << "\n\t\t\t1. PCMC\n\t\t\t2. Bhosari\n\t\t\t3. Chatrapati Shivaji Nagar\n\t\t\t4. Civil court\n";
    std::cout << "\t\t\t__________________________________We are Coming soon to other areas_______________________________________________\n";
}

void Book::timetable() {
    std::cout << "                                   Operational Section: PCMC to Civil Court\n";
    std::cout << "Frequency of Trains: 10 mins\n";
    std::cout << "Off Peak Frequency: 15 mins\n";
    std::cout << "Service Time: 7 am to 10 pm (15 Hrs)\n";
    std::cout << "Station Stopping Time: 30 Sec\n";
    std::cout << "Travel Time from PCMC to Civil Court: 25 mins\n ";
}

void Book::booking() {
    float fare;
    std::cout << "_____________________________WELCOME TO METRO TICKET BOOKING__________________________________\n" << std::endl;
    std::cout << "\n1. PCMC\n2. Bhosari\n3. Chatrapati Shivaji Nagar\n4. Civil court\n";
    std::cout << "FROM: ";
    std::cin >> from;
    std::cout << "TO: ";
    std::cin >> to;
    std::cout << "Number of Tickets: ";
    std::cin >> no;
    std::cout << "Journey type:\n1. One Way\n2. Return\n";
    std::cin >> type;

    if (from == 1 && to == 2 || (from == 2 && to == 1) || (from == 2 && to == 3)) {
        fare = (10.50 * no) * type;
        std::cout << "Fare is " << fare << " rupes\n";
    } else if ((from == 2 && to == 3) || (from == 3 && to == 2) || (from == 2 && to == 4) || (from == 2 && to == 4)) {
        fare = (17.50 * no) * type;
        std::cout << "Fare is " << fare << " rupes\n";
    } else if ((from == 3 && to == 4) || (from == 4 && to == 3)) {
        fare = (7.00 * no) * type;
        std::cout << "Fare is " << fare << " rupes\n";
    } else if ((from == 1 && to == 3) || (from == 3 and to == 1) || (from == 1 && to == 4) || (from == 4 && to == 1)) {
        fare = (21.00 * no) * type;
        std::cout << "Fare is " << fare << " rupes\n";
    }
}

void Book::contact_us() {
    std::cout << "Contact Number: 18002705501\n";
    std::cout << "Mail:\n";
    std::cout << "Address: Maharastra Metro Rail Corporation Pune, A1, A2 block civil court interchange metro station,\n"
        << "\tNyaymurti Ranade path, Shivaji Nagar Pune, 411005";
}

int main() {
    Book project;
    std::cout << "\n                                                           WELCOME TO PUNE METRO\n";
    project.menu();

    return 0;
}
