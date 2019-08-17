import java.util.Scanner;



 class node{
  public  node prev = null;
  public node next = null;
  int data;
  //node next = null;
    node(int d){
       data = d;
       
     }
 }
  
public class myLinkedListimpl {
  node root;
  myLinkedListimpl(){
    root = null;
  }
  public static void main(String[] args) {
  myLinkedListimpl lis = new myLinkedListimpl();
      Scanner TakeInput = new Scanner(System.in);
      int option; //= TakeInput.nextInt();

       while(true){
         
         System.out.println("1 push");
         System.out.println("2 show");
         System.out.println("3 Exit");
         option = TakeInput.nextInt();
         switch(option){
            case 1:
                lis.push();
            break;
            case 2:
               lis.show();
            break;
            case 3:
              System.exit(0);
            break;
            default:
              System.out.println("You need to Enter Valid option");
                 return;

      }
      }
   
  
  }
  public void push(){

    Scanner TakeInput = new Scanner(System.in);
    int d = TakeInput.nextInt();
    
    node p = new node(d);
    p.prev = null;
    p.next = null;

    node temp = root;
    if(root == null){
      root = p;

    }
    else{
        while(temp.next != null){
              temp = temp.next;
        }
        temp.next = p;
    }



  }
 void show(){
       if(root != null) {
         node temp = root;
         while(temp != null){
              System.out.print(temp.data +"\t");
              temp = temp.next;
         }
       }
       System.out.print("\n");
     }

}
