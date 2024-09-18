<?php

namespace App\Http\Controllers\API;

use App\Http\Controllers\Controller;
use Illuminate\Http\Request;
use App\Models\Note;
use Response;

class NoteController extends Controller
{

    public static function index(string $user_id)
    {
        //$data = Note::where('user_id', $user_id)->get()->paginate(2);
        $data = Note::where('user_id', $user_id)->get()->all();
        if (!$data) {
            return Response()->json([
                'status' => false,
                'message' => "user note found"
            ]);
        }
        return Response()->json([
            'data' => $data
        ]);
    }

    public function show(string $user_id, string $note_id)
    {
        $data = Note::where('user_id', $user_id)->get()->find($note_id);
        if (!$data) {
            return Response()->json([
                'status' => false,
                'message' => "user note found"
            ]);
        }
        return Response()->json([
            'data' => $data
        ]);
    }
    
    public static function store(Request $request)
    {
        $new_note = Note::create($request->all());
        return response()->json([
            'status' => true,
            'message' => "new note is created",
            'data' => $new_note
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
