import java.util.Scanner;

class SortDouble
{
    public static void main(String[] args) {
       SortDouble Acess = new SortDouble();
       Acess.SortArray(); 
    }

    void SortArray()
    {    int i,x,j,l=0,temp=0,k=0,Array[][];
        Scanner GetInput = new Scanner(System.in);
        System.out.print("pleas Enter Value ");
        x= GetInput.nextInt();
        Array = new int [x][x];
        for ( i = 0; i < x; i++) {
            for ( j = 0; j < x; j++) {
                System.out.print("index:"+"["+i+"]"+"["+j+"]");
               Array[i][j] = GetInput.nextInt(); 
            }
        }

        for (i = 0; i < x; i++) 
        {
          for (j = 0; j < x; j++)
            {  
                k = j + 1;
              for ( k = 0; k < x; k++) 
                {
                
                    
                    while (l < x) {
                        if (Array[i][j] < Array[k][l]) {
                            temp = Array[k][l];
                            Array[k][l] = Array[i][j];
                            Array[i][j] = temp;
                        }
                        l++;
                    }
                    l = 0;    
                 }
            }
        }
        for (i = 0; i < x; i++) {
            for (j = 0; j < x; j++) {
                System.out.print(Array[i][j]+"\t");
               // System.out.print("index:" + "[" + i + "]" + "[" + j + "]");
                // Array[i][j] = GetInput.nextInt();
            }
        }


     GetInput.close();    
    }
}