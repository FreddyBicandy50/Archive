<?php

use Illuminate\Support\Facades\Route;


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
