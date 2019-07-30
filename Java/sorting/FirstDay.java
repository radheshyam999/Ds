import java.util.Scanner;

class FirstDay
{   //  check number is prime or not  // 
   public static void main(String[] args) {
       int x;
        System.out.println("Please Enter a Number");
        Scanner TakeInput = new Scanner(System.in);
        x = TakeInput.nextInt();

        TakeInput.close();
       FirstDay Acess = new FirstDay();
       Acess.takeValue(x); 
   }

   void takeValue(int x)
     
   {  if (x%2 != 0 || x ==2  ) {
       
   }
       
   }
}