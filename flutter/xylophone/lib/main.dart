import 'package:flutter/material.dart';
import 'package:audioplayers/audioplayers.dart';

void main() => runApp(XyloPhone());

class XyloPhone extends StatelessWidget {
  XyloPhone({super.key});

  final double max_height = 110;
  final player = AudioPlayer();

  void playSound(int number) => player.play(AssetSource('note$number.wav'));

  Expanded ftButton(int getNote, getColor) {
    return Expanded(
      child: Container(
        color: getColor,
        child: TextButton(
          onPressed: () {
            playSound(getNote);
          },
          child: const Text(""),
        ),
      ),
    );
  }

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      home: Scaffold(
        body: SafeArea(
            child: Column(
          crossAxisAlignment: CrossAxisAlignment.stretch,
          children: [
            ftButton(1, Colors.red),
            ftButton(2, Colors.orange),
            ftButton(3, Colors.green),
            ftButton(4, Colors.blue),
            ftButton(5, Colors.purple),
            ftButton(6, Colors.pink),
            ftButton(7, Colors.yellow),
          ],
        )),
      ),
    );
  }
}
