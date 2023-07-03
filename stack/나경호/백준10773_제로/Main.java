package stack.나경호.백준10773_제로;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class Main {

    private static Stack<Integer> stack = new Stack<>();

    private static void isZero(String target) {
        if (target.equals("0")) {
            stack.pop();
            return;
        }
        stack.push(Integer.parseInt(target));
    }

    private static int sum() {
        int total = 0;

        while (true) {
            if (stack.empty()) {
                return total;
            }
            total += stack.pop();
        }
    }

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int num = Integer.parseInt(br.readLine());
        String target;

        for (int i = 0; i < num; i++) {
            target = br.readLine();

            isZero(target);
        }

        System.out.println(sum());


    }
}
