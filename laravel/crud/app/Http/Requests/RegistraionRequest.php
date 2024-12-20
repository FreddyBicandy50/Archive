<?php

namespace App\Http\Requests;

use Illuminate\Foundation\Http\FormRequest;

class RegistraionRequest extends FormRequest
{
    public function authorize(): bool
    {
        return true;
    }

    public function rules(): array
    {
        return [
            'name' => 'required',
            'email' => 'required|email|unique:users,email',
            'password' => 'required|min:8',
            //'role'=> Rule::in("admin","user");
        ];
    }
}
