<?php

namespace App\Http\Controllers\API;

use App\Http\Controllers\Controller;
use Illuminate\Http\Request;
use App\Models\User;

class UserController extends Controller
{
	
	public static function find(string $user_id)
	{
		$user = User::find($user_id); 
		return Response()->json([
			'data' => $user
		]);
	}

	public function update(Request $request, string $id)
	{
		//
	}

	public function destroy(string $id)
	{
		//
	}
}