import java.util.Scanner;
public class f
{
    public static void main(String[] args)
    {
        
        Scanner myscan = new Scanner (System.in);
// функция сканера next() возвращает очередное слово, 
// которое пользователь вводит с клавиатуры:
String word = myscan.next ();  // считать строчку до ближайшего пробела или enter

// функция сканера next() считает целую строку до ближайшего enter: 
String line = myscan.nextLine ();

    }
    
}