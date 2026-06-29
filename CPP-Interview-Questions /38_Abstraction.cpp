using namespace std;

class ATM {
public:
    virtual void withdraw() = 0;
};

class SBIATM : public ATM {
public:
    void withdraw() override {
        cout << "Money Withdrawn" << endl;
    }
};

int main() {
    SBIATM atm;
    atm.withdraw();
    return 0;
}
