import java.awt.*;
import java.util.Scanner;

public class MaxMinWithDnC {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter length of the array: ");
        int len = scanner.nextByte();
        System.out.print("Enter array elements: ");
        int[] arr = new int[len];
        for (byte index=0 ; index<len ; index++)    {
            arr[index] = scanner.nextByte();
        }

        Point answer  = min_max(arr, 0, len-1);

        System.out.println("Minimum value is: " + (int)answer.getX() + "\nMaximum value is: " + (int)answer.getY());
    }

    private static Point min_max(int[] arr, int start, int end)   {
        Point minMax = new Point();

        if(start == end)    {
            minMax.x = arr[start];
            minMax.y = arr[start];
        } else if (end-start == 1) {
            if (arr[start] < arr[end])  {
                minMax.x = arr[start];
                minMax.y = arr[end];
            }
            else {
                minMax.y = arr[start];
                minMax.x = arr[end];
            }
        } else if (end-start > 1) {
            int mid = start + (end-start)/2;
            Point op1 = min_max(arr, start, mid);
            Point op2 = min_max(arr,  mid+1, end);

            if(op1.getX() < op2.getX()) {
                minMax.x = (int)op1.getX();
            }
            else {
                minMax.x = (int)op2.getX();
            }

            if(op1.getY() > op2.getY()) {
                minMax.y = (int)op1.getY();
            }
            else {
                minMax.y = (int)op2.getY();
            }
        }

        return minMax;
    }
}
