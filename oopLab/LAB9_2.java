class RowSumCalculator implements Runnable {
    private int[] row;
    private int rowIndex;
    private int[] rowSums;

    public RowSumCalculator(int[] row, int rowIndex, int[] rowSums) {
        this.row = row;
        this.rowIndex = rowIndex;
        this.rowSums = rowSums;
    }

    @Override
    public void run() {
        int sum = 0;
        for (int value : row) {
            sum += value;
        }
        rowSums[rowIndex] = sum;
        System.out.println("Row " + rowIndex + " sum: " + sum);
    }
}

public class LAB9_2 {
    public static void main(String[] args) throws InterruptedException {
        int[][] matrix = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        int rows = matrix.length;
        int[] rowSums = new int[rows];
        Thread[] threads = new Thread[rows];

        for (int i = 0; i < rows; i++) {
            threads[i] = new Thread(new RowSumCalculator(matrix[i], i, rowSums));
            threads[i].start();
        }

        for (int i = 0; i < rows; i++) {
            threads[i].join();
        }

        int totalSum = 0;
        for (int sum : rowSums) {
            totalSum += sum;
        }

        System.out.println("Total matrix sum: " + totalSum);
    }
}