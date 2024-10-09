import 'package:flutter/material.dart';
import 'package:audioplayers/audioplayers.dart';

void main() {
  runApp(XyloPhone());
}

final player = AudioPlayer();

void playsound(int notenumber) {
    player.play(AssetSource("note$notenumber.wav"));

}

class XyloPhone extends StatelessWidget {
  XyloPhone({super.key});

  final double max_height = 110;

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      home: Scaffold(
        body: SafeArea(
            child: Column(
          children: [
            Container(
              color: Colors.red,
              height: max_height,
              width: double.infinity,
              child: TextButton(
                onPressed: () async {
                  playsound(1);
                },
                child: const Text(""),
              ),
            ),
            Container(
              color: Colors.orange,
              height: max_height,
              width: double.infinity,
              child: TextButton(
                onPressed: () async {
                  playsound(2);
                },
                child: const Text(""),
              ),
            ),
            Container(
              color: Colors.yellow,
              height: max_height,
              width: double.infinity,
              child: TextButton(
                onPressed: () {
                  playsound(3);
                },
                child: const Text(""),
              ),
            ),
            Container(
              color: Colors.green,
              height: max_height,
              width: double.infinity,
              child: TextButton(
                onPressed: () async {
                  playsound(4);
                },
                child: const Text(""),
              ),
            ),
            Container(
              color: Colors.teal,
              height: max_height,
              width: double.infinity,
              child: TextButton(
                onPressed: () async {
                  playsound(5);
                },
                child: const Text(""),
              ),
            ),
            Container(
              color: Colors.blue,
              height: max_height,
              width: double.infinity,
              child: TextButton(
                onPressed: () async {
                  playsound(6);
                },
                child: const Text(""),
              ),
            ),
            Container(
              color: Colors.purple,
              height: max_height,
              width: double.infinity,
              child: TextButton(
                onPressed: () async {
                  playsound(7);
                },
                child: const Text(""),
              ),
            ),
          ],
        )),
      ),
    );
  }
}
