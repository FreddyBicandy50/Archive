<?php

namespace App\Models;


class GetStudents
{
    public static function all()
    {
        $students=Students::all();

        return $students->map(function ($student) {
            return $student->toArray();
        });
    }
}
