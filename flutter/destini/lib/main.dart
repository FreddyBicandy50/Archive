import 'dart:ui';
import 'package:destini/story.dart';
import 'package:flutter/material.dart';

void main() => runApp(const Destini());

class Destini extends StatefulWidget {
  const Destini({super.key});

  @override
  State<Destini> createState() => _DestiniState();
}

class _DestiniState extends State<Destini> {
  Story story = Story();
  String storyText = "";
  String choice1Text = "";
  String choice2Text = "";
  List<Widget> buttons = [];
  late bool option;
  late bool reset = false;

  Widget button(getColor, String getText) {
    return Padding(
      padding: const EdgeInsets.all(15.0),
      child: Container(
        padding: const EdgeInsets.all(7.0),
        height: 66,
        color: getColor,
        child: TextButton(
          onPressed: () {
            if (choice1Text == "Restart") {
              reset = true;
            }
            setState(() {
              if (reset) {
                story.resetStory();
                updateText();
                reset = false;
              } else {
                if (getColor == Colors.blueAccent && !reset) {
                  option = true;
                } else if (getColor == Colors.redAccent && !reset) {
                  option = false;
                }
                updateStory();
                updateText();
                if (choice1Text == "Restart") {
                  buttons.removeLast();
                }
              }
            });
          },
          child: Text(
            style: const TextStyle(
              color: Colors.white,
              fontWeight: FontWeight.bold,
            ),
            getText,
          ),
        ),
      ),
    );
  }

  void updateStory() => story.nextStory(option);

  void updateText() {
    storyText = story.textStory();
    choice1Text = story.choice1textStory();
    choice2Text = story.choice2textStory();
    buttons = [
      button(Colors.blueAccent, choice1Text),
      button(Colors.redAccent, choice2Text),
    ];
  }

  @override
  void initState() {
    super.initState();
    story.makeStory();
    updateText();
  }

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      home: Scaffold(
        backgroundColor: Colors.white,
        body: Container(
          height: double.infinity,
          width: double.infinity,
          decoration: const BoxDecoration(
            image: DecorationImage(
              image: AssetImage("assets/background.png"),
              fit: BoxFit.cover,
            ),
          ),
          child: SafeArea(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.stretch,
              children: [
                Expanded(
                  child: Padding(
                    padding: const EdgeInsets.all(12.0),
                    child: Text(
                      storyText,
                      style: const TextStyle(
                          color: Colors.white, fontFamily: "Arima", fontWeight: FontWeight.bold, fontSize: 30),
                    ),
                  ),
                ),
                Column(
                  crossAxisAlignment: CrossAxisAlignment.stretch,
                  children: buttons,
                ),
                const SizedBox(height: 12),
              ],
            ),
          ),
        ),
      ),
    );
  }
}
