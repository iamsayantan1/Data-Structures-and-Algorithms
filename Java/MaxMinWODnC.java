import java.awt.*;
import java.util.Scanner;

public class MaxMinWODnC {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter length of the array: ");
        byte len = scanner.nextByte();
        System.out.print("Enter array elements: ");
        int[] arr = new int[len];
        for (byte index=0 ; index<len ; index++)    {
            arr[index] = scanner.nextByte();
        }

        Point answer  = min_max(arr, len);

        System.out.println("Minimum value is: " + (int)answer.getX() + "\nMaximum value is: " + (int)answer.getY());
    }

    private static Point min_max(int[] arr, byte len)   {
        Point minMax = new Point();

        for (byte index=0 ; index< len ; index++)   {
            if(arr[index] < minMax.getX())  {
                minMax.x = arr[index];
            }
            else if(arr[index] > minMax.getY()) {
                minMax.y = arr[index];
            }
        }

        return minMax;
    }
}
