<?php

namespace App\Http\Controllers;
use Illuminate\Http\Request;
use App\Models\Student;

class GetStudents extends Controller
{
    public static function all()
    {
        $students = Student::all();

        return $students->map(function ($student) {
            return $student->toArray();
        });
    }

    public static function find($id): array
    {
        // Using Eloquent's find method for better efficiency
        $student = Student::find($id);

        if ($student) {
            return $student->toArray();
        }
        abort(404, "Student not found");
    }

}
