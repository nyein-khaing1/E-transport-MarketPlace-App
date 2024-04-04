#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Cargo {
private:
    double weight;
    string dimensions;
    string conditions;

public:
    void setWeight(double w) { weight = w; }
    void setDimensions(string d) { dimensions = d; }
    void setConditions(string c) { conditions = c; }

    double getWeight() const { return weight; }
    string getDimensions() const { return dimensions; }
    string getConditions() const { return conditions; }
};


class CargoOwner {
private:
    string username;
    string password;
    string name;
    string address;
    string email;
    string phone;
    vector<Cargo> cargoOrders;


public:
    void setUsername(string u) { username = u; }
    void setPassword(string p) { password = p; }
    void setName(string n) { name = n; }
    void setAddress(string a) { address = a; }
    void setEmail(string e) { email = e; }
    void setPhone(string p) { phone = p; }
    string getUsername() const { return username; }
    string getPassword() const { return password; }
    string getName() const { return name; }
    string getAddress() const { return address; }
    string getEmail() const { return email; }
    string getPhone() const { return phone; }

    void addCargoOrder(const Cargo& cargo) {
        cargoOrders.push_back(cargo);
    }

    const vector<Cargo>& getCargoOrders() const {
        return cargoOrders;
    }
};

class TransportCompany {
private:
    string username;
    string password;
    string name;
    string address;
    string email;
    string phone;
    string crnNo;
    string vatNo;
    vector<Cargo> cargoOrders;

public:
    void setUsername(string u) { username = u; }
    void setPassword(string p) { password = p; }
    void setName(string n) { name = n; }
    void setAddress(string a) { address = a; }
    void setEmail(string e) { email = e; }
    void setPhone(string p) { phone = p; }
    void setCrnNo(string c) { crnNo = c; }
    void setVatNo(string v) { vatNo = v; }
    string getUsername() const { return username; }
    string getPassword() const { return password; }
    string getName() const { return name; }
    string getAddress() const { return address; }
    string getEmail() const { return email; }
    string getPhone() const { return phone; }
    string getCrnNo() const { return crnNo; }
    string getVatNo() const { return vatNo; }

    void addCargoOrder(const Cargo& cargo) {
        cargoOrders.push_back(cargo);
    }
    const vector<Cargo>& getCargoOrders() const {
        return cargoOrders;
    }

};

class Driver {
private:
    string username;
    string password;
    string name;
    string address;
    string email;
    string phone;
    string licensePlate;
    string niNo;
    string cpcNo;
    string lorryNo;

public:
    void setUsername(string u) { username = u; }
    void setPassword(string p) { password = p; }
    void setName(string n) { name = n; }
    void setAddress(string a) { address = a; }
    void setEmail(string e) { email = e; }
    void setPhone(string p) { phone = p; }
    void setLicensePlate(string l) { licensePlate = l; }
    void setNiNo(string n) { niNo = n; }
    void setCpcNo(string c) { cpcNo = c; }
    void setLorryNo(string l) { lorryNo = l; }
    string getUsername() const { return username; }
    string getPassword() const { return password; }
    string getName() const { return name; }
    string getAddress() const { return address; }
    string getEmail() const { return email; }
    string getPhone() const { return phone; }
    string getLicensePlate() const { return licensePlate; }
    string getNiNo() const { return niNo; }
    string getCpcNo() const { return cpcNo; }
    string getLorryNo() const { return lorryNo; }
};


Cargo inputCargoDetails() {
    Cargo cargo;
    double weight;
    string dimensions, conditions;

    cout << "Enter weight: ";
    cin >> weight;
    cin.ignore(); // Ignore the newline character left by cin
    cargo.setWeight(weight);

    cout << "Enter dimensions: ";
    getline(cin, dimensions);
    cargo.setDimensions(dimensions);

    cout << "Enter conditions: ";
    getline(cin, conditions);
    cargo.setConditions(conditions);

    return cargo;
}


void registerCargoOwner(vector<CargoOwner>& cargoOwners) {
    CargoOwner owner;
    string username, password, name, address, email, phone;

    cout << "Enter username: ";
    getline(cin, username);
    owner.setUsername(username);

    cout << "Enter password: ";
    getline(cin, password);
    owner.setPassword(password);

    cout << "Enter name: ";
    getline(cin, name);
    owner.setName(name);

    cout << "Enter address: ";
    getline(cin, address);
    owner.setAddress(address);

    cout << "Enter email: ";
    getline(cin, email);
    owner.setEmail(email);

    cout << "Enter phone number: ";
    getline(cin, phone);
    owner.setPhone(phone);

    cargoOwners.push_back(owner);

    cout << "Registration successful.\n";
}

void registerTransportCompany(vector<TransportCompany>& companies) {
    TransportCompany company;
    string username, password, name, address, email, phone, crnNo, vatNo;

    cout << "Enter username: ";
    getline(cin, username);
    company.setUsername(username);

    cout << "Enter password: ";
    getline(cin, password);
    company.setPassword(password);

    cout << "Enter name: ";
    getline(cin, name);
    company.setName(name);

    cout << "Enter address: ";
    getline(cin, address);
    company.setAddress(address);

    cout << "Enter email: ";
    getline(cin, email);
    company.setEmail(email);

    cout << "Enter phone number: ";
    getline(cin, phone);
    company.setPhone(phone);

    cout << "Enter CRN number: ";
    getline(cin, crnNo);
    company.setCrnNo(crnNo);

    cout << "Enter VAT number: ";
    getline(cin, vatNo);
    company.setVatNo(vatNo);

    companies.push_back(company);

    cout << "Registration successful.\n";
}

