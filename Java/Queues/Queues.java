import java.util.*;
import java.util.ArrayList;
import java.util.Scanner;
 public class Queues{

    int start ,top ,max;
    Scanner Takeinput;
    ArrayList<Integer> q;
    public Queues(){
      start = 0;
      top = -1;
     q = new ArrayList<>();
     Takeinput = new Scanner(System.in);
    System.out.println("what ll size of Array");
    max = Takeinput.nextInt();

    }
    void push(){
      int value;
       if(top ==max-1) {
          System.out.println("overflow");
       }
       else{
        value = Takeinput.nextInt();
         q.add(value);
         top++;
       }
    }
    void pop(){
      if(top == -1) {
        System.out.println("undeflow");
      }
      else{
         q.remove(start);

      }
    }
    void show(){
      if(top == -1) {
        System.out.println("Ematy");
      }
      else{
        for(Integer df:q){
          System.out.println(df);
        }
      }
    }
public static void main(String...ar){
int option;
Queues object = new Queues();
 while(true){
  System.out.println("1 \t push");
  System.out.println("2 \t pop");
  System.out.println("3 \t show");
  System.out.println("4 \t Exit");
  option = object.Takeinput.nextInt();
 switch (option) {
   case 1:
   object.push();
   break;
   case 2:
   object.pop();
   break;
   case 3:
   object.show();
   break;
   case 4:
   System.exit(0);
   break;
 }
 }
}
 }
