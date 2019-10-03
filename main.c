import java.util.Scanner;

public final class linearsearch_3 {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		int n = scn.nextInt();
		int[] arr = { 10, 20, 30, 40, 50, 60 };
		int low = 0;
		int high = arr.length-1;
		while (low <= high) {

			int mid = (high + low) / 2;
			if (n > arr[mid]) {
				low = mid + 1;
			} else if (n < arr[mid]) {
				high = mid - 1;

			} else {
				System.out.println(mid);
				return;
			}
		}
		System.out.println("-1");
	}

}
