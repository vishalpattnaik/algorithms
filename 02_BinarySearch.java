public class BinarySearch {

    public int binarySearch(int a[], int l, int h, int x) {
        if (h >= l) {
            int mid = l + (h - l) / 2;

            if (a[mid] == x)
                return mid;

            if (a[mid] > x)
                return binarySearch(a, l, mid - 1, x);

            return binarySearch(a, mid + 1, h, x);
        }
        return -1;
    }

    public static void main(String args[]) {
        BinarySearch ob = new BinarySearch();
         int a[] = { 20, 30, 40, 60, 50 };
        int n = a.length;
        int x = 60;
        int res = ob.binarySearch(a, 0, n - 1, x);
        if (res == -1)
            System.out.println("Element is not present");
        else
            System.out.println("Element is found at index " + res);
    }
}