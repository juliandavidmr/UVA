package javaapplication1;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 *
 * @author david
 */
public class DigitsCounting {

    /**
     * @param args the command line arguments
     *
     * 11113233334433
     * 411312432423
     */
    public static void main(String[] args) {
        try {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

            String line = in.readLine() + " ";

            int count = 1;
           
            for (int i = 0; i < line.length() - 1; i++) {
                char c = line.charAt(i);
                char c2 = line.charAt(i + 1);

                if (c == c2) {
                    count++;
                } else {
                    System.out.print(count + "" + c);
                    count = 1;
                }
            }
        } catch (IOException ex) {
            System.out.println(ex);
        }
    }

}
