<?php

namespace App\Http\Controllers\API;

use App\Http\Controllers\Controller;
use Illuminate\Http\Request;
use Response;
use GuzzleHttp\Client;
use GuzzleHttp\Exception\RequestException;

class OpenaiController extends Controller
{
    public static function askai(Request $request)
    {
        $key = "sk-proj-xJm65CsQ3WntBS7T4ZbFT3BlbkFJ5ESnDWqWPoTOqZvWtWrZ";
        $client = new Client();
        $question = $request->get("message");
        try {
            $response = $client->post("https://api.openai.com/v1/chat/completions", [
                "headers" => [
                    "Content-Type" => "application/json",
                    "Authorization" => "Bearer " . $key
                ],
                "json" => [
                    "model" => "gpt-3.5-turbo",
                    "messages" => [
                        [
                            "role" => "system",
                            "content" => $question
                        ]
                    ]
                ]
            ]);

            // Decode the response body
            $responseBody = json_decode($response->getBody(), true);
            $content = $responseBody['choices'][0]['message']['content'];
            return response()->json([
                'status' => true,
                'answer' => $content
            ]);
        } catch (RequestException $e) {
            if ($e->hasResponse()) {
                $statusCode = $e->getResponse()->getStatusCode();

                if ($statusCode === 401) {
                    return response()->json([
                        'status' => false,
                        'message' => 'Invalid API key'
                    ], 401);
                } elseif ($statusCode === 429) {
                    return response()->json([
                        'status' => false,
                        'message' => 'Rate limit exceeded'
                    ], 429);
                }
            }

            // Handle other request exceptions (network issues, etc.)
            return response()->json([
                'status' => false,
                'message' => 'API request failed',
                'error' => $e->getMessage()
            ], 500);
        } catch (\Exception $e) {
            // Handle any other exceptions
            return response()->json([
                'status' => false,
                'message' => 'An unexpected error occurred',
                'error' => $e->getMessage()
            ], 500);
        }
    }

}
