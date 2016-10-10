import java.io.BufferedReader;
import java.io.InputStreamReader;

public class addition {

    public static String[][] nums = new String[10][7];

    public static void llenar() {
        String[] ar;
        for (int i = 0; i < 10; i++) {
            ar = numbers()[i].split("\n");
            System.arraycopy(ar, 0, nums[i], 0, 7);
        }
    }

    public static void main(String[] args) {
        llenar();
        resolve();
    }

    public static void resolve() {
        try {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

            String[] input = new String[7];
            String linea;
            while ((linea = in.readLine()).contains("x")) {
                input[0] = linea;
                for (int i = 1; i <= 6; i++) {
                    input[i] = in.readLine();
                }

                String num_str, operation = "";
                int num_int;
                int sub = 5;
                for (int i = 0; i < input[0].length(); i += sub) {
                    num_str = input[0].substring(i, i + sub) + "\n"
                            + input[1].substring(i, i + sub) + "\n"
                            + input[2].substring(i, i + sub) + "\n"
                            + input[3].substring(i, i + sub) + "\n"
                            + input[4].substring(i, i + sub) + "\n"
                            + input[5].substring(i, i + sub) + "\n"
                            + input[6].substring(i, i + sub);
                    i++;
                    
                    num_int = what(num_str);
                    if (num_int == -1) {
                        operation += "+";
                    } else {
                        operation += num_int;
                    }
                }
                //System.out.println("Op: " + operation);
                String[] spl = operation.split("\\+");
                int result = (Integer.parseInt(spl[0]) + Integer.parseInt(spl[1]));

                //System.out.println("resul=" + result);
                res(result + "");
            }
        } catch (Exception ex) {}
    }

    public static void res(String op) {
        int n;
        for (int i = 0; i < 7; i++) {
            for (int j = 0; j < op.length(); j++) {
                n = Integer.parseInt(op.substring(j, j + 1));
                if (j < op.length() - 1) {
                    System.out.print(nums[n][i] + ".");
                } else {
                    System.out.print(nums[n][i]);
                }
            }
            System.out.println("");
        }
    }

    public static int what(String in_num) {
        for (int i = 0; i < numbers().length; i++) {
            if (in_num.equals(numbers()[i])) {
                return i == 10 ? -1 : i;
            }
        }
        return 0;
    }

    public static String[] numbers() {
        return new String[]{
            "xxxxx\nx...x\nx...x\nx...x\nx...x\nx...x\nxxxxx", // 0
            "....x\n....x\n....x\n....x\n....x\n....x\n....x", // 1
            "xxxxx\n....x\n....x\nxxxxx\nx....\nx....\nxxxxx", // 2
            "xxxxx\n....x\n....x\nxxxxx\n....x\n....x\nxxxxx", // 3
            "x...x\nx...x\nx...x\nxxxxx\n....x\n....x\n....x", // 4
            "xxxxx\nx....\nx....\nxxxxx\n....x\n....x\nxxxxx", // 5
            "xxxxx\nx....\nx....\nxxxxx\nx...x\nx...x\nxxxxx", // 6
            "xxxxx\n....x\n....x\n....x\n....x\n....x\n....x", // 7
            "xxxxx\nx...x\nx...x\nxxxxx\nx...x\nx...x\nxxxxx", // 8
            "xxxxx\nx...x\nx...x\nxxxxx\n....x\n....x\nxxxxx", // 9
            ".....\n..x..\n..x..\nxxxxx\n..x..\n..x..\n....." // +
        };
    }
}