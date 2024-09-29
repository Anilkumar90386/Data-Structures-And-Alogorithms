fun f(x: Int, y: Int) {
    if (x < y) {
        println("$x $y")
    } else {
        println("$y $x")
    }
}

fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        val (x, y) = readLine()!!.split(" ").map { it.toInt() }
        f(x, y)
    }
}