void registerDriver(vector<Driver>& drivers) {
    Driver driver;
    string username, password, name, address, email, phone, licensePlate, niNo, cpcNo, lorryNo;

    cout << "Enter username: ";
    getline(cin, username);
    driver.setUsername(username);

    cout << "Enter password: ";
    getline(cin, password);
    driver.setPassword(password);

    cout << "Enter name: ";
    getline(cin, name);
    driver.setName(name);

    cout << "Enter address: ";
    getline(cin, address);
    driver.setAddress(address);

    cout << "Enter email: ";
    getline(cin, email);
    driver.setEmail(email);

    cout << "Enter phone number: ";
    getline(cin, phone);
    driver.setPhone(phone);


    cout << "Enter license plate: ";
    getline(cin, licensePlate);
    driver.setLicensePlate(licensePlate);

    cout << "Enter NI number: ";
    getline(cin, niNo);
    driver.setNiNo(niNo);

    cout << "Enter CPC number: ";
    getline(cin, cpcNo);
    driver.setCpcNo(cpcNo);

    cout << "Enter Lorry number: ";
    getline(cin, lorryNo);
    driver.setLorryNo(lorryNo);

    drivers.push_back(driver);

    cout << "Registration successful.\n";
}


void login(vector<CargoOwner>& cargoOwners, vector<TransportCompany>& transportCompanies, const vector<Driver>& drivers) {
    string username, password;

    cout << "Enter username: ";
    getline(cin, username);

    cout << "Enter password: ";
    getline(cin, password);

    bool loggedIn = false;
    if (!loggedIn) {
        for (CargoOwner& owner : cargoOwners) {
            if (owner.getUsername() == username && owner.getPassword() == password) {
                cout << "Welcome, " << owner.getName() << "!\n";
                loggedIn = true;
                // code to access the cargo owner's account

                int ownerChoice;
                do {
                    cout << "1. Add a cargo order\n";
                    cout << "2. Back to main menu\n";
                    cout << "Enter your choice: ";
                    cin >> ownerChoice;
                    cin.ignore(); // Ignore the newline character left by cin

                    switch (ownerChoice) {
                    case 1:
                    {
                        Cargo cargo = inputCargoDetails();
                        owner.addCargoOrder(cargo);
                        cout << "Cargo order added to your account.\n";
                    }
                    break;
                    case 2:
                        cout << "Returning to main menu.\n";
                        break;
                    default:
                        cout << "Invalid choice.\n";
                    }
                } while (ownerChoice != 2);

                break;
            }
        }
    }

    if (!loggedIn) {
        for (TransportCompany& company : transportCompanies) {
            if (company.getUsername() == username && company.getPassword() == password) {
                cout << "Welcome, " << company.getName() << "!\n";
                loggedIn = true;
                // code to access the transport company's account

                int companyChoice;
                do {
                    cout << "1. View cargo orders\n";
                    cout << "2. Back to main menu\n";
                    cout << "Enter your choice: ";
                    cin >> companyChoice;
                    cin.ignore(); // Ignore the newline character left by cin

                    switch (companyChoice) {
                    case 1:
                    {
                        const vector<Cargo>& cargoOrders = company.getCargoOrders();
                        if (cargoOrders.empty()) {
                            cout << "No cargo orders available.\n";
                        }
                        else {
                            cout << "Cargo Orders:\n";
                            for (const Cargo& cargo : cargoOrders) {
                                cout << "Weight: " << cargo.getWeight() << " kg\n";
                                cout << "Dimensions: " << cargo.getDimensions() << "\n";
                                cout << "Conditions: " << cargo.getConditions() << "\n";
                                cout << "----------------------\n";
                            }
                        }
                    }
                    break;
                    case 2:
                        cout << "Returning to main menu.\n";
                        break;
                    default:
                        cout << "Invalid choice.\n";
                    }
                } while (companyChoice != 2);
                break;
            }
        }
    }

    if (!loggedIn) {
        for (const Driver& driver : drivers) {
            if (driver.getUsername() == username && driver.getPassword() == password) {
                cout << "Welcome, " << driver.getName() << "!\n";
                loggedIn = true;
                // code to access the driver's account
                break;
            }
        }
    }

    if (!loggedIn) {
        cout << "Incorrect username or password.\n";
    }
}




int main() {
    vector<CargoOwner> cargoOwners;
    vector<TransportCompany> transportCompanies;
    vector<Driver> drivers;

    int choice;
    do {
        cout << "1. Register as a cargo owner\n";
        cout << "2. Register as a transport company\n";
        cout << "3. Register as a driver\n";
        cout << "4. Login\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // ignore the newline character left by cin

        switch (choice) {
        case 1:
            registerCargoOwner(cargoOwners);
            break;
        case 2:
            registerTransportCompany(transportCompanies);
            break;
        case 3:
            registerDriver(drivers);
            break;
        case 4:
            login(cargoOwners, transportCompanies, drivers);
            break;
        case 5:
            cout << "Goodbye!\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }
    } while (choice != 5);

    return 0;

}