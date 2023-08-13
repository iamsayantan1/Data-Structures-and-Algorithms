import java.util.Random;
import java.util.Scanner;

public class TicTacToe {
    public static void main(String[] args) {
        char[] board = {'-', '-', '-', '-', '-', '-', '-', '-', '-'};
        char winner = '-';
        char player = 'X';
        boolean run = true;

        printBoard(board);

        while (run) {
            System.out.println(player + "'s turn");
            playerInput(board, player);
            printBoard(board);
            System.out.println("-------------------------");

            if (win(board, player)) {
                break;
            }

            player = swap(player);

            System.out.println(player + "'s turn");
            computer(board);
            printBoard(board);
            System.out.println("-------------------------");

            if (win(board, player)) {
                break;
            }

            player = swap(player);
        }
    }

    public static void printBoard(char[] board) {
        System.out.println(board[0] + " | " + board[1] + " | " + board[2]);
        System.out.println("----------");
        System.out.println(board[3] + " | " + board[4] + " | " + board[5]);
        System.out.println("----------");
        System.out.println(board[6] + " | " + board[7] + " | " + board[8]);
    }

    public static void playerInput(char[] board, char player) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the position (1-9): ");
        int pos = scanner.nextInt();

        if (pos >= 1 && pos <= 9 && board[pos - 1] == '-') {
            board[pos - 1] = player;
        } else {
            System.out.println("Choose a different position!!");
            playerInput(board, player);
        }
    }

    public static boolean win(char[] board, char player) {
        int[][] wins = {
                {0, 1, 2}, {3, 4, 5}, {6, 7, 8},
                {0, 3, 6}, {1, 4, 7}, {2, 5, 8},
                {0, 4, 8}, {2, 4, 6}
        };

        for (int[] win : wins) {
            if (board[win[0]] == player && board[win[1]] == player && board[win[2]] == player) {
                System.out.println(player + " wins!!");
                return true;
            }
        }

        if (new String(board).indexOf('-') == -1) {
            System.out.println("Tie");
            return true;
        }

        return false;
    }

    public static void computer(char[] board) {
        char player = 'O'; // Assuming computer is always 'O'
        Random random = new Random();

        while (player == 'O') {
            int pos = random.nextInt(9) + 1;

            if (board[pos - 1] == '-') {
                board[pos - 1] = player;
                player = swap(player);
            }
        }
    }

    public static char swap(char player) {
        return player == 'X' ? 'O' : 'X';
    }
}
