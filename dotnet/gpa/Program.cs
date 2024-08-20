string student = "Sophia Johnson";
int gradeA = 4;
int gradeB = 3;

List<string> courseNames = ["English 101", "Algebra 101", "Biology 101", "Computer Science I", "Psychology 101"];
List<int> Credit = [3, 3, 4, 4, 3];
List<int> grades = [gradeA, gradeB, gradeB, gradeB, gradeA];

int calculate(List<int> lists)
{
    int i;
    int sum;

    i = 0;
    sum = 0;
    while (i < lists.Count)
    {
        sum += lists[i];
        i++;
    }
    return sum;
}
void display()
{
    int i;
    string spaces;
    i = 0;
    Console.WriteLine("Course            Grade   Credit Hours	");
    spaces = "          ";
    while (i < courseNames.Count)
    {
        if (courseNames[i] == "Psychology 101")
            spaces = "       ";
        else if (courseNames[i] == "Computer Science I")
            spaces = "   ";
        else spaces = "          ";
        Console.WriteLine($"{courseNames[i]}{spaces}{grades[i]} \t\t{Credit[i]}");
        i++;
    }
    int totalgrade = calculate(grades);
    int totalcredit = calculate(Credit);
    Console.WriteLine($"Final GPA:     {totalgrade} ");
    float  gpa = totalgrade + totalcredit;
    Console.WriteLine($"Final GPA:     {gpa} ");
}

void main()
{
    display();
}

main();