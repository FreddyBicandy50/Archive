<?php
namespace App\Models;

class students
{
    public static function all(): array
    {
        return [
            [
                'id' => 1,
                'name' => 'fredy',
                'grade' => '98'
            ],
            [
                'id' => 2,
                'name' => 'ali',
                'grade' => '98'
            ],
            [
                'id' => 3,
                'name' => 'marie',
                'grade' => '98'
            ],
            [
                'id' => 4,
                'name' => 'salwa',
                'grade' => '98'
            ],
        ];
    }

    public static function find($id): array
    {
        $students = self::all();
        foreach ($students as $student) {
            if ($student['id'] == $id) {
                return $student;
            }
        }
        return [
            'error' => 'Student not found',
            'status' => '404'
        ];
    }
}
