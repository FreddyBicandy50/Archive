<?php

namespace App\Models;

use Illuminate\Database\Eloquent\Model;

class Student extends Model
{
    protected $table = 'users'; // Specify the table name if it's not the plural form of the model name
    protected $fillable = ['name', 'email','password']; // Allow these fields to be mass-assigned
}
