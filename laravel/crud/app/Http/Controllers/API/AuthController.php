<?php

namespace App\Http\Controllers\API;

use App\Models\User;

use Auth;
use App\Http\Controllers\Controller;
use Illuminate\Http\Request;

class AuthController extends Controller
{
    public static function login(Request $request)
    {
        $credentials = $request->only(["email", "password"]);
        if (Auth::attempt($credentials)) {

            $user = Auth::user();
            $token = $user->createToken('authtoken')->plainTextToken;

            return response()->json([
                'status' => true,
                'token' => $token,
                'message' => "User Logged in Successfully",
                'data' => $user
            ]);

        } else {

            return response()->json([
                'status' => false,
                "message" => "Wrong User name or password"
            ]);
        }
    }

    public function register(Request $request)
    {
        $new_user = User::where('email', $request->email)->first();
        if ($new_user != NULL) {
            return response()->json([
                'status' => false,
                'message' => "User already defined",
            ]);
        }

        $new_user = new User();
        $new_user->name = $request->get('name');
        $new_user->email = $request->get('email');
        $new_user->password = bcrypt($request['password']);
        $new_user->save();
        $token = $new_user->createToken('authtoken')->plainTextToken;
        return response()->json([
            'status' => true,
            'message' => 'User created Successfully',
            'token' => $token,
            'data' => $new_user
        ]);
    }
}
