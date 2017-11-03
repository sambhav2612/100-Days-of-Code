package start
import java.util.Scanner
import java.io.*
object start {
  @JvmStatic fun main(args:Array<String>) {
    val scan = Scanner(System.`in`)
    println("Enter a number you wan to shift: ")
    val n = scan.nextInt()
    println("You entered: " + n + "\nNow, enter right or left shifting:")
    val ch = scan.next().get(0)
    println("You entered: " + ch + "\nNow, enter how much to:")
    val x = scan.nextInt()
    println("\nShifting to " + x + " times on " + ch)
    if (ch == 'r')
    {
      n = n shr x
    }
    if (ch == 'l')
    {
      n = n shl x
    }
    println("Number after shift: " + n)
  }
}