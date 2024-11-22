package myBuilding;

public class Maximum {
    public int max(int x, int y, int z) {
        if (x > y && x > z) {
            return x;
        } else if (y > z) {
            return y;
        } else {
            return z;
        }
    }

    public float max(float x, float y, float z) {
        if (x > y && x > z) {
            return x;
        } else if (y > z) {
            return y;
        } else {
            return z;
        }
    }

    public int max(int[] myArray) {
        int greatest = myArray[0];
        for (int i = 1; i < myArray.length; i++) {
            if (myArray[i] > greatest) {
                greatest = myArray[i];
            }
        }
        return greatest;
    }

    public int max(int[][] myArray2) {
        int greatest = myArray2[0][0];
        for (int i = 0; i < myArray2.length; i++) {
            for (int j = 0; j < myArray2[i].length; j++) {
                if (myArray2[i][j] > greatest) {
                    greatest = myArray2[i][j];
                }
            }
        }
        return greatest;
    }
}

