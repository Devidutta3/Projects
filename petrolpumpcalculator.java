import java.util.*;

public class petrolpumpcalculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Please Enter The Amount In INR ");

        float price = sc.nextFloat();
        //Petrol Price in Odisha as on 06-NOV-2025;
        final float petrol_per_lit = 102.63f;

        float Lit = price / petrol_per_lit;
        if (price > 10.00) {
            if (Lit > 1000) {
                System.out.println("Wow! You are going to fill " + Lit + " Litres of Petrol. That's a huge amount!\n");

                float final_Petrol = Lit * 1000f;
                System.out.println("In other words, you are going to fill " + final_Petrol + " Millilitres of Petrol with INR " + price);
                
            } else {
                System.out.println("You can fill " + Lit + " Litres of Petrol with INR " + price);
            }
        }

    }
}
