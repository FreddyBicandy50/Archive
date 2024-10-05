import 'package:flutter/material.dart';

// NOTES:
// Containers by Default (ps:without a child) cover the whole screen

// Axis alignment options:
// MainAxisAlignment.start/center/end,
// Cross Axis align is the options so in this case its the horizontal axis
// Axis alignment options:
// MainAxisAlignment.start/center/end,
// Using margin to change the container position
// Different type od EdgeInsets:
// symmetric(vertical: 20.0, horizontal: 15.0)
// fromLTRB(left, top, right, bottom)
// only(left:)

// using padding to change the position of whats inside the container
// padding: const EdgeInsets.symmetric(horizontal: 10, vertical: 30),

// The Rows and Columns have both axis the main refers to their role Column MainAxis => vertical
// column or row will by default resize the cross axis to fit the largest child
// to make it wider we can simply create an empty container with a larger width

void main() => runApp(const MyApp());

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.teal,
        body: SafeArea(
          child: Row(
            children: [
              Container(
                color: Colors.red,
                width: 100,
              ),
              Column(
                mainAxisAlignment: MainAxisAlignment.center,
                children: [
                  Container(
                    width: 100,
                    height: 100,
                    color: const Color.fromARGB(255, 76, 175, 80),
                  ),
                  Container(
                    width: 100,
                    height: 100,
                    color: const Color.fromARGB(255, 255, 235, 59),
                  ),
                  const SizedBox(
                    width: 210,
                  ),
                ],
              ),
              Container(
                color: Colors.blue,
                width: 100,
              ),
            ],
          ),
        ),
      ),
    );
  }
}
