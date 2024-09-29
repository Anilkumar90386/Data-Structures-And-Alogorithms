import java.util.ArrayList;
import java.util.List;

public class StringTokenizer {

    public static List<String> tokenizeString(String S) {
        List<String> tokens = new ArrayList<>();
        StringBuilder token = new StringBuilder();
        boolean insideQuotes = false;
        char quoteType = '\0'; // ' or " to track the type of quote

        for (char ch : S.toCharArray()) {
            if (ch == '"' || ch == '\'') {
                if (insideQuotes && ch == quoteType) {
                    // End of a quoted token
                    token.append(ch); // Include the closing quote
                    tokens.add(token.toString());
                    token.setLength(0);  // Clear the current token
                    insideQuotes = false;
                } else if (!insideQuotes) {
                    // Start of a quoted token
                    insideQuotes = true;
                    quoteType = ch; // Set the type of quote
                    token.append(ch); // Include the opening quote
                } else {
                    // Inside quotes but different type
                    token.append(ch);
                }
            } else if (ch == ' ' && !insideQuotes) {
                // Outside quotes, space means end of a token
                if (token.length() > 0) {
                    tokens.add(token.toString());
                    token.setLength(0);
                }
            } else {
                // Accumulate the characters in the current token
                token.append(ch);
            }
        }

        // Add the last token if any
        if (token.length() > 0) {
            tokens.add(token.toString());
        }

        return tokens;
    }

    public static void main(String[] args) {
        String S = "xyz abc mnp \"asdf dfaa asdf\" asd 'fdas asdsdafF'";
        List<String> tokens = tokenizeString(S);
        for (String token : tokens) {
            System.out.println(token);
        }
    }
}
