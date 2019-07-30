import java.util.*;
import java.util.Scanner;
class ReverseArray
{
  public static void main(String[] args) {
   ReverseArray Acess = new ReverseArray();
   Acess.ReverseIng();
  }
void ReverseIng()
  {  Scanner inp = new Scanner(System.in);
    int A[],i,j,temp,x;
    System.out.print("what would be size of array");
    x = inp.nextInt();
    A = new  int[x];
     for (i=0; i < x; i++)
     {
        A[i] = inp.nextInt();
     }
 j = x-1;
     for (i = 0; i < x/2; i++)
     {
        //for (j=(x-1);j < 0; j--)
        //{
        temp = A[i];
          A[i] = A[j];
          A[j]  = temp;
          j--;
          //System.out.print(A[j]);
      //  }


     }
     for (i=0; i < x; i++)
     {
        System.out.print(A[i]);
     }
  }
}
