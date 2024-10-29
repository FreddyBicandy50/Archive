import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'custom_card.dart';
import 'package:syncfusion_flutter_sliders/sliders.dart';

void main() {
  const int primaryColor = 0xFF1d2136;
  runApp(MaterialApp(
    debugShowCheckedModeBanner: false,
    theme: ThemeData(
      brightness: Brightness.dark,
      fontFamily: "Source Sans Pro",
      scaffoldBackgroundColor: const Color(primaryColor),
      appBarTheme: const AppBarTheme(backgroundColor: Color(primaryColor)),
      useMaterial3: false,
    ),
    home: const BMI(),
  ));
}

class BMI extends StatefulWidget {
  const BMI({super.key});

  @override
  State<BMI> createState() => _BMIState();
}

class _BMIState extends State<BMI> {
  bool male = false;
  bool female = false;
  int notPressed = 0xFF25263b;
  int isPressed = 0xFF323244;
  double _value = 150;
  //TODO : Gender fix Controller function
  void getGender(int button) {
    if (!male && button == 1) {
      male = true;
      female = false;
    } else if (!female && button == 2) {
      female = true;
      male = false;
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        appBar: AppBar(
          title: const Center(
            child: Text(
              "BMI CALCULATOR",
              style: TextStyle(color: Colors.white),
            ),
          ),
        ),
        body: Expanded(
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.stretch,
            children: [
              Expanded(
                child: Row(
                  children: [
                    Expanded(
                      child: ElevatedButton(
                        onPressed: () {
                          setState(() {
                            getGender(1);
                          });
                        },
                        style: ElevatedButton.styleFrom(
                          backgroundColor: Colors.transparent,
                          shadowColor: Colors.transparent,
                          padding: EdgeInsets.zero,
                        ),
                        child: customCard(
                          getColor: male ? notPressed : isPressed,
                          getWidgets: const [
                            Expanded(child: Icon(Icons.male, size: 110)),
                            Text("MALE"),
                          ],
                        ),
                      ),
                    ),
                    const SizedBox(width: 5),
                    Expanded(
                      child: ElevatedButton(
                        onPressed: () {
                          setState(() {
                            getGender(2);
                          });
                        },
                        style: ElevatedButton.styleFrom(
                          backgroundColor: Colors.transparent,
                          shadowColor: Colors.transparent,
                          padding: EdgeInsets.zero,
                        ),
                        child: customCard(
                          getColor: female ? notPressed : isPressed,
                          getWidgets: const [
                            Expanded(child: Icon(Icons.female, size: 110)),
                            Text("FEMALE"),
                          ],
                        ),
                      ),
                    ),
                  ],
                ),
              ),
              Expanded(
                child: customCard(
                  getColor: isPressed,
                  getWidgets: [
                    const Padding(
                      padding: EdgeInsets.all(8.0),
                      child: Text(
                        "HEIGHT",
                        style: TextStyle(
                          fontWeight: FontWeight.bold,
                          fontSize: 15,
                          color: Color(0xFF6f6f7f),
                        ),
                      ),
                    ),
                    Row(
                      mainAxisAlignment: MainAxisAlignment.center,
                      children: [
                        Text(
                          "${_value.toInt()}",
                          style: const TextStyle(
                            fontWeight: FontWeight.bold,
                            fontFamily: "Arial",
                            fontSize: 50,
                          ),
                        ),
                        const Padding(
                          padding: EdgeInsets.only(top: 20.0),
                          child: Text("CM"),
                        )
                      ],
                    ),
                    Expanded(
                      child: SfSlider(
                        onChanged: (dynamic value) {
                          setState(() {
                            _value = value + 5;
                          });
                        },
                        min: 110,
                        max: 195,
                        value: _value,
                        showTicks: true,
                        interval: 5,
                      ),
                    ),
                  ],
                ),
              ),
              Expanded(
                child: Row(
                  children: [
                    Expanded(
                      child: customCard(
                        getColor: isPressed,
                        getWidgets: const [
                          Text("Weight"),
                        ],
                      ),
                    ),
                    const SizedBox(width: 5),
                    Expanded(
                      child: customCard(
                        getColor: isPressed,
                        getWidgets: [
                          const Text(
                            "AGE",
                            style: TextStyle(
                              fontWeight: FontWeight.bold,
                              fontSize: 15,
                              color: Color(0xFF6f6f7f),
                            ),
                          ),
                          const Text(
                            "10",
                            style: TextStyle(
                              fontWeight: FontWeight.bold,
                              fontFamily: "Arial",
                              fontSize: 50,
                            ),
                          ),
                          Expanded(
                            child: Row(
                              children: [
                                Expanded(
                                  child: Card(
                                    shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(100)),
                                    child: ElevatedButton(
                                      onPressed: () {},
                                      child: const Icon(Icons.remove),
                                    ),
                                  ),
                                ),
                                const SizedBox(width: 5),
                                Expanded(child: ElevatedButton(onPressed: () {}, child: const Icon(Icons.add))),
                              ],
                            ),
                          ),
                        ],
                      ),
                    ),
                  ],
                ),
              ),
            ],
          ),
        ));
  }
}
