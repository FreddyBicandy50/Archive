<?php

use Illuminate\Support\Facades\Route;

Route::get('/', function () {
    return view('home', [
        'greeting' => 'yow',
        'name' => 'its fredy'
    ]);
});


Route::get('/students', function () {
    return view('students',
        #you can pass the data as an object think of it like jason
        [
            'students' =>
                [
                    ['id' => 1, 'name' => 'fredy'],
                    ['id' => 2, 'name' => 'ali'],
                    ['id' => 3, 'name' => 'marie'],
                    ['id' => 4, 'name' => 'salwa'],
                ]
        ]
    );
});

Route::get('/students/{id}', function ($id) {
    #send response as jason
    $grades = [
        ['id' => 1, 'grade' => 99],
        ['id' => 2, 'grade' => 5],
        ['id' => 3, 'grade' => 7],
        ['id' => 4, 'grade' => 9],
    ];

    foreach ($grades as $grade) {
        if ($grade['id'] == $id) {
            return response()->json($grade);
        }
    }

    return response()->json(['error' => 'Grade not found'], 404);
});

Route::get('/students/{id}', function ($id) {
    #send response as grade
    $grades = [
        ['id' => 1, 'grade' => 99],
        ['id' => 2, 'grade' => 5],
        ['id' => 3, 'grade' => 7],
        ['id' => 4, 'grade' => 9],
    ];

    foreach ($grades as $grade) {
        if ($grade['id'] == $id) {
            return view('grades', ['grade' => $grade]);
        }
    }
});
