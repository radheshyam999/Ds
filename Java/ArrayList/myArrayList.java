import java.util.Map;
import java.util.Stack;
import java.util.WeakHashMap;

import com.sun.javafx.css.CascadingStyle;
public  class myArrayList
 {
   public static void main(String... ar) {

    WeakHashMap <String, String> wm = new WeakHashMap<>();
    wm.put("html", "HYPER text Markup Language");
    wm.put("css", "Cascading Style sheet" );
    for (Map.Entry m:wm.entrySet() ) {
        System.out.println(m.getValue());
    }
   }

  

 }
