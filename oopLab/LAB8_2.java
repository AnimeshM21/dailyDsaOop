class invalidDayException extends Exception {
    public invalidDayException(String message) {
        super(message);
    }
}

class invalidMonthException extends Exception {
    public invalidMonthException(String message) {
        super(message);
    }
}

class invalidYearException extends Exception {
    public invalidYearException(String message) {
        super(message);
    }
}

class currentDate {
    int date;
    int month;
    int year;

    public currentDate() {
        date = 0;
        month = 0;
        year = 0;
    }

    public void createDate(int d, int m, int y) throws invalidDayException,invalidMonthException,invalidYearException{
        if(d<1 || d>31){
            throw new invalidDayException("Enter appropriate date value(between 1 and 31)");
        }
        

        if(m<1 || m>12){
            throw new invalidMonthException("Enter appropriate month value(between 1 and 12)");
        }
        

        if(y<2005 || y>2024){
            throw new invalidYearException("Enter appropriate Year value(between 2005 and 2024)");
        }
        
        if((m== 2 || m == 4 || m == 6 || m == 9 || m == 11) && d>30){
            throw new invalidDayException("This month has 30 days only");
        }
        this.year = y;
        this.month = m;
        this.date = d;
        System.out.println(d +"/"+ m +"/"+ y);
    }

}

public class LAB8_2 {
    public static void main(String args[]){
        currentDate myDOB = new currentDate();

        try{
            System.out.println("Adding  the  current date:");
            myDOB.createDate(21, 07, 2005);
        }
        catch(invalidDayException | invalidMonthException | invalidYearException e){
            System.out.println("Exception Caught: " + e.getMessage());

        }
        finally{
            System.out.println("All done!!");
        }
    }
}
