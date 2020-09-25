import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        StringBuilder ans = new StringBuilder();
        while (t-- > 0) {
            int n = scanner.nextInt();
            int q = scanner.nextInt();
            int[] arr = new int[n];
            for (int i = 0; i < n; ++i) {
                arr[i] = scanner.nextInt();
            }
            int flag = 0;
            long sum = 0;
            for (int i = 0; i < n - 1; ++i) {
                if (flag % 2 == 0) {
                    if (arr[i] > arr[i + 1]) {
                        sum += arr[i];
                        flag++;
                    }
                } else {
                    if (arr[i] < arr[i + 1]) {
                        sum -= arr[i];
                        flag++;
                    }
                }
            }
            if (flag % 2 == 0) {
                sum += arr[n - 1];
            }
            System.out.println(sum);
        }
    }
}