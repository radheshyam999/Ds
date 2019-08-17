import java.util.Scanner;

/**
 * KFK
 */
public class KFK {

    boolean isNumric(String age) {
        boolean check = age.matches("/^[a-zA-Z0-9.!#$%&'*+/=?^_`{|}~-]+@[a-zA-Z0-9-]+(?:\.[a-zA-Z0-9-]+)*$/");
        if (check == true) {
            return true;
        }
        return false;
    }
   int ConvertNumber(String age){
        KFK check = new KFK();
        if (check.isNumric(age)) {
            int num = Integer.parseInt(age);
            System.out.println(num + 1);
            return num;
        } else {
            System.out.println("It is String " +age);
          return 0;
        }
     }
    public static void main(String[] args) {
     Scanner TakeInput = new Scanner(System.in);
     String age = TakeInput.nextLine();
     KFK convert = new  KFK();
         System.out.println(convert.ConvertNumber(age));
       
    }
}