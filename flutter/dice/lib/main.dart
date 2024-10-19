import 'dart:math';
import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(
    debugShowCheckedModeBanner: false,
    home: Scaffold(
      backgroundColor: Colors.red,
      appBar: AppBar(
        title: const Center(
            child: Text(
                style: TextStyle(
                  color: Colors.white,
                  fontWeight: FontWeight.bold,
                ),
                "Dice")),
        backgroundColor: Colors.red,
      ),
      body: RunDice(),
    ),
  ));
}

class RunDice extends StatefulWidget {
  const RunDice({super.key});

  @override
  State<RunDice> createState() => _RunDiceState();
}

class _RunDiceState extends State<RunDice> {
  int leftDice = 1;
  int rightDice = 2;

  void rollDice() {
    setState(() {
      leftDice = Random().nextInt(6) + 1;
      rightDice = Random().nextInt(6) + 1;
    });
  }

  @override
  Widget build(BuildContext context) {
    return Center(
      child: Row(
        children: [
          Expanded(
            child: TextButton(
              onPressed: () {
                rollDice();
              },
              child: Image.asset(
                "images/dice$leftDice.png",
              ),
            ),
          ),
          Expanded(
            child: TextButton(
              onPressed: () {
                rollDice();
              },
              child: Image.asset(
                "images/dice$rightDice.png",
              ),
            ),
          ),
        ],
      ),
    );
  }
}
