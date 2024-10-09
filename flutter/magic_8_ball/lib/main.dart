import 'dart:math';
import 'package:flutter/material.dart';

void main() {
  runApp(const MagicBall());
}

class AnswerMe extends StatefulWidget {
  const AnswerMe({super.key});

  @override
  State<AnswerMe> createState() => _AnswerMeState();
}

class _AnswerMeState extends State<AnswerMe> {
  int answer = 5;
  @override
  Widget build(BuildContext context) {
    return SafeArea(
      child: Center(
        child: Expanded(
          child: Padding(
            padding: const EdgeInsets.all(20.0),
            child: TextButton(
              onPressed: () {
                setState(() {
                  int prev = answer;
                  while (prev == answer) {
                    answer = Random().nextInt(3) + 1;
                  }

                });
              },
              child: Image.asset(
                "images/ball$answer.png",
              ),
            ),
          ),
        ),
      ),
    );
  }
}

class MagicBall extends StatelessWidget {
  const MagicBall({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      home: Scaffold(
        backgroundColor: Colors.blueAccent,
        appBar: AppBar(
          backgroundColor: Colors.blueAccent,
          title: const Center(
            child: Text(
              style: TextStyle(
                fontWeight: FontWeight.bold,
                color: Colors.white,
                letterSpacing: 1.5,
              ),
              "Ask Me Anything",
            ),
          ),
        ),
        body: const AnswerMe(),
      ),
    );
  }
}
