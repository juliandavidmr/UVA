
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

/**
 *
 * @author david
 */
public class Main {

    public static void main(String[] args) {
        try {
            Map<Integer, Integer> map = new HashMap<>();
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

            int cases = Integer.parseInt(in.readLine());
            int num;

            for (int i = 0; i < cases; i++) {
                init(map);

                num = Integer.parseInt(in.readLine());
                String tostring[];
                for (int j = 1; j <= num; j++) {
                    tostring = String.valueOf(j).split("");

                    for (int k = 0; k < tostring.length; k++) {
                        int key = Integer.parseInt(tostring[k]);
                        int value = map.get(key);
                        map.put(key, ++value);
                    }
                }

                String res = "";
                
                Iterator it = map.keySet().iterator();
                while (it.hasNext()) {
                    Integer key = (Integer) it.next();
                    res += map.get(key) + " ";
                }
                System.out.println(res.trim());
            }
        } catch (Exception ex) {
        }
    }

    public static void init(Map map) {
        map.clear();

        for (int i = 0; i < 10; i++) {
            map.put(i, 0);
        }
    }

}
