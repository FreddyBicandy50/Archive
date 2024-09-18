<?php

namespace App\Models;

use Illuminate\Database\Eloquent\Factories\HasFactory;
use Illuminate\Database\Eloquent\Model;

class Note extends Model
{
    use HasFactory;

    protected $table="notes";
    protected $fillable = [
        'note',
        'user_id',
        'description',
        'created_at',
        'updated_at',
    ];

    public function User()
    {
        return $this->belongsTo(User::class);
    }
}
