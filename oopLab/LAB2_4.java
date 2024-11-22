// Find the addition of two matrices and display the resultant matrix.
public class LAB2_4 {
    public static void main(String args[]) {
        int[][] mat1 = {
                { 1, 2, 3 },
                { 4, 5, 6 },
                { 7, 8, 9 }
        };

        int[][] mat2 = {
                { 11, 12, 13 },
                { 14, 15, 16 },
                { 17, 18, 19 }
        };

        int[][] result = new int[3][3];

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result[i][j] = mat1[i][j] + mat2[i][j]; 
            }
        }

        System.out.println("Resultant Matrix after Addition:");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(result[i][j] + " ");
            }
            System.out.println();

        }
    }
}
