import java.util.Scanner;
public class stack
{  /**
   push ,pop Display
  **/
  static int Ar[];
   static int start,last,size;
  static  Scanner TakeInput;
   public stack(){
       int size;
        TakeInput = new Scanner(System.in);
       System.out.println("what would be size of Array");
       size = TakeInput.nextInt();
       Ar = new int [size];
       start = -1;
      // last = size-1;
       this.size = size;

   }
   void push(){
     if(start == size) {
      System.out.println("overflow");
     }
     else
     {
      System.out.println("Push Number");
      Ar[++start] =  TakeInput.nextInt();
      last++;
     }

   }
   void pop(){
     if(last ==-1) {
       System.out.println("UnderFllow");
     }
     else
      {
         last--;

     }
   }
   void Display(){
     for (int i = 0; i < last; i++) {
      System.out.print(Ar[i]+"\t");

     }
   }
  public static void main(String... arr){
    stack Acess = new stack();
    int y;
    while (true) {


    System.out.println("1 \t Push ");
    System.out.println("2 \t pop");
    System.out.println("3 \t Display");
    System.out.println("4 \t Exit");
    y = TakeInput.nextInt();
    switch (y) {
      case 1:
      Acess.push();
      break;
      case 2:
      Acess.pop();
      break;
      case 3:
      Acess.Display();
      break;
      case 4:
      System.exit(0);
      break;
    }
}
  }
}
