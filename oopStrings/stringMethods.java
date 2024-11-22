import java.util.*;

public class stringMethods {
    public static void main(String args[]) {

        // STRINGS ARE IMMUTABLE SO ANY CHANGES TO A EXISTING STRING RETURN A NEW STRING

        String name = "Animesh";

        // // String name = new String("Animesh Mishra");
        // String name = "Animesh Mishra";
        // System.out.println(name);

        // // The string.length() method tell the length of the string
        // int slength = name.length();
        // System.out.println(slength);

        // // The .toLowerCase() methods makes all the characters of a string to lower
        // case
        // String lowerName = name.toLowerCase();
        // System.out.println(lowerName);

        // // The .toUpperCase() methods makes all the characters of a string to upper
        // case
        // String upperName = lowerName.toUpperCase();
        // System.out.println(upperName);

        // The .trim() methods remove any extra spaces from the string
        // String ex = "             Animesh       Mishra  ";
        // String trimmed = ex.trim();
        // System.out.println(trimmed);

        // // The .substring(int starting index, ending index(optional)) method gets the
        // substring from the main string
        // String myString = "Animesh";
        // System.out.println(myString.substring(3));

        // // the ending index doesn't include that index
        // String myString = "Animesh Mishra";
        // System.out.println(myString.substring(3,11));

        // // the .replace(existing char, new char) method replaces a certain character
        // String name = "Animesh Mishpa";
        // System.out.println(name);
        // System.out.println(name.replace('p','r'));

        // // the .startsWith(" ") methods return TRUE AND FALSE if the string starts
        // with a certain substring
        // System.out.println(name.startsWith("An"));

        // // the .endsWith(" ") methods return TRUE AND FALSE if the string ends with a
        // certain substring
        // System.out.println(name.endsWith("sh"));

        // // the charAt() methods returns the character present at that particular
        // index entered
        // System.out.println(name.charAt(3));

        // // the indexOf() methods returns the first occurence index of the character
        // entered
        // System.out.println(name.indexOf("m"));

        // the indexOf() methods returns the index of the character entered beyond
        // the index entered
        // String myname = "Animesh Mishra";
        // System.out.println(myname.indexOf("i",6));

        // the lastIndexOf() methods returns the last occurence index of the character
        // entered
        // String myname = "Animesh Mishra";
        // System.out.println(name.lastIndexOf("i"));

        // the lastIndexOf() methods returns the last occurence index of the character
        // entered before the entered index
        // String myname = "Animesh Mishra";
        // System.out.println(name.lastIndexOf("i",6));

        // the equals() methods returns TRUE AND FALSE if the string is equal to the
        // string entered
        // String myname = "Animesh Mishra";
        // System.out.println(name.equals("Animesh"));

        // the equalsIgnoreCase() methods returns TRUE AND FALSE if the string is equal
        // to the string entered ignoring uppercase and lowercase letters
        String myname = "Animesh";
        System.out.println(myname.equalsIgnoreCase("animesh"));

        // back slash is used to escape the character here for the double quote
        // System.out.println("Hello I am Animesh \" double quote");
    }

}