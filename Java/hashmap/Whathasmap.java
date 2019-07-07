import java.util.HashSet;
import java.util.Iterator;
import java.util.*;
public class Whathasmap
 {
     public static void main(String[] args) {
       HashSet<String> hs = new HashSet<>();
       hs.add("game");
       hs.add("start learning well");
       hs.add("gc?");
       hs.add("remove");
      System.out.println(hs);
     Iterator j =  hs.iterator();
     while (j.hasNext()){
       System.out.print(j.next()+"\t");

     }
     }
 }
