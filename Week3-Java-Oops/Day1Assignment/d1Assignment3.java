class Student {
    int rollNumber;
    String name;
    char grade;

    
    Student(int rollNumber, String name, char grade) {
        this.rollNumber = rollNumber;
        this.name = name;
        this.grade = grade;
    }

    void display() {
        System.out.println("Roll No: " + rollNumber + ", Name: " + name + ", Grade: " + grade);
    }

    public static void main(String[] args) {
        Student s1 = new Student(1, "Rahul", 'A');
        Student s2 = new Student(2, "Priya", 'B');
        Student s3 = new Student(3, "Kiran", 'A');

        s1.display();
        s2.display();
        s3.display();
    }
}
