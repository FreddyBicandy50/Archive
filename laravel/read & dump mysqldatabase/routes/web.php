<?php

use Illuminate\Support\Facades\Route;
use App\Models\GetStudents;

Route::get('/students', function () {
    // Fetch all students
    $students =GetStudents::all();

      dd($students);
});

Route::get('/', function () {
    return view('welcome');
});
