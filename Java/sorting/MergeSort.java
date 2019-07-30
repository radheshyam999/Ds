import java.util.*;
import java.util.Scanner;
class MergeSort
{
public static void main(String... args)
{
   MergeSort Acess = new MergeSort();
    Acess.MergeSortit();
}
 int MergeSortit()
 {  Scanner input =new Scanner(System.in);
   int A[], B[],Sorted[],x,i,j,temp;
      System.out.println(" what would your size of array");
        x = input.nextInt();
         A =  new int[x];
         B =  new int[x];
    Sorted = new int[2*x];
    for (i=0; i<x;i++)
      {
      A[i] = input.nextInt();
      B[i] = input.nextInt();
      Sorted[i] = A[i];

       }
    for (i = x; i < 2*x; i++)
      {
       Sorted[i] = B[i-x];
      }
    for (i = 0;  i < 2*x; i++)
     {
            for (j = i+1; j < 2*x; j++ )
             {
                 if (Sorted[i] > Sorted[j])
                 {
                     temp = Sorted[i];
                     Sorted[i] = Sorted[j];
                     Sorted[j] = temp;

                 }
             }
     }

     for (i = 0; i < 2*x; i++)
     {
         System.out.print(Sorted[i] + "\t");
     }
     return 0;
 }
}
