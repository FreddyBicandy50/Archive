<?php

use Illuminate\Support\Facades\Route;
use App\Http\Controllers\API\UserController;
use App\Http\Controllers\API\AuthController;
use App\Http\Controllers\API\NoteController;
use App\Http\Controllers\API\OpenaiController;


Route::post('/login',[AuthController::class,'login']);
Route::post('/register',[AuthController::class,'register']);
Route::post('/user/{id}',[UserController::class,'find']);


Route::middleware('auth:sanctum')->post('/user/{id}/notes',[NoteController::class,'index']);
Route::middleware('auth:sanctum')->post('/user/{user_id}/note/{note_id}',[NoteController::class,'show']);

Route::post('/askai',[OpenaiController::class,'askai']);