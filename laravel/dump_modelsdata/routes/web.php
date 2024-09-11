<?php

use Illuminate\Support\Facades\Route;

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

Route::get('/', function () {
    return view('welcome', [
        'greeting' => 'yow',
        'name' => 'its fredy'
    ]);
});

Route::get('/students', function () {
    return view('students', [
        'students' => students::all(),
    ]);
});

Route::get('/students/{id}', function ($id) {
    return response()->json(students::find($id));
});

//Route::get('/students/{id}', function ($id) {
//    #send response as grade
//    $grades = [
//        ['id' => 1, 'grade' => 99],
//        ['id' => 2, 'grade' => 5],
//        ['id' => 3, 'grade' => 7],
//        ['id' => 4, 'grade' => 9],
//    ];
//    foreach ($grades as $grade) {
//        if ($grade['id'] == $id) {
//            return view('grades', ['grade' => $grade]);
//        }
//    }
//});
