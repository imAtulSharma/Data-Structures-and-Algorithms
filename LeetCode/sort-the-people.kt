class Solution {
    data class Person(
        val name: String,
        val height: Int
    )

    fun sortPeople(names: Array<String>, heights: IntArray): Array<String> {
        val persons = names.mapIndexed { index, name ->
            Person(
                name = name,
                height = heights[index]
            )
        }

        return persons.sortedByDescending { it.height }.map { it.name }.toTypedArray()
    }
}