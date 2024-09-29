import java.util.*;

public class Main {
  public static void Reverse(List<Integer> list, int start, int end) {
    while (start <= end) {
      int temp = list.get(start);
      list.set(start, list.get(end));
      list.set(end, temp);
      start++;
      end--;
    }
  }

  public static void Rotateeletoright(List<Integer> list, int n, int k) {
    Reverse(list, 0, n - k - 1);
    Reverse(list, n - k, n - 1);
    Reverse(list, 0, n - 1);
  }

  public static void main(String args[]) {
    Scanner scanner = new Scanner(System.in);
    String[] input = scanner.nextLine().split(" ");
    List<Integer> list = new ArrayList<>();
    for (String s : input) {
      list.add(Integer.parseInt(s));
    }
    int k = scanner.nextInt();
    int n = list.size();

    Rotateeletoright(list, n, k);
    for (int i = 0; i < n; i++) {
      System.out.print(list.get(i) + " ");
    }
    System.out.println();

    scanner.close();
  }
}
