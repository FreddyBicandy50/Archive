// initialize variables - graded assignments 



List<int> sophia = [93, 87, 98, 95, 100];
List<int> nicolas = [80, 83, 82, 88, 85];
List<int> zahirah = [84, 96, 73, 85, 79];
List<int> jeong = [90, 92, 98, 100, 97];


float calculate(List<int> student)
{
	int i;
	float sum;

	i = 0;
	sum = 0;
	while (i < student.Count)
	{
		sum += student[i];
		i++;
	}
	return sum / student.Count;
}


void display(string name,float grade)
{
	char grade_letter='F';
	if (grade >= 90)
		grade_letter = 'A';
	else if (grade >= 80)
		grade_letter = 'B';
	else if (grade >= 70)
		grade_letter = 'C';
	else if (grade >= 60)
		grade_letter = 'D';
	else if (grade < 60)
		grade_letter = 'F';

	Console.WriteLine($"{name}:   \t {grade}\t{grade_letter}");
}

void main()
{
	display("Sophia", calculate(sophia));
	display("Nicolas", calculate(nicolas));
	display("Zahirah", calculate(zahirah));
	display("Jeong", calculate(jeong));
}

main();