import java.util.Scanner;
import java.util.Random;

public class HangmanGame {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();

        String guesses[] = { "bluetooth", "bottle", "csharp", "homework", "game", "laptop", "lemonade", "industry",
                "baby", "keyboard" };

        boolean playingNow = true;
        while (playingNow) {
            System.out.println("Hangman by arnavk09");
            int randNum = random.nextInt(guesses.length);
            char guessRand[] = guesses[randNum].toCharArray();
            int ammountOfGuesses = guessRand.length;
            char playerGuessed[] = new char[ammountOfGuesses];

            for (int i = 0; i < playerGuessed.length; i++) { // Assign empty dashes
                playerGuessed[i] = '_';
            }

            boolean wordGuessed = false;
            int tries = 0;

            while (!wordGuessed && tries != ammountOfGuesses) {
                System.out.println("Current Guess: ");
                print(playerGuessed);
                System.out.printf("You have %d tries left.\n", ammountOfGuesses - tries);
                System.out.println("Enter a single character: ");
                char input = scanner.nextLine().charAt(0);
                tries++;

                if (input == '-') {
                    wordGuessed = true;
                    playingNow = false;
                } else {
                    for (int i = 0; i < guessRand.length; i++) {
                        if (guessRand[i] == input) {
                            playerGuessed[i] = input;
                        }
                    }

                    if (isTheWordGuessed(playerGuessed)) {
                        wordGuessed = true;
                        System.out.println("You WIN !");
                    }
                }
            }
            if (!wordGuessed) {
                System.out.println("You lost as you ran out of guesses.");
            }

            System.out.println("type yes to play again or type no to terminate");
            String choice = scanner.nextLine();
            if (choice.equals("no")) {
                playingNow = false;
            }

        }

        System.out.println("Game Over!");
    }

    public static void print(char array[]) {
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i] + " ");
        }
        System.out.println();
    }

    public static boolean isTheWordGuessed(char[] array) {
        boolean testCase = true;
        for (int i = 0; i < array.length; i++) {
            if (array[i] == '_') {
                testCase = false;
            }
        }
        return testCase;
    }
}