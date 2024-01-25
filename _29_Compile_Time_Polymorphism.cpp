//Compile-time polymorphism, also known as static polymorphism
// this type of polymorphism is achieved by
// -> FUNCTION OVERLOADING
//-> OPERATOR OVERLOADING

// OPERATOR OVERLOADING -> DISCUSSED BEFORE

// FUNCTION OVERLOADING

//occurs when multiple methods in a class have the same name but different parameters 
//(either different types or a different number of parameters). 
  The decision about which method to call is made by the compiler at compile time.

public class MathOperations {
    // Method to add two integers
    public int add(int a, int b) {
        return a + b;
    }

    // Method to add three integers
    public int add(int a, int b, int c) {
        return a + b + c;
    }

    // Method to concatenate two strings
    public String add(String str1, String str2) {
        return str1 + str2;
    }
}

public class Main {
    public static void main(String[] args) {
        MathOperations math = new MathOperations();

        int result1 = math.add(2, 3);              // Calls the first add method
        int result2 = math.add(2, 3, 5);           // Calls the second add method
        String result3 = math.add("Hello, ", "World!"); // Calls the third add method

        System.out.println(result1);
        System.out.println(result2);
        System.out.println(result3);
    }
}
