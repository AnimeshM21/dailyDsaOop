// Define a class to represent a Bank account. Include the following members.
// Data members:
// 1. Name of the depositor
// 2. Account number.
// 3. Type of account.
// 4. Balance amount in the account.
// 5. Rate of interest (static data)
// 6. Provide a default constructor and parameterized constructor to this class. 

// Also provide Methods:
// 1.To deposit amount.
// 2.To withdraw amount after checking for minimum balance.
// 3.To display all the details of an account holder.
// 4.Display rate of interest (a static method)
// Illustrate all the constructors as well as all the methods by defining objects.

class BankAccount {
    String name;
    int accntNum;
    String accntType;
    int balance;
    static int rate;

    public BankAccount() {
        name = "NAME";
        accntNum = 000;
        accntType = "TYPE";
        balance = 0;
        rate = 0;
    }

    public BankAccount(String myname, int accntN, String accntTy) {
        name = myname;
        accntNum = accntN;
        accntType = accntTy;
        balance = 0; 
    }

    void deposit(int value) {
        balance += value;
        System.out.println("The Account Balance currently is: " + balance);
    }


    void withdraw(int value) {
        int minBalance = 100; 
        if (balance - value < minBalance) {
            System.out.println("Insufficient balance. Minimum balance of " + minBalance + " required.");
            return;
        } else {
            balance -= value;
            System.out.println("The Amount withdrawn is: " + value);
        }
    }

    void display() {
        System.out.println("The name is: " + name);
        System.out.println("The Account Number is: " + accntNum);
        System.out.println("The Account Balance is: " + balance);
        System.out.println("The Account Type is: " + accntType);
    }

    static void displayRate() {
        System.out.println("The Rate of Interest is: " + rate + "%");
    }

    static void setRate(int r) {
        rate = r;
    }

}

public class LAB4_3 {
    public static void main(String args[]) {
  
        BankAccount.setRate(5);

        BankAccount baccnt = new BankAccount(); 
        BankAccount baccnt2 = new BankAccount("Anim", 1000, "Savings");  

        baccnt2.deposit(50000);
        baccnt2.deposit(500);
        baccnt2.display();

        baccnt2.withdraw(79);  
        baccnt2.display();

        baccnt2.withdraw(50000);  
        baccnt2.display();
    }
}