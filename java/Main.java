import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        int[] array = { 1395, 530, 103, 5, 2, 42, 15, -35, -12, 49};
        Sorter.bubbleSort(array);
        System.out.println(Arrays.toString(array));
        Sorter.selectionSort(array);
        System.out.println(Arrays.toString(array));
        Sorter.insertionSort(array);
        System.out.println(Arrays.toString(array));
        Sorter.mergeSort(array);
        System.out.println(Arrays.toString(array));
        Sorter.quickSort(array);
        System.out.println(Arrays.toString(array));
    }

}
