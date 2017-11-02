/* package whatever; // don't place package name! */
import java.util.Scanner
import java.io.*
object myClass {
  @Throws(java.lang.Exception::class)
  @JvmStatic fun main(args:Array<String>) {
    val scanner = Scanner(System.`in`)
    val input = scanner.nextLine()
    var reverse = ""
    println("You entered: " + input)
    for (i in 0 until input.length)
    {
      reverse = input.get(i) + reverse
    }
    if (reverse == input)
    println("yup it's a palindrome")
    else
    println("nope, it ain't palindrome")
  }
}