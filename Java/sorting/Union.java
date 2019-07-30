import java.util.*;
import java.util.Scanner;
class Union
{
  public static void main(String[] args)
  {
     Union Ad = new Union();
     Ad.FindUnion();
  }
  void FindUnion()
   {
       Scanner TakeInput = new Scanner(System.in);

      int A[],B[],U[],i,j,l,temp,x;
        System.out.print(" what  would be your Array size");
         x = TakeInput.nextInt();
         A = new int[x];
         B = new int[x];
         U = new int[2*x];
         for (i=0; i < x; i++)
         {  System.out.print("A["+i+1+"]");
            A[i] = TakeInput.nextInt();
            System.out.print("B["+i+1+"]");

              B[i] = TakeInput.nextInt();


            //-B[i] = TakeInput.nextInt();


                 U[i] = A[i];


         }
         for (i = x;i < 2*x ; i++ )
          {
              if (U[i-x] != B[i-x]) {

                 U[i] = B[i-x];
              }
              else
              {
                l = i+1;
                System.out.print(l);
              }
          }

          for (i = 0; i < 2*x; i++) {
             System.out.print(U[i]+"\t");
          }

   }
}
