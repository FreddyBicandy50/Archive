<?php

use App\Http\Controllers\GetStudents;
use Illuminate\Support\Facades\Route;


Route::get('/', function () {
    $students = GetStudents::all();
    dd($students);
});

Route::get('/{id}', function ($id) {
    $students = GetStudents ::find($id);
    return  response()->json($students);
});
