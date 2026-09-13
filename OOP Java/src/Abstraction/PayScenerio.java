package Abstraction;

abstract class Payment {
    protected double amount;

    Payment(double amount) {
        this.amount = amount;
    }

    abstract void pay();

    void showAmount() {
        System.out.println("Amount: " + amount);
    }
}

interface Refundable {
    void refund();
}

class CreditCardPayment extends Payment implements Refundable {
    CreditCardPayment(double amount) {
        super(amount);
    }

    @Override
    void pay() {
        System.out.println("Payment made using credit card.");
    }

    @Override
    public void refund() {
        System.out.println("Refund processed.");
    }
}


public class PayScenerio {
    public static void main(String[] args) {

        CreditCardPayment payment = new CreditCardPayment(500);

        payment.showAmount();
        payment.pay();
        payment.refund();
    }
}
