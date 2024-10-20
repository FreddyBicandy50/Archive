import 'package:flutter/material.dart';
import 'questionbank.dart';
import 'package:rflutter_alert/rflutter_alert.dart';

void main() => runApp(const Quizzler());

class Quizzler extends StatelessWidget {
  const Quizzler({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      home: Scaffold(
        backgroundColor: Colors.grey.shade900,
        body: SafeArea(
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 10.0),
            child: QuizPage(),
          ),
        ),
      ),
    );
  }
}

class QuizPage extends StatefulWidget {
  @override
  _QuizPageState createState() => _QuizPageState();
}

class _QuizPageState extends State<QuizPage> {
  QuestionBank questions = QuestionBank();
  String currentText = '';
  int index = 0;
  List<Widget> score = [];

  Expanded ftButton({var setColor, var setText}) {
    return Expanded(
      child: Padding(
        padding: const EdgeInsets.all(15.0),
        child: Container(
          color: setColor,
          child: TextButton(
              child: Text(
                setText,
                style: const TextStyle(fontSize: 20.0, color: Colors.white),
              ),
              onPressed: () {
                setState(() {
                  if (index < questions.length()) {
                    index++;
                    if (setText == "True") {
                      questions.answers(true);
                      score.add(
                        const Expanded(
                          child: Padding(
                            padding: EdgeInsets.all(8.0),
                            child: Icon(Icons.check, color: Colors.green),
                          ),
                        ),
                      );
                    } else if (setText == "False") {
                      questions.answers(false);
                      score.add(
                        const Expanded(
                          child: Padding(
                            padding: EdgeInsets.all(8.0),
                            child: Icon(Icons.close, color: Colors.red),
                          ),
                        ),
                      );
                    }
                  }
                  if (index == questions.length()) {
                    index = 0;
                    score = [];
                    int result = questions.getResults();
                    Alert(
                      context: context,
                      title: "Thank you for helping",
                      desc: "score $result out of ${questions.length()}",
                    ).show();
                    questions.reset();
                  }
                  currentText = questions.displayText(index);
                });
              }),
        ),
      ),
    );
  }

  @override
  void initState() {
    super.initState();
    currentText = questions.displayText(index);
  }

  @override
  Widget build(BuildContext context) {
    return Column(
      mainAxisAlignment: MainAxisAlignment.spaceBetween,
      crossAxisAlignment: CrossAxisAlignment.stretch,
      children: <Widget>[
        Expanded(
          flex: 5,
          child: Padding(
            padding: const EdgeInsets.all(10.0),
            child: Center(
              child: Text(
                currentText,
                textAlign: TextAlign.center,
                style: const TextStyle(fontSize: 25.0, color: Colors.white),
              ),
            ),
          ),
        ),
        ftButton(setColor: Colors.green, setText: "True"),
        ftButton(setColor: Colors.red, setText: "False"),
        Row(children: score)
      ],
    );
  }
}
