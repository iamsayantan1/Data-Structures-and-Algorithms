import java.util.Scanner;

import static java.lang.System.exit;

public class TicTacToeSayantan {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String playerName = scanner.nextLine();

        System.out.println("With which character you want to play with ?\nPress-1 if you want X, \nPress-2 if you want O");
        int pawnNo = 0;
        char userPawn;
        char computerPawn;

        while(true)   {
            if(scanner.hasNextInt())
                pawnNo = scanner.nextInt();
            else {
                System.out.print("Press-1 if you want X, or Press-2 if you want O: ");
                scanner.next();
                continue;
            }

            if (pawnNo == 1 || pawnNo == 2) {
                userPawn = pawnNo == 1 ? 'X' : 'O';
                computerPawn = userPawn == 'O' ? 'X' : 'O';
                break;
            }
            else
                System.out.print("Press-1 if you want X, or Press-2 if you want O: ");
        }
        scanner.close();

        char[] items = new char[9];
        for (byte index = 0 ; index < 9 ; index++) {
            items[index] = ' ';
        }

        printBoard(items);

        int itr = 0;
        char pawn;
        String player;
        while(true) {
            if(itr%2 == 0) {
                pawn = userPawn;
                player = playerName;
            }
            else {
                pawn = computerPawn;
                player = "Computer";
            }
            play(items, player, pawn);

            if(over(items) != 'D') {
                System.out.println(player + " Wins!!");
                exit(0);
            }
            else if(itr == 8)   {
                System.out.println("Match Draw!!");
                exit(0);
            }
            itr++;
        }

    }

    private static char over(char[] items)   {
        char wins[][] = {
                {0,1,2}, {3,4,5}, {6,7,8},
                {0,3,6}, {1,4,7}, {2,5,8},
                {0,4,8}, {2,4,6}
        };

        for (char[] item: wins) {
            if((items[item[0]] == items[item[1]]) && (items[item[1]] == items[item[2]]) && (items[item[1]] == 'X'))    {
                return 'X';
            }
            if((items[item[0]] == items[item[1]]) && (items[item[1]] == items[item[2]]) && (items[item[1]] == 'O'))    {
                return 'O';
            }
        }
        return 'D';
    }
    private static void play(char[] items, String player, char pawn)  {
        Scanner scanner = new Scanner(System.in);

        int input;
        while(true) {
            if(player != "Computer")    {
                System.out.println(player + " enter your turn between (1-9): ");
                if(scanner.hasNextInt())
                    input = scanner.nextInt()-1;
                else {
                    scanner.next();
                    continue;
                }
            }
            else {
                input = (int) (Math.random()*9);
            }

            if(input < 0 || input > 8)  continue;
            if(items[input] == ' ') {
                items[input] = pawn;
                break;
            }

            if(player != "Computer") {
                System.out.println("Enter position already contains a value, you can't enter again.");
            }
        }
        scanner.close();
        printBoard(items);
    }

    private static void printBoard(char[] items) {
        System.out.println("|-----------------|");
        System.out.println("|  " + items[0] + "  |  " + items[1] + "  |  " + items[2] + "  |");
        System.out.println("|-----------------|");
        System.out.println("|  " + items[3]+ "  |  " + items[4] + "  |  " + items[5] + "  |");
        System.out.println("|-----------------|");
        System.out.println("|  " + items[6] + "  |  " + items[7] + "  |  " + items[8] + "  |");
        System.out.println("|-----------------|");
        System.out.println("-----------------------------------");
    }
}